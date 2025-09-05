#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("Enter The Three Values : ");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
    }
else if(d==0)
{
    r1= -b/(2*a);
    r2=r1;
    printf("Roots Are : %f %f",r1,r2);
}
else
printf("roots Are Imaginary");
return 0;
}