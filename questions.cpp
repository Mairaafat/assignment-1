# assignment-1
#include <iostream> //question(1)
#include <string>
using namespace std;
class Bankaccount{
private:
	string name;
	string account_number;
	int balance;
public:
	Bankaccount(){
	 name = " ";
	 account_number = "1000";
	 balance = 0;
	}
	Bankaccount(string n, string num, int b){
		name = n;
		account_number = num;
		balance = b;
	}
	void display(){
		cout << "name: " << name << " account number : " << account_number << " balance : ";
	}
	void deposie_money(int d)
	{
		balance = balance + d;
	}
	void withdraw_money(int w){
		balance = balance - w;
	}
};
#include <iostream>//question 2
#include <string>
using namespace std;
class Person {
private:
	static const int LIMIT = 25;
	string lname; //  last name
	char fname[LIMIT]; //  first name
public:
	Person() {
		lname = " ";
		fname[0] = '\0';
	}
	Person(const string & ln, const char * fn = "Heyyou"){
		lname = ln;
		for (int i = 0; i<sizeof(fn); i++){
			fname[i] = fn[i];
		}
		fname[sizeof(fn)] = '\0';
	}
	void Show()  // firstname lastname
	{
		cout << fname << " " << lname;
	}
    void formshow()
	{
		cout << lname + " " + fname;
	}
	Person(string s){
		lname = s;
	}
};
class Move// question 6
{
 private:
	 double x;
	double y;
 public:
	Move(double a = 0, double b = 0)// sets x, y to a, b
	{
		x=a;y=b;
    }
	 void showmove() // shows current x, y values Move
	{
		cout<<"x coord"<<x<<"y coord"<<y<<endl;
	 }
Move  add(const Move & m)  // this function adds x of m to x of invoking object to get new x, // adds y of m to y of invoking object to get new y, creates a new // move object initialized to new x, y values and returns it
	{ 
		x=x+m.x;
		y=y+m.y;
		//Move new;
		//new.x=x;
		//new.y=y;
		return Move(x+m.x,y+m.y) ;
}
void reset(double a = 0, double b = 0)
 {
		 x=a;
		 y=b;
 }};
void main (){
Move a(3,2);
	a.showmove();
   a.reset(3,4);
   a.showmove();
system("pause");
}
