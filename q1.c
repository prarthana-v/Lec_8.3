//Write a Program to find the average of a given 2D array.
#include<stdio.h>
main(){
	int row,cln,i,j;
	
	printf("Enter row size:");
	scanf("%d",&row);
	
	printf("Enter column size:");
	scanf("%d",&cln);
	
	int a[row][cln];
	for(i=0;i<row;i++){
		for(j=0;j<cln;j++){
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	float sum=0,count=0;
	float avg;
	for(i=0;i<row;i++){
		for(j=0;j<cln;j++){
			count++;
			printf("%d\n",a[i][j]);	
			sum+=a[i][j];
		}
	}
	printf("average of an array : %.2f",sum/count);
	
}
