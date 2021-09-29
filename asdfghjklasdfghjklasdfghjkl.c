#include<stdio.h>
#include<stdlib.h>
struct emp
{
	int eno;
	struct emp *next;
};
typedef struct emp node;
int main()
{
	
	void create(node *);
	void display(node *);
	node *start;
	start=(node *)malloc(1*sizeof(node));
	create(start);
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
