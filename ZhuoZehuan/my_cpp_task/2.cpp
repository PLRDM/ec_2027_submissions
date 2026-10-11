#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int id;
    float score;

};
int main(){
    Student stu[5];
    Student *p =stu;

    for(int i=0;i<5;i++){
        cout << "请输入第 " << (i + 1) << " 位学生的姓名和成绩: ";
        cin>> p->name>>p->score;
        p->id=i+1;
        p++;
    }
    p=stu;
    float sum=0.0;
    float avg;

    for(int i=0;i<5;i++){
        sum += p->score;
        p++;
    }
    avg = sum/5;
    cout << "5名学生的平均成绩为: " << avg << endl;
    return 0;
}
