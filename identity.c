#include<stdio.h>
 
int main()
{
 	int i, j,n1,n2, a[10][10], b[10][10], temp;
  
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
	 	if(a[i][j]!=1 && a[j][i]!=0)
	 	{
	 		temp=1;
	 		break;
		}
	 }	
	}
	if(temp==1)
	   printf("not identity matrix");
	else
	   printf("Identity matrix");   
  	
 	return 0;
}
