<<<<<<< HEAD
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
  j=bsearch(a,10,val);
  if(j==0)
    printf("searched value found \n");
    else 
    printf("searched value not found");
  }
  int bsearch(int a[],int n, int x)
  {
    int low=0;
    int high=n-1;
    int flag=1;
    int mid;
    while(low<=high)
    {
      mid=(high+low)/2;
      if(x<a[mid])
      {
        high=mid-1;
      } else if(x>a[mid])
      {
        low=mid+1;
      } else if(x==a[mid])
      {
        return 0;
      }
    }
      return flag;
  }
=======
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
>>>>>>> d5d4543ff792200afc9e5c106738cb0715e8044c
