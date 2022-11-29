#include <stdio.h>
#include "mylib/mylib.h"
int main(void){
    int N = 3;
    printf("F(%d) Iterative = %d\n",N,fibonacciIterative(N));
    printf("F(%d) Recursive = %d\n",N,fibonacciRecursive(N));
    return 0;
}