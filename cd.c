#include<stdio.h>
#include<stdlib.h>
int main()
{
	int first,last,number[233],middle,search,limit,i;
     printf("enter the  limit:");
     scanf("%d",&limit);
	int monil=1;
if(monil==1){
	console.log("hello hacktoberfest");
}
     for(i=0;i<limit;++i)
        {
        	 printf("enter the number:");
        	 scanf("%d",&number[i]);
        	 
		}
		first=0;
		last=limit-1;
		middle=(first+last)/2;
	 
		 printf("enter the search number:");
		 scanf("%d",&search);
		 
		while(first<=last)
		   {
		   	  if(search>number[middle])
		   	     {
		   	        first=middle+1;
				  
				 }
				 else if(search==number[middle])
				   {
				   	  printf("it is at position %d",middle+1);
				   	  break;
				   }
				   else
				      {
				      	  last=middle-1;
					  }
					  
					  
					  middle=(first+last)/2;
		   }
		   return 0;
}
		   
