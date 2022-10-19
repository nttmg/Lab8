#include<stdio.h>

int main(){
	int arr[5];
	int *ptr;
	int i;
	printf("Nhap phan tu mang : ");
	for(i=0;i<5;i++){
	    scanf("%d",(arr+i));
	}
	for(i=0;i<5;i++){
		printf("\nGia tri thu %d cua mang: %d",i,*(arr+i));
	}
	return 0;
}
