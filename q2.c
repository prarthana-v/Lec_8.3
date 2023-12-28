/*Write a Program to perform the addition operation of two 2D arrays &
 store it in another array. Keep in mind that both array sizes must be the same.*/
 #include<stdio.h>
 main(){
 	int row,cln,i,j;
	
	printf("Enter row size:");
	scanf("%d",&row);
	
	printf("Enter column size:");
	scanf("%d",&cln);
	
	int a[row][cln];
	int b[row][cln];
	
	for(i=0;i<row;i++){
		for(j=0;j<cln;j++){
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<row;i++){
		for(j=0;j<cln;j++){
			printf("Enter b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	int c[row][cln];
	for(i=0;i<row;i++){
		for(j=0;j<cln;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("Array c: ");
	for(i=0;i<row;i++){
		for(j=0;j<cln;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
 }
