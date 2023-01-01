#include <iostream>
using namespace std;
class base1{
    int i;
    public:
          base1(int a){
          i=a;
          cout<<"base1 class constructor is called: "<<endl;          
      }
      void print_base1(){
          cout<<"the value of i is: "<<i<<endl;
      }
};
class base2{
    int j;
    public:
      base2(int a){
        j=a;
          cout<<"base2 class constructor is called: "<<endl;
      }
      void print_base2(){
        cout<<"the value of j is: "<<j<<endl;
      }
};
class derived: public base1, public base2{
    int data1, data2;
     public:
       derived(int a, int b, int c, int d):base2(c) ,base1(d){
          data1= a;
          data2= b;
          cout<<"derived class contructor is called: "<<endl;
       }
       void print_derived(){
         cout<<"the value of data1 is: "<<data1<<endl;
         cout<<"the value of data2 is: "<<data2<<endl;
       }
};
int main() {
    derived devesh(3,5,6,8);
    devesh.print_base1();
    devesh.print_base2();
    devesh.print_derived();
    return 0;
}