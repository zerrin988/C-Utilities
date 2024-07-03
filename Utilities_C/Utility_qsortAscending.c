#include <stdio.h>
#include <stdlib.h>

int cmpAscend(const void * a, const void * b) {return ( *(int*)a - *(int*)b );}

int qsortAscending(int val[], int n) {qsort(val, n, sizeof(int), cmpAscend);}
