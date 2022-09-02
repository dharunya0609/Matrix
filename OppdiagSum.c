#include<stdio.h>
 
int main()
{
 	int i, j,n1,n2, a[10][10], sum;
  
 	printf("\n Enter Number of rows and columns :  ");
 	scanf("%d %d", &n1, &n2);
 
 	printf("\n Enter the First Matrix Elements\n");
 	for(i=0;i<n1;i++)
	{
		
	 for(j=0;j<n2;j++)
	 {
	 	scanf("%d",&a[i][j]);
	 }	
	}
	
	printf("Matrix is\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
		  printf("%d\t",a[i][j]);
		}
	printf("\n");

	}

	sum=0;
	for(i=0;i<n1;i++)
	{
		   sum+=a[i][n1-i-1];
	}
	printf("\nsum of opposite diagonal is  %d",sum);
  	
 	return 0;
}
