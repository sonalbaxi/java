#include<stdio.h>
#include<ctype.h>
#define N 50
typedef struct stack{
	int data[N];
	int top;
	
}stack;
int pop(stack *);
void push(stack *,int);
int empty(stack *);
void init(stack *);
int precedence(char);
int top(stack *);
void infixtopostfix(char infix[],char postfix[]);


int main(){
char infix[N],postfix[N];
printf("enter infix:");
gets(infix);
infixtopostfix(infix,postfix);
printf("\npostfix is::%s",postfix);
getch();
return 0;
}
void init(stack *s){
	s->top=-1;
}
int empty(stack *s){
	if(s->top==-1)
	   return 1;
	     else
	      return 0;
}
int precedence(char x){
	if(x=='(')
	   return 1;
	   if(x=='+'||x=='-')
	   return 2;
	    if(x=='*'||x=='/')
	      return 3;
	      
	         return 4;
}
void push(stack *s,int x){
	s->top=s->top+1;
	s->data[s->top]=x;
}
int pop(stack *s){
	int x;
	x=s->data[s->top];
	s->top=s->top-1;
	return x;
}
int top(stack *s){
	return s->data[s->top];
}
void infixtopostfix(char infix[],char postfix[]){
	int i,j;
	char token,x;
	stack s;
	init(&s);
	j=0;
	for(i=0;infix[i]!='\0';++i){
		token=infix[i];
		if(isalnum(token))
		   postfix[j++]=token;
	    else
		if(infix[i]=='(')
		  push(&s,'(');
		  else if(infix[i]==')')
		    while((x=pop(&s))!='(')
		      postfix[++j]=x;
		    
		    else{
			
		     while(precedence(token)<=precedence(top(&s))&&!empty(&s)){
		     	x=pop(&s);
		     	postfix[j++]=x;
			 }
		    push(&s,token);
	       }    
	}
	while(!empty(&s)){
		x=pop(&s);
		postfix[j++]=x;
	}
	postfix[j]='\0';
}


