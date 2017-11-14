//this is Groceries header and implementation
//derived class of Item
#include<iostream>
using namespace std;

class Groceries//, public Item
{
	
private:
	string type;//type of food
	string expiration;//expiration date
	int calorie;
	int quantity;

public:
	Groceries();
	void setFoodtype(string);//choice between fresh,canned,and frozen
    string getFoodtype();
	
	void setExpiration(string);//expiration date
    string getExpiration();
    
	void setCalories(int);
    int getCalories();
	
	void setQuantity(int);
	int getQuantity();
};
// Groceries header implementation

Groceries::Groceries()
{

string type="";
string expiration="";
int calorie=0;
int quantity=0;

}

void Groceries::setFoodtype(string f)
{
type=f;

}

string Groceries::getFoodtype()
{
return type;

}


void Groceries::setExpiration(string e)
{

expiration=e;

}

string Groceries::getExpiration()
{

return expiration;
}



void Groceries::setCalories(int c)
{

calorie=c;

}

int Groceries::getCalories()
{

return calorie;
}



void Groceries::setQuantity(int q)
{

quantity=q;

}

int Groceries::getQuantity()
{

return quantity;

}



