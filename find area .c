#include<stdio.h>
int main(){
float x,y,r,b,h;
    printf("the length and width of the rectangle, radius of the circle, base and height of the triangle respectively are : ");
    scanf("%f%f%f%f%f",&x,&y,&r,&b,&h);
    int a;
printf("enter 1,2,3 to find the area of the rectangle,circle,triangle respectively : ");
scanf("%d",&a);
switch (a)
{
case 1 : printf("%f\n",x*y);
break;
case 2 : printf("%f\n",3.14*r*r);
break;
case 3 : printf("%f\n",b*h/2);
break;
default: printf("invalid input for the program\n");
}
return 0;
}
