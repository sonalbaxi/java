#include<stdio.h>
int main()
{

int a[4],temp[4],b[4],i,t,j,c,k;
    temp[4]=a[4];
	for(i=0;i<4;++i)
	{
		printf("enter the no:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;++i){
		 c=1;
		for(j=i+1;j<4;++j){
			if(a[i]==a[j]){
				++c;
			}
		}
		b[i]=c;
	}
	for(i=0;i<4;++i){
		for(j=i+1;j<4;++j){
			if(a[i]==a[j]){
				for(t=j;t<4;++t){
				
				temp[j]=temp[j+1];
				}
			}
		}
}
	for(i=0;i<4;++i){
		printf("\n%d is %d\n",temp[i],b[i]);
	}

	
	return 0;
}
