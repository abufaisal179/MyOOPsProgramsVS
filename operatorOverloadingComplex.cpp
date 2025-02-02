#include <iostream>
using namespace std;
class Complex {
    int real , img;
    public:
    Complex() : real(0), img(0) {}
    Complex ( int real , int img ) {
        this -> real  = real;
        this -> img = img;
    }
    void display(void) {
        cout<<real<<" +i"<<img<<endl;
    }

Complex operator +( Complex &c ) {
        Complex ans;
        ans.real = real + c.real;
        ans.img = real + c.img;
        return ans;
    }
// Hey guys , its Faisal's Program : TITLE >> {}
};
int main(void) {
  Complex C1( 3 , 6 );
  Complex C2( 5 , 7 );

  Complex C3 = C1 + C2;
   C3.display();
  return 0;
}

