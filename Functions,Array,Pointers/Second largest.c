/*13. Find the second largest number in the array  */
/* 13. Find the second largest number in the array */
#include<stdio.h>
int main()
{
	int i,a[5],max,semax=0;
	for(i=0;i<=4;i++)
	{
		printf("Enter the 5 integers to store\n");
		scanf("%d",&a[i]);
		
	}
	max = a[0];
	for(i=0;i<=4;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	
	}
	for(i=0;i<=4;i++)
	{
		if(max>a[i])
		{
			if(a[i]>semax)
			{
				semax = a[i];
			}
			
		}
	}
	printf("The Largest number is %d ",max);
	printf("The Second Largest number is  %d",semax);
	return 0;
}
