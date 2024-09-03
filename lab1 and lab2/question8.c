#include<stdio.h>
int main()
{
    int d,h,m,period=31558150;
    d=(period)/86400;
    h=(period)/3600;
    m=(period)/60;
    printf("number of days,hours and minutes are respectively%f%f%f",d,h,"and",m);
    return 0;
    
}