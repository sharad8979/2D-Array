#include<stdio.h>
int main(){
	int arr[3][3],brr[3][3],crr[3][3],i,j,sum=0;
	printf("\nEnter the elements of first array=");
	for(i=0;i<3;i++){
		for( j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nEnter the elements of second array=");
	for(i=0;i<3;i++){
		for( j=0;j<3;j++){
			scanf("%d",&brr[i][j]);
		}
	}

	printf("\nFirst Array is=\n");
	for(i=0;i<3;i++){
		for( j=0;j<3;j++){
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSecond Array is=\n");
	for(i=0;i<3;i++){
		for( j=0;j<3;j++){
			printf(" %d",brr[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			crr[i][j]=arr[i][j]+brr[i][j];
		}
	}

printf("\nSum of both Arrays is=\n");
	for(i=0;i<3;i++){
		for( j=0;j<3;j++){
			printf(" %d",crr[i][j]);
		}
		printf("\n");
	}
	
return 0;
}
