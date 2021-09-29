#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
 int i,*p,a[6],k,n;
 p=(int *)malloc(sizeof(int));
 printf("enter the no:\n");
 for(i=0;i<8;++i){
 	scanf("%d",p+i);
 }
 printf("enter no to delete:\n");
 scanf("%d",&n);
 k=0;
 for(i=0;i<8;++i){
    if(*(p+i)!=n){
    	a[k]=*(p+i);
    	++k;
	}
}
	
	for(i=0;i<k;++i){
 		printf("\n%d\n",a[i]);
		 }
	getch();
 free(p);
 
 return 0;
}
