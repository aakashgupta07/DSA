#include<stdio.h>
#include<conio.h>
void quick_sort(int a[],int first,int last)
{
	int low,high,key,temp;
	low=first;
	high=last;
	key=a[(low+high)/2];
	while(low<=high)
	{
		while(a[low]<key)
		{
			low++;
		}
		while(a[high]>key)
		{
			high--;
		}
		if(low<=high)
		{
			temp=a[low];
			a[low]=a[high];
			a[high]=temp;
			low++;
			high--;
		}
		for(int k=0;k<6;k++)
	{
		printf("%d",a[k]);
		printf("\t");d
	}
	printf("\n");
	}
	if(first<high)
	quick_sort(a,first,high);
	if(low<last)
	quick_sort(a,low,last);
}
void main()
{
	int a[8],i;
	for(i=0;i<6;i++)
	{
		printf("Enter the value of index %d ::",i);
		scanf("%d",&a[i]);
	}
	quick_sort(a,0,5);
	printf("Final result\n");
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}