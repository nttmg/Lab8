#include<stdio.h>
#include<stdlib.h>

void inPutStr(char Chuoi[80]){
	fflush(stdin);
	printf("\nNhap chuoi: ");
	gets(Chuoi);
} 
void outPutStr(char Chuoi[80]){
	printf("\n%s",Chuoi);
}
int check(char *ptr){
	if (ptr==NULL)
	    return 0;
	char *first =ptr, *last= ptr+ strlen(ptr)-1;
	while(first<=last){
		if(*first++!=*last--){
			return 0;
		}
	} return 1;
} 
void main(){
	char Chuoi[80];
	inPutStr(Chuoi);
	outPutStr(Chuoi);
	int k;
	k = check(Chuoi);
	if(k==1){
		printf("\nChuoi doi xung");
	} else {
		printf("\nChuoi khong doi xung");
	}
}

