#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N 30
char a[N];
int top;
void push(char *strn){
	if(top>N-1)
	printf("it is in overflow:");
	else{
		top++;
		a[top]=*strn;
		
     	}
}
char pop(char *strn){
	if(top==-1){
		printf("it is in underflow:");
		
	}
		--top;
		return strn[top+1];
}
void reverse(char *strn){
	int i,j;
	for(i=0;i<strlen(strn);++i){
		push(&strn[i]);
	}
	printf("Before reversing string :%s\n\n",a);
	for(i=0;i<strlen(strn);++i){
		a[i]=pop(strn);
	
	}
		printf("After reversing string :%s\n",a);
}
int main(){
	char str[]="ninad";
	top=-1;
	reverse(str);
	getch();
	return 0;
}
