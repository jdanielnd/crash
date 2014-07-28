
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
int crash() {
   
    abort();
    
    return 0;
}
