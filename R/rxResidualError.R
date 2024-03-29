#' A description of Rode2 supported residual errors
#'
#' @format A data frame with 6 columns and 181 rows
#' \describe{
#' \item{Error model}{A description of the type of residual error}
#' \item{Functional Form}{For additive and proportional what functional form is used}
#' \item{Transformation}{The type of transformation that is done on the DV and the prediction}
#' \item{code}{Example code for the residual error type}
#' \item{addProp}{The type of add+prop residual error default that would be equivalent}
#' \item{lhs}{what the left handed side of the specification represents, either a response variable, or a compartment specification}
#' }
"rxResidualError"
