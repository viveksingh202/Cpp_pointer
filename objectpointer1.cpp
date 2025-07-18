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
void print(Cricketer c){
    cout<<c.name<<" "<<c.runs<<" "<<c.avg<<endl;
    }

int main(){
    Cricketer c1("Virat Kohli", 35000, 75.8);
    Cricketer *c2 = new Cricketer("Rohit Sharma", 25000, 65.4);
    //cout<<(*c2).name<<" "<<(*c2).runs<<" "<<(*c2).avg<<endl;
    cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl;
    //cout<<c1.name<<" "<<c1.runs<<endl;
    print(c1);

    print(*c2);
}