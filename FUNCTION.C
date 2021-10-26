#include<stdio.h>
#include<conio.h>
int add();
int sub();
int a,b,v;


void main()
{
	clrscr();
	scanf("%d%d",&a,&b);
	v=add(a,b);
	printf("%d",v);
	getch();
}

int add(int a,int b)
	{
	  if(a==1)
	  {
	    int c=a+b;
	    return c;
	  }
	  else
	  {
	 int d= sub(a,b);
	 return d;
	  }
	}

int sub(int c, int d)
{
return c-d;
}
