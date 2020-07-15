#include<stdio.h>
main()
{
	int n, count,navg = 0;
	float x, average, sum = 0;
	
	printf("How many numbers?");
	scanf("%d", &n);
	
	for(count = 1;count <=n; ++count)
	{
		printf("x= ");
		scanf("%f",&x);
		if(x<0) continue;
		sum +=x;
		++navg;
	}
	average = sum/navg;
	printf("\nThe average is %f\n", average);
	
}
