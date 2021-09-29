#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct emp{
	int eno;
	struct emp *next;
};
typedef struct emp node;
node *start=NULL;
int main()
{
	int choice,n1,i;
	void addatbeg(node *,int);
	void display(node *);
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
