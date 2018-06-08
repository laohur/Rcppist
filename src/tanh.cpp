
#include <Rcpp.h>
#include <cmath>

using namespace Rcpp; 

//放弃，r丢失精度

// [[Rcpp::export]]
NumericVector tanh(const NumericVector & X) {
    int n=X.size();
    NumericVector Y(n);
    for(int i=0; i<n; i++){
        Y[i]=tanh(X[i]);
    }
    return Y;
}



