
#include <Rcpp.h>
#include <cmath>

using namespace Rcpp; 


// [[Rcpp::export]]
double  cosineSimilarity  (const NumericVector & X,const NumericVector & Y) {
    if(X.size()!=Y.size()){
        return 0;
    }

    int n=X.size();
    double a=0,b=0,ab=0;

    for(int i=0; i<n; i++){
        ab+=X[i]*Y[i];
        a+=X[i]*X[i];
        b+=Y[i]*Y[i];
    }


    return ab/(sqrt(a)*sqrt(b));
}



