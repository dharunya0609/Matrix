#include<stdio.h>
 
int main()
{
 	int i, j,n1,n2, a[10][10];
  
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

	int count=0;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
		   if(a[i][j]!=a[j][i])
		   {
		   	count=1;
		   	break;
		   }
		}
	}
  	if(count==0)
  	{
  		printf("Symetric matrix");
	}
	else{
		printf("Not a symetric matrix");
	}
 	return 0;
}
