// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
void function(int* p) {
      cout<<p;
      cout<<endl<<*p;
}


int main(void) {
    int* p = new int();
    *p = 4;
    cout<<endl<<p<<endl;
    function(p);
    p++;
    *p =6;
    function(p);
    cout<<endl<<*(--p)<<endl;
    delete p;
    cout<<endl<<*p;
  return 0;
}
