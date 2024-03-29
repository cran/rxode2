% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/rxOptExpr.R
\name{rxOptExpr}
\alias{rxOptExpr}
\title{Optimize rxode2 for computer evaluation}
\usage{
rxOptExpr(x, msg = "model")
}
\arguments{
\item{x}{rxode2 model that can be accessed by rxNorm}

\item{msg}{This is the name of type of object that rxode2 is
optimizing that will in the message when optimizing.  For
example "model" will produce the following message while
optimizing the model:

finding duplicate expressions in model...}
}
\value{
Optimized rxode2 model text.  The order and type lhs and
state variables is maintained while the evaluation is sped up.
While parameters names are maintained, their order may be
modified.
}
\description{
This optimizes rxode2 code for computer evaluation by only
calculating redundant expressions once.
}
\author{
Matthew L. Fidler
}
