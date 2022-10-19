#include<stdio.h>

int string_len(char *p){
	int count=0;
	while(*p != '\0'){
		count++;
		p++;
	}
	return count;
}

int main(){
	char chuoi[80];
	int length;
	
	printf("\nMoi nhap chuoi: ");
	gets(chuoi);
	
	length = string_len(chuoi);
	printf("\nDo dai cua chuoi: %d ky tu",length);
	return 0;
}
