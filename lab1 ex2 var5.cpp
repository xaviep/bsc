#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    float a=2.3, x, y;
    cout << "Introduceti X" << endl;
    scanf("%f", &x);
    if (x<1){
        y= 1.5*pow(cos(x),2);
    }
    else if (x==1) {
        y= 1.8*a*x;
    }
        else if(x<2){
            y=pow((x-2),2)+6;
        }
        else {
            y=3*tan(x);
        }
    cout << "Rezultatul = " << y << endl;
    }

