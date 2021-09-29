#include<stdio.h>
int main()
{
	int a[5],*ptr1,b[5],i,*ptr2,temp;
	
	ptr1=a;
	ptr2=b;
	for(i=0;i<5;++i)
	{
		
		printf("enter two number:");
		scanf("%d %d",ptr1,ptr2);
		ptr1++;
		ptr2++;
		
	}
	ptr1=a;
	ptr2=b;
	
	
	  printf("\n\n\n\nAll the elements are of first array\n\n\n\n");
		for(i=0;i<5;++i)
	{
		
		printf("\n%d\t%d\n",*ptr1,*ptr2);
		ptr1++;
		ptr2++;
    }
    
    ptr1=a;
    ptr2=b;
    
    
    	for(i=0;i<5;++i)
	{
		temp=*ptr1;
		*ptr1=*ptr2;
		*ptr2=temp;
		
		ptr1++;	
		ptr2++;
    } 
    ptr1=a;
    ptr2=b;
    
        printf("\n\n\n\nAll the elements after swapping of array\n\n\n\n");
    
    		for(i=0;i<5;++i)
					{
		
						printf("\n%d\t%d\n",*ptr1,*ptr2);
						++ptr1;
						ptr2++;
				    }
    
    
    return 0;
    
}

