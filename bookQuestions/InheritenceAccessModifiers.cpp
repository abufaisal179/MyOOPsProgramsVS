#include <iostream>
using namespace std;
class Human {
	public:
	string name;
	int age ;
    float height;
	
};

class Student : public Human {   //In which modifier you want to access/inherit attributes
	public:
	int id , roll_num;   
	Student ( string name , int roll_num ) {
		this->name = name; 
		this->roll_num = roll_num;
	}
	void display(void) {
		cout<<name<<" "<<roll_num<<endl;
	}
	
	
	
	        
	/*
	               TABLE : ACCESS MODFIER
	        (external code)      (within class)      (derived class)
	        
public :      accessable           accessable          accessable

prptected :  unaccessable          accessable          accessable

private :    unaccessable          accessable          unaccessable
	
	
TABLE FOR RELATION BETWEEN PARENT CLASS , CHILD CLASS AND EXTERNAL CODE	>>
	
	(PARENT CLASS)     >>    (CHILD CLASS)   >>     [RESULTS]
	   public                   public               public
	   public                  private               private
	   public                  protected            protected
	   protected               public               protected
	   protected               private              protected
	   protected               protected            protected
	   private                 public                N/A
	   private                 private               N/A
	   priavte                 protected             N/A
	   
	
	
	
	
	*/
	
	
	
};

int main () {
	Student S1("faisal",18);
//	S1.name = "Abu faisal";
//	S1.id = 124244;
//	cout<<S1.name;
//	cout<<" "<<S1.id;
	S1.display();
	return 0;
}
