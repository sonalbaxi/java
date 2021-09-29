#include<stdio.h>
int main(){
	
	int i,j=1,temp,n,binary=0;
	printf("enter no:");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		
		i=n%2;
		binary=binary+(i*j);
		j=j*10;
		n=n/2;
	}
	printf("decimal %d to binary %d",temp,binary);
	
	
}
