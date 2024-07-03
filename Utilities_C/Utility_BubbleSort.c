#include <stdio.h>
int BubbleSort(int n, int a[n])
{
  int temp;
  for (int i = n; i--;)
  {
    for (int j = n; j--;)
    {
      if(a[i] < a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  for(int changer = n; changer--;)
  {
    printf("%d ", a[changer]);
  }
}
