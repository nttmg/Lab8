#include<stdio.h>

void swap(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(){
	int a,b;
	
	printf("\nNhap so nguyen : ");
	scanf("%d %d",&a,&b);
	printf("\nSo nguyen a: %d",a);
	printf("\nSo nguyen b: %d",b);
	
	swap(&a,&b);
	
	printf("\nSau trao doi gia tri :");
	printf("\nSo nguyen a: %d",a);
	printf("\nDia chi vung nho cua a: %p", &a);
	printf("\nSo nguyen b: %d",b);
	printf("\nDia chi vung nho cua b: %p", &b);
	return 0;
}
