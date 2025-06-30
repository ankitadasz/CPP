 #include<iostream>
 using namespace std;
class Car{
    public:
    virtual void Start(){
        cout<<"car started"<<endl;;
    }
};
class Inova:public Car{
    public:
    void Start(){
        cout<<"Inova Started"<<endl;
    }
};
class Swift:public Car{
    public:
    void Start(){
        cout<<"Swift Started"<<endl;
    }
};

 int main(){
    Car *c=new Inova();  
    c->Start();
    c=new Swift();
    c->Start();
 }    