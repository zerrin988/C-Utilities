#include <stdio.h>
#include <stdlib.h>

int cmpDescend(const void * a, const void * b) {return ( *(int*)a - *(int*)b );}

int qsortDescending(int val[], int n) {qsort(val, n, sizeof(int), cmpDescend);}
