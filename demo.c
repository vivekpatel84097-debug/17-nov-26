# include <stdio.h>
int main(){
char 'x';
int a,b,s;
printf ("enter the operator (+,-,*)\n");
scanf ("%c",&x);
printf ("enter two number");
scanf ("%d %d",&a,&b);
switch (x)
{
s=a+b;
case'+': printf("s= %d",s);
break;
s=a-b;
t=b-a;
case'-':
printf("s=%d",s);
break;
s=a*b;
case'*':printf("s=%d",s);
break;
default: printf("INVALID OPERATOR\n");
}
return 0;
}