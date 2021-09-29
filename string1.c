#include<stdio.h>
int main(){

int i,f[122],ascii;
char name[67];
printf("enter the name:");
scanf("%c",name);
for(i=0;i<122;++i){
	f[i]=0;
}
		i=0;
		while(name[i]!='\0'){
		
		 ascii=(int)name[i];
		 f[ascii]+=1;	
		 ++i;
		}
		   
		  for(i=0;i<122;++i){
				
		  if(f[i]!=0)
      	 printf("%d",f[i]);
      	 
      	
	}

    
}
