#include <stdio.h>
 
int main()
{
  int n,,nn,sum = 0,i,c value;
 scanf("%d", &nn);
    printf("Enter %d elements in the array: ", nn);
    for(i=0; i<nn; i++)
    {
        scanf("%d", &arr[i]);
    }
  printf("How many numbers you want to add?\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 1; c <= n; c++)
  {
    scanf("%d", &value);
    sum = sum + value;
  }
 
  printf("Sum of the integers = %d\n", sum);
 
  return 0;
}
