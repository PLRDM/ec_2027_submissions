#include <iostream>
using namespace std;
float rangemap(float m,float n,float x){
    float y = 2.0 * (x - m)/(n - m) - 1.0;
    return y;

}
int main(){
    float m,n,x;
    cin >> m >>n>>x;
    float y =rangemap(m,n,x);
    cout <<"归一化后的y为"<<y<<endl;
    return 0;



}
