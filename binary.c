#include<stdio.h>
void main()
{
  int i,j,val,a[10];
  printf("Enter a elements of an array\n");
  for(i=0;i<10;i++)
  {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
  }
  printf("\nEnter a search value");
  scanf("%d",&val);
}
