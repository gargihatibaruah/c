#include<math.h>
#include<stdio.h>
int main()
{
float a,b,c,d,root1,root2,real,imaginary;
printf("Enter coeffecients for a,b and c:\n");
scanf("%f %f %f",&a,&b,&c);

d=b*b-4*a*c;
//condition for real and different roots
if(d>0)
{
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
printf("The roots are %f and %f",root1,root2);
}

//condition for real and equal roots
else if(d==0)
{
root1=root2=(-b/(2*a));
printf("The roots are %f and %f",root1,root2);
}

//condition for imaginary roots
 else
{
    real=-b/(2*a);
    imaginary=sqrt(-d)/(2*a);
    printf("root1=%f+%fi and root2=%f-%fi",real,imaginary,real,imaginary);
}
return 0;
}