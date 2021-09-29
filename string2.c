#include<stdio.h>
int main(){
	char a[23][233],s[233];
	int i,j,k;
	printf("enter your name:");
	gets(s);
	printf("%s ",s);
	i=0,j=0,k=0;
	while(s[i]!='\0'){
		
		if(s[i]!=' '){
			a[k][j]=s[i];
			++j;
		}
		else{
		
	        	j=0;
	      	k++;}
	
	    ++i;
	}
	printf("\n");
	for(i=0;i<=k;++i){
	  	
		printf("%s ",a[i]);
		}
		return 0;
}
