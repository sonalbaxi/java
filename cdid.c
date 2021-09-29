#include<stdio.h>
#include<stdlib.h>
struct emp
{
	int eno;
	struct emp *next;
};
typedef struct emp node;
node *start;
int main()
{
	
	void create(node *);
	void display(node *);
	void insert(node *);
	void del(node *);

	
	start=(node *)malloc(1*sizeof(node));
	create(start);
	display(start);
	insert(start);
	display(start);
	del(start);
	display(start);

	return 0;
}

  void create(node *p)
  	{
  		 printf("enter the number:");
  		 scanf("%d",&p->eno);
  		 if(p->eno==-1)
  		    {
  		       p->next=NULL;	 
		    }
		    else
		      {
		      	 p->next=(node *)malloc(1*sizeof(node));
		      	 create(p->next);
			  }
	}
	
	
	void display(node *p)
		{
			while(p->next!=NULL)
			  {
			  	 printf("%d\t",p->eno);
			  	 p=p->next;
			  }
		}
		
		void insert(node *p)
		    {
		    	int n1,n2;
		    	node *temp;
		    	printf("enter the number before u wanna to insert");
		    	scanf("%d",&n1);
		    	printf("enter the new employee number:");
		    	scanf("%d",&n2);
		    	temp->eno=n2;
		    	if(p->eno==n1)
		    	  {
		    	  	 temp->next=p;
		    	  	 start=temp;
		    	  	 
				  }
				  else
				      {
				      	 while(p->next->eno!=n1)
				      	    {
				      	         p=p->next;	 
							}
							temp->next=p->next;
							p->next=temp;
					  }
		    	
		    	
		    }
		    
		    void del(node *p)
		        {
		        	 int n1;
		        	 node *temp;
		        	 printf("enter the number u wanna to delete:");
		        	 scanf("%d",&n1);
		        	 if(p->eno==n1)
		                  {
		                  	start=p->next;
		                  	free(p);
						  }
						  
						  
						  else
						     {
						     	  while(p->next->eno!=n1)
						     	     {
						     	         p=p->next;
										  	
									 }
									temp=p->next;
									p->next=temp->next;
									free(temp);
									 
							 }
				}
		        	
		        	
		        	
		        	
			
