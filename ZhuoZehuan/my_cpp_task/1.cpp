#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"请输入一个整数"<<endl;
    cin>>n;
    int totalcount=0;
    for(int i;i<=n;i++){
        int discount=0;
        for (int m=2;m<i;m++){
            if(i%m==0){
                discount++;
                break;
            }
        }
        if (discount==0){
            cout <<i<<endl;
            totalcount++;

        }
        

    }
    cout<<endl;

    cout<<"从0到n质数共有"<<totalcount<<"个"<<endl;












    return 0;
}