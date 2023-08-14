#include<stdio.h>
#define MAX 20
void bubble_sort(int a[MAX], int n);
void display(int a[MAX], int n);
void main()
{
  int a[MAX],n,i;
  printf("Enter a size of array\n");
  scanf("%d",&n);
  printf("Enter a elements of an aaray\n");
  for(i=0;i<n;i++)
  {
    printf("array a[%d] = ",i);
    scanf("%d",&a[i]);
  }
}