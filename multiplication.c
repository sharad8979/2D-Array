#include<stdio.h>
int main(){
	int arr[5][5],brr[5][5],crr[5][5],i,j,k,r1,r2,c1,c2;
	printf("\nEnter the rows and columns for Array 1=");
	scanf("%d %d",&r1,&c1);
	printf("\nEnter the rows and columns for Array 2=");
	scanf("%d %d",&r2,&c2);
		
	if(r2!=c1){
		printf("Sorry multiplication is not perform");
	}
	else{
		printf("\nEnter the elements of first array=");
	for(i=0;i<r1;i++){
		for( j=0;j<c1;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	
	printf("\nEnter the elements of second array=");
	for(i=0;i<r2;i++){
		for( j=0;j<c2;j++){
			scanf("%d",&brr[i][j]);
		}
	}

	printf("\nFirst Array is=\n");
	for(i=0;i<r1;i++){
		for( j=0;j<c1;j++){
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSecond Array is=\n");
	for(i=0;i<r2;i++){
		for( j=0;j<c2;j++){
			printf(" %d",brr[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				crr[i][j]=0;
	  	}
      }
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				for(k=0;k<c1;k++){
					crr[i][j]=crr[i][j]+arr[i][k]*brr[k][j];
				}
			}
		}
		printf("\nMultiplication of Both arrays is=\n");
     for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf(" %d",crr[i][j]);
		}
		printf("\n");
	  }
    }
	
	
	return 0;
}
