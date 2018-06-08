
#include <Rcpp.h>
#include <cmath>

using namespace Rcpp; 

// [[Rcpp::export]]
NumericVector l2lise (const NumericVector & X) {
    int n=X.size();
    NumericVector Y(n);
    double sum=0;
    for(int i=0; i<n; i++){
        Y[i]=X[i]*X[i];
        sum+=Y[i];
    }
    sum=sqrt(sum);
    for(int i=0; i<n; i++){
        Y[i]=Y[i]/sum;
    }

    return Y;
}



