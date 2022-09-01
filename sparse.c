#include<stdio.h>
 
int main()
{
 	int i, j,n1,n2, a[10][10], b[10][10], temp=0;
  
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
   
 
 	
   temp=0;
  	for(i=0;i<n1;i++)
	{
	 for(j=0;j<n2;j++)
	 {
	 	if(a[i][j]==0)
	 	{
	 		temp++;
		 }
	 }	
	}
	if(temp>(n1+n2)/2)
	   printf("Sparse matrix");
	else
	   printf("Not sparse matrix");   
  	
 	return 0;
}
