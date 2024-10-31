#include<stdio.h>
int main(){
int b,sa,da,g;
printf("enter your salary : ");
scanf("%d",&b);
if (b<10000){int sa=10*b/100,da=5*b/100,g=b+sa+da;
("gross salary , basic salary , SA , DA\n ");
printf("%d,%d,%d,%d\n",g,b,sa,da);}
else if(b>10000&&b<20000){int sa=12*b/100,da=8*b/100,g=b+sa+da;
    printf("gross salary , basic salary , SA , DA\n");
    printf("%d,%d,%d,%d\n",g,b,sa,da);}
else if(b>20000&&b<30000){int sa=15*b/100,da=10*b/100,g=b+sa+da;
    printf("gross salary , basic salary , SA , DA\n");
    printf("%d,%d,%d,%d\n",g,b,sa,da);}
else if(b>30000){int sa=20*b/100,da=12*b/100,g=b+sa+da;
    printf("gross salary , basic salary , SA , DA\n");
    printf("%d,%d,%d,%d\n",g,b,sa,da);}
else{printf("invalid input for the program");}
return 0;   /* code */
}