#include <iostream>
#include <string>
using namespace std;
int main () {
    string month1,month2 ,month3;
    float rain1,rain2, rain3;
    cout << "Enter the name of month1:";
    cin >> month1;
    cout <<"Enter the rainfall(in inches) for " << month1<<endl;
    cin >>rain1;
    cout << "Enter the name of month2:";
    cin >> month2;
    cout<< "Enter the rainfall (in inches) for "<<month2<<endl;
    cin >>rain2;
    cout << "Enter the name of month3:";
    cin >> month3;
    cout<<"Enter the rainfall (in inches) for " << month3<<endl;
    cin >>rain3;

    double average=(rain1+rain2+rain3);
    cout<<"total average:"<<average;
    return 0;
}
