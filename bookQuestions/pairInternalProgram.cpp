// Hey guys , its Faisal's Program : TITLE >> {}
//pair<int,string>p1;
#include <iostream>
#include <string>
using namespace std;

class Pair {
    int first;
    string second;
     
     public : 
     Pair( int number ,const string &s ) : first(number) , second(s) {
        //body
     } 
       
     void setFirst( int number  ) {
        first = number;
     }
     void setSecond( const string &s ) {   //>> used because of both are form encapsulation 
        second = s;
     }
     int getFirst() const {
        return first;
     }
     string getSecond() const {
        return second;
     }

 


};

int main(void) {
   Pair p1(4, "abu fasial");

   cout<<p1.getFirst()<<" "<<p1.getSecond();

  return 0;
}
