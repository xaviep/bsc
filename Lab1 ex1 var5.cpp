#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    float x= -2.9, a= -0.5, b=15.5, z, w, y;
    z=pow(x,2)+b;
    w=sqrt(z)-pow(b,2)*pow(sin(x+a),3)/x;
    y=pow(cos(pow(x,3)),2)-x/sqrt(pow(a,2)+pow(b,2));
    cout << "W=" << w << endl;
    cout << "Y=" << y;
}
