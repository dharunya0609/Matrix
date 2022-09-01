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

	
	for(i=0;i<n1;i++)
	{
		sum=0;
		for(j=0;j<n2;j++)
		{
		   sum+=a[i][j];
		}
	printf("\nsum of Row %d are %d",i+1,sum);

	}
	
	for(i=0;i<n1;i++)
	{
		sum=0;
		for(j=0;j<n2;j++)
		{
		   sum+=a[j][i];
		}
	printf("\nsum of Column %d are %d",i+1,sum);

	}
  	
 	return 0;
}
