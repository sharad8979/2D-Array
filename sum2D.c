#include<stdio.h>
int main(){
	int arr[3][3],i,j,sum=0;
	printf("\nEnter the elements=");
	for(i=0;i<3;i++){
		for( j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nArray is=\n");
	for(i=0;i<3;i++){
		for( j=0;j<3;j++){
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<3;i++){
		for( j=0;j<3;j++){
			sum=sum+arr[i][j];
		}
}
   printf("\nSum of all elements of Matrix=%d",sum);
	
	
	return 0;
}
