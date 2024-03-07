# Get gene names annotation
library(biomaRt)

# Establish connection to Ensembl
ensembl <- useMart("ensembl")
ensembl_datasets <- listDatasets(ensembl)
ensembl <- useDataset("sscrofa_gene_ensembl", mart = ensembl)

# Get attributes and filters
filters <- listFilters(ensembl)
attributes <- listAttributes(ensembl)

# Retrieve gene information
t2g <- getBM(attributes = c('ensembl_gene_id', 'chromosome_name', 'start_position', 'end_position'), mart = ensembl)

# Assuming TPM is a data frame and ensembl_gene_id column exists
my_ids <- data.frame(row.names(TPM))
colnames(my_ids)[1] <- "ensembl_gene_id"

# Merge data frames
my_chrom <- merge(my_ids, t2g, by = 'ensembl_gene_id')

# Filter out rows containing "X" in column 2 of my_chrom
filtered_my_chrom <- subset(my_chrom, my_chrom$chromosome_name != "X")

# Define the values of the penalty matrix endoderm
penalty_matrix_endoderm <- matrix(
  c(
    "ridge_liver_30", "fusion_L30-70", "0", "0", "0", "0", "0", "0", "0",
    "fusion_L30-70", "ridge_liver_70", "0", "0", "0", "0", "0", "0", "0",
    "0", "0", "ridge_liver_NB", "0", "0", "0", "0", "0", "0",
    "0", "0", "0", "ridge_lung_30", "0", "0", "fusion_Lu30-I30", "0", "0",
    "0", "0", "0", "0", "ridge_lung_70", "fusion_Lu70-NB", "0", "0", "0",
    "0", "", "0", "0", "fusion_Lu70-NB", "ridge_lung_NB", "0", "0", "0",
    "0", "0", "0", "fusion_Lu30-I30", "0", "0", "ridge_intestine_30", "0", "0",
    "0", "0", "0", "0", "0", "ridge_intestine_70", "fusion_I70-NB", "0", "0",
    "0", "0", "0", "0", "fusion_I70-NB", "ridge_intestine_NB"
  ),
  nrow = 9,  # Specify the number of rows
  byrow = TRUE,  # Specify whether the matrix is filled by rows (TRUE) or by columns (FALSE)
  dimnames = list(
    c("L30", "L70", "LNB", "Lu30", "Lu70", "LuNB", "I30", "I70", "INB"),  # Row names
    c("L30", "L70", "LNB", "Lu30", "Lu70", "LuNB", "I30", "I70", "INB")  # Column names
  )
)

# Print the penalty matrix
print(penalty_matrix_endoderm)
