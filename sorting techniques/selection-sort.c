# define N 5

void sel_sort(int a[],int n)
{
	int i,j,temp,min;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if( a[j]<a[min])
				min=j;
		}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
	}
}
void main()
{
	int a[N],i;
	for(i=0;i<N;i++)
	{
		printf("Enter No %d : ",i+1);
		scanf("%d",&a[i]);
	}
	sel_sort(a,N);
	for(i=0;i<N;i++)
	{
		printf("No %d ::%d\n",i+1,a[i]);
	}
	getch();
}

