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
  bubble_sort(a,n);
  display(a,n);
}

void bubble_sort(int a[MAX], int n)
{
  int i,j,k,temp;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
      printf("\n");
      for(k=0;k<n;k++)
      {
        printf("\tarray[%d]=%d",k,a[k]);
      }
    }
  }
}

void display(int a[MAX], int n)
{
  int i;
  for(i=0;i<n;i++)
  {
  printf("\na[%d]=%d",i,a[i]);
  }
}