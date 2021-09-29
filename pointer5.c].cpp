#include<stdio.h>
int main()
{
	int a[5],*ptr,b[5],i;
	
	ptr=a;
	for(i=0;i<5;++i)
	{
		
		printf("enter the number:");
		scanf("%d",ptr);
		ptr++;
		
	}
	ptr=a;
	
		for(i=0;i<5;++i)
	{
		
		printf("All the elements are of first array\n%d\n",*ptr);
		ptr++;
    }
    
    ptr=a;
    
    
    	for(i=0;i<5;++i)
	{
		b[i]=*ptr;
		ptr++;	
    } 
        printf("All the elements are of first array\n%d\n",b[i]);
    
    		for(i=0;i<5;++i)
					{
		
						printf("\n%d\n",b[i]);
						
				    }
    
    
    return 0;
    
}

