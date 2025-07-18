#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;
    Cricketer(string name, int runs, float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
    
};
void change(Cricketer *c){
    c->avg=75.6;
}
int main(){
    Cricketer c1("Virat Kohli", 35000, 75);
    Cricketer c2("Rohit Sharma", 25000, 65);

    Cricketer *p1=&c1;
    cout<<(*p1).runs<<endl;
    cout<<c1.avg<<endl;
    (*p1).avg=87;
    cout<<c1.avg<<endl;
    //(*p1).runs=40000;
    p1->runs=36000;
    cout<<(*p1).runs<<endl;
    change(&c1);
    cout<<c1.avg;

}