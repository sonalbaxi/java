#include<stdio.h>
int main()
{

int a[4],temp[4],b[4],i,j,c,k;
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
				temp[i]=a[i];
				break;}
			}
		}
	}
	

		for(k=0;k<2;++k)
		{
		printf("%d is %d",temp[i],b[i]);
     	}
	return 0;
}
