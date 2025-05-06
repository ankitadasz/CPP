class Complex{
   public:
   int real;
   int img;
   public:
 friend  Complex operator+(Complex c1,Complex c2){

   }
};
Complex operator+(Complex c1,Complex c2){
    Complex t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;
    return t;
}
int main(){
    Complex c1(3,7);
    Complex c2(5,4);
    Complex c3;
    c3=c1+c2;

}