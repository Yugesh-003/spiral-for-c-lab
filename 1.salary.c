//to find the netpay of a worker
#include<stdio.h>
void main()
{
    int empid,bp;
    float hra,da,ta,it,pf,netpay;
    char name[40];
    //taking inputs from the user
    printf("Enter employee id : ");
    scanf("%d",&empid);
    printf("Enter the name of the employee : ");
    scanf("%s",name);
    printf("Enter the basic pay : ");
    scanf("%d",&bp);
    //calculation
    hra = 10 / 100.0 * bp;
    da = 8 / 100.0 * bp; 
    ta = 9 / 100.0 * bp;
    it = 10 / 100.0 * bp;
    pf = 12 / 100.0 * bp;
    
    netpay = bp + hra + da + ta - (it + pf);
   //output 
    printf("Hi %s\n",name);
    printf("Your salary is %.2f",netpay);

}
