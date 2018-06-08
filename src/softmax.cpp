

#include <Rcpp.h>
#include <cmath>

using namespace Rcpp; 


// [[Rcpp::export]]
NumericVector softmax (const NumericVector & X) {
    int n=X.size();
    NumericVector Y(n);
    double sum=0;
    for(int i=0; i<n; i++){
        Y[i]=exp(X[i]);
        sum+=Y[i];
    }
    for(int i=0; i<n; i++){
      Y[i]=Y[i]/sum;
    }
    return Y;
}



