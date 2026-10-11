#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.141592653589793;
class Geometry{
public:
    virtual float volume()=0;

    virtual float surfaceArea() = 0;

    virtual ~Geometry() {}
  
};
class Cube : public Geometry{
private:
    float side;

public:
    Cube(float s) {
        side = s;
    }
    
    float volume() override{
        return side*side*side;
    }

    float surfaceArea() override {
        return 6*side*side;
    }
};

class Sphere : public Geometry{
private:
    float radius;

public:
    Sphere(float r){
        radius = r;
    }
    float volume() override{
        return (4/3)*PI*radius*radius*radius;
    }
    float surfaceArea() override{
        return 4*PI*radius*radius;
    }


};

int main(){
    float side;
    float radius;

    cout<<"请输入正方形的边长";
    cin>> side;
    Cube cube(side);

    cout<<"请输入球的半径";
    cin>>radius;
    Sphere sphere(radius);

    cout<<"正方形的体积"<<cube.volume()<<endl;
    cout <<"正方形的表面积"<<cube.surfaceArea()<<endl;

    cout<<"球的体积"<<sphere.volume()<<endl;
    cout<<"球的表面积"<<sphere.surfaceArea()<<endl;




    return 0;
}