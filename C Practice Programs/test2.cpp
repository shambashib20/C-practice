#include<stdio.h>
#define size [10];
main()
{
	int a[size],i,min;
	printf("Give 10 values\n");
	for(int i=0;i<size;i++)
	scanf("%d",&a[i]);
	min=a[0];
	for(int i=1;i<size;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		printf("\nMinimum");
		
	}
}
