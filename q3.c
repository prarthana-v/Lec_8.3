#include<stdio.h>
main(){
	// Write a Program to find the sum of diagonal elements from a given 2D array.
	int row,cln,i,j;
	
	printf("Enter row & column size:");
	scanf("%d",&row);
	
	int a[row][row];
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;

	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			if(i==j){
				printf("%d\n",a[i][j]);	
				sum+=a[i][j];
			}
		}
	}
	
	printf("The sum of diagonal elements of an Array: %d ",sum);	

}
