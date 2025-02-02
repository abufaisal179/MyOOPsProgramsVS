// Hey guys , its Faisal's Program : TITLE >> {}
#include <iostream>
using namespace std;
int numberForFact( int number ) {
    cout<<"enter number for factorial :";
    cin>>number;
    return number;
}
int  recursionFact ( long long int number )  {
   
    if( number <= 1 ) return 1;
     return number = number * recursionFact(number - 1);
      
}
int main(void) {
    
    int* p = new int();
   long long int number = numberForFact(*p);
//    cout<<"the number is : "  <<number;
   cout<<"the factorial is : "<<recursionFact(number)<<endl;;
  return 0;
}








// #include <iostream>
// using namespace std;

// int main(void) {
//     int fact = 1 , num;
//     cout<<"enter number >>";
//     cin>>num;
//     for( int i=1; i<=num; i++ ) {
//          fact = fact * i;
//     }
//     cout<<"the factorial is : "<<fact;

//   return 0;
// }

