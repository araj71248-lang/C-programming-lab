#include<stdio.h>
int main()
{
	int a,b,op,sum,sub,div,multi;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("choose the operator\n(add)=1\n(sub)=2\n(div)=3\n(multi)=4\nenter the operator number:\n");
	scanf("%d",&op);
	printf("enter the second number:");
	scanf("%d",&b);
	sum=a+b;
	sub=a-b;
	div=a/b;
	multi=a*b;
	
	switch (op)
	{
		case 1:
			printf("the result is : %d",sum);
			break;
	    case 2:
	    	printf("the result is :%d",sub);
	    	break;
	    case 3:
		    printf("the result is :%d",div);
			break;
		case 4:
		    printf("the result is :%d",multi);
			break;
		default	:
		   printf("invalid Input");
		   break;		
				
	}
	return 0;
}