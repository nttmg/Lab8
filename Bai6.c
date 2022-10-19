#include<stdio.h>
#include<stdlib.h>

int check(int *p){
	int j;
	if(*p<2){
		return 0;
	}
	for (j=2;j<=*p/2;j++){
		if(*p%j==0){
			return 0;
		}
	} 
	return 1;
}

int main(){
	int *ptr;
	int n,i;
	printf("\nNhap so phan tu mang muon luu: ");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("\nKhong du bo nho!");
		exit(0);
	}
	
	for(i=0;i<n;i++){
		printf("\nNhap gia tri thu %d cho Mang : ",i+1);
		scanf("%d",ptr+i);
	}
	printf("\nPhan tu mang da nhap: ");
	for (i=0;i<n;i++){
		printf("\t%d",*(ptr+i));
	}
	
	int k;
	printf("\nPhan tu Mang la so nguyen to: ");
	for(i=0;i<n;i++){
		k=check(ptr+i);
		if(k==1){
			printf("\t%d",*(ptr+i));
		}
	}
} 
