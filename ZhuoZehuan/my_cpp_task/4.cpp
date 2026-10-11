#include <cmath>
#include <iostream>
#define PI = 3.1415926
using namespace std;
float a,b,x,y,alpha,theta;
float convertX(float x, float y, float theta){
    return  x * cos(theta) - y * sin(theta);
}
float convertY(float x, float y, float theta){
    return  x * sin(theta) + y * cos(theta);
}
int main(){
    cin>> x >> y >>alpha >>theta;
    
    float a=convertX(x,y,theta);
    float b=convertY(x,y,theta);
    cout << "旋转后的新坐标为:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    return 0;
}