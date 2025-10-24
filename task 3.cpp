#include <complex>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main () {
    double r;
    cin >> r;
    double h;
    cin >> h;
    double area;
    float PI=3.14;
     area = 2 * PI * r * h + 2 * PI * r;
    double volume = PI * r * r * h;
    cout << "surface a: " << area << endl;
    cout << "volume of cylinder: " << volume << endl;
return 0;
