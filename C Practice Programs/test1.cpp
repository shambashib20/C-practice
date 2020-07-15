#include<stdio.h>
main()
{
	int a[10],i,min;
	printf("Give the values\n");
	for(int i=0;i<10;i++)
	scanf("%d",&a[i]);
	min=a[0];
	
	for(int i=1;i<10;i++)
	{
		if(a[i]<min)
		  min=a[i];
		  
	}
    printf("\nMinimum is%d",min);
    
	
	
}
