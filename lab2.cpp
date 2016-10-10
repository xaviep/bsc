#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    char nume[]="Borta",
                prenume[]="Serghei",
                          u[]="USM-2017";
    printf("1234567890123456789012345\n");
    printf("%7s%10s\n",nume,prenume);
    printf("%13s\n",u);
    printf("%-4.1f%9.1f\n",15.8,22.7);
    printf("%05i\n",25);
    printf("%11.1f\n",14.8);
    printf("%15.1f\n",15.9);
    printf("%-4.1f%14.1f\n",62.3,15.3);
    printf("%13.1f\n",22.4);
    printf("%7.3f%7.1f\n",16.253,17.8);
    printf("%18.1f\n",22.9);
    printf("%02i%4s\n",0,"etaj");
}
