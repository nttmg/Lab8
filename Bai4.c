#include<stdio.h>

int main(){
	int i;
	int A[5],B[5],C[5];
	for (i=0;i<5;i++){
		printf("\nNhap phan tu mang A thu %d: ",i+1);
		scanf("%d",A+i);
		
		printf("\nNhap phan tu mang B thu %d: ",i+1);
		scanf("%d",B+i);
		
	}
	printf("\nPhan tu mang A: "); 
	for(i=0;i<5;i++){
		printf("\t%d",*(A+i)); 
	} 
	printf("\nPhan tu mang B: ");
	for(i=0;i<5;i++){
		printf("\t%d",*(B+i));
	}
	printf("\nPhan tu mang C: ");
	for (i=0;i<5;i++){
		printf("\t%d",*(A+i)+*(B+i));
	}
	return 0; 
}
