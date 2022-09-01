#include<stdio.h>
 
int main()
{
 	int i, j,n1,n2, a[10][10], temp;
  
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
	
	if(n1==n2)
	{
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
		   if(i<=j)
		   {
		   	printf("%d\t",a[i][j]);
		   }
		   else
		   {
		   	printf("0\t");
		   }
		}
		printf("\n");
	}
	}
  	
 	return 0;
}
