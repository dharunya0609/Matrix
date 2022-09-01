#include<stdio.h>
 
int main()
{
 	int i, j,n1,n2, a[10][10], s;
  
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
	
	printf("Before scalar multiplication:\n");
	for(i=0;i<n1;i++)
	{
	 for(j=0;j<n2;j++)
	 {
	 	printf("%d\t",a[i][j]);
	 }
	 printf("\n")	;
	}
	
	printf("Enter multiplication value:");
	scanf("%d",&s);
	for(i=0;i<n1;i++)
	{
	 for(j=0;j<n2;j++)
	 {
	 	a[i][j]=s*a[i][j];
	 }	
	}
	
	printf("After scalar multiplication:\n");
	for(i=0;i<n1;i++)
	{
	 for(j=0;j<n2;j++)
	 {
	 	printf("%d\t",a[i][j]);
	 }
	 printf("\n")	;
	}
	
	
  	
 	return 0;
}
