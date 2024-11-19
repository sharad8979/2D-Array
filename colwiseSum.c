#include<stdio.h>
int main(){
	int arr[3][3],i,j,sum=0;
	printf("\nEnter elements in array= ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
   
   printf("\nArray is=\n");
   for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		sum=0;
		for(j=0;j<3;j++){
		   sum=sum+arr[j][i];
		}
		printf("\nThe sum 0f column %d is %d",i+1,sum);
	}
	
	return 0;
}
