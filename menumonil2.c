#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct emp{
	int eno;
	struct emp *next;
};
typedef struct emp node;
node *start;
int main()
{
	int choice,n1,i;
               	
				 start=(node *)malloc(sizeof(node));	
	void addatbeg(node *,int);
	void display(node *);
	void del(node *,int);
	void create(node *);
	while(1)
		{
			 
			 printf("entr the choice");
			 scanf("%d",&choice);
			switch(choice)
			 {
			 	case 1:
			 		printf("enter the number:");
			 		scanf("%d",&n1);
			 		addatbeg(start,n1);
			 		break;
			    case 2:
				     display(start);
					 break;
					 
				case 3:
				 
				 create(start);
				 break;	 
				 
				 
			    case 4:
			    	printf("enter the number to delete:");
			    	scanf("%d",&n1);
				     del(start,n1);
					 break;				
				default:
				printf("invalid number.....");	 		
			 		
			 }getch();
		}
		 return 0;
 } 
 
 void addatbeg(node *p,int n1)
 	{
 		node  *temp;
 		temp=(node *)malloc(sizeof(node));
 		temp->eno=n1;
 		start=temp;
 		temp->next=NULL;
	 }
	 
	 void display(node *p)
	 	{
	 		while(p!=NULL)
	 			{
	 				printf("%d",p->eno);
					 p=p->next;
				 }
		 }
		 
		 void del(node *p,int n1)
		    {
		    	node *temp,*pred;
		    	
		    	 if(p==NULL)
		    	 	{
		    	 	  printf("under flow");
					  	
					
					}
					temp=p;
					while(temp->eno!=n1&&temp->next!=NULL)
					  	{
					  		pred=temp;
					  		temp=temp->next;
				       }
				       
				       if(temp->eno!=n1)
				         {
				         	printf("invalid number:");
				         	
						 }
						 if(p->eno==n1)
							{
								start=p->next;
								free(p);
							}
							else
								{
									pred->next=temp->next;
									free(temp);
								}
					
			}
			void create(node *p)
				{
				
					printf("enter no:");
					scanf("%d",&p->eno);
					if(p->eno==-1){
							p->next=NULL;
							
						}
						else{
							
							p->next=(node *)malloc(sizeof(node));
							create(p->next);
						}
					 
				}
