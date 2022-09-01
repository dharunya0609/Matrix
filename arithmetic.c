#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],add[3][3],sub[3][3],mul[3][3],div[3][3],mod[3][3];
	int i,j;
	printf("Enter Matrix 1 elements:\n");
	for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	 {
	 	scanf("%d",&a[i][j]);
	 }	
	}
	printf("Enter Matrix 2 elements:\n");
	for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	 {
	 	scanf("%d",&b[i][j]);
	 }	
	}
	printf("Matrix operations are:\n");
	for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	 {
	    add[i][j]=a[i][j]+b[i][j];
	    sub[i][j]=a[i][j]-b[i][j];
	    mul[i][j]=a[i][j]*b[i][j];
	    div[i][j]=a[i][j]/b[i][j];
	    mod[i][j]=a[i][j]%b[i][j];
	 }	
	}
	
	printf("\nAdd\tSub\tMul\tDiv\tMod \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n%d\t",add[i][j]);
			printf("%d\t",sub[i][j]);
			printf("%d\t",mul[i][j]);
			printf("%d\t",div[i][j]);
			printf("%d\t",mod[i][j]);
		}
		printf("\n");
	}
	return 0;
}
