//Groceries test main file
#include<iostream>
#include<fstream>
#include"Groceries.h"
#include<stdio.h>
using namespace std;

int main()
{

ofstream outfile;

Groceries groc1,groc2,groc3;//three instances of groceries class

outfile.open("groceries.dat");

if(!outfile.is_open())
{
cout<<"!!FILE NOT OPENED!!"<<endl;

}

 //Grocery 1 setters
groc1.setFoodtype("Canned");
groc1.setExpiration("1/3/2050");
groc1.setCalories(456);
groc1.setQuantity(5);

//Grocery getters and file writing
outfile<<groc1.getFoodtype()<<"\t";
outfile<<"Exp=>\t"<<groc1.getExpiration()<<"\t";
outfile<<"Calories=>\t"<<groc1.getCalories()<<"\t";
outfile<<"Quantity=>\t"<<groc1.getQuantity()<<"\n"<<endl;

//Grocery 2 setters
groc2.setFoodtype("Fresh");
groc2.setExpiration("11/9/2017");
groc2.setCalories(1000);
groc2.setQuantity(2);

//Grocery 2 getters and file writing
outfile<<groc2.getFoodtype()<<"\t";
outfile<<"Exp=>\t"<<groc2.getExpiration()<<"\t";
outfile<<"Calories=>\t"<<groc2.getCalories()<<"\t";
outfile<<"Quantity=>\t"<<groc2.getQuantity()<<"\n"<<endl;

//Grocery3
groc3.setFoodtype("Frozen");
groc3.setExpiration("7/3/2018");
groc3.setCalories(234);
groc3.setQuantity(1);

//Grocery 3 getters and file writing
outfile<<groc3.getFoodtype()<<"\t";
outfile<<"Exp=>\t"<<groc3.getExpiration()<<"\t";
outfile<<"Calories=>\t"<<groc3.getCalories()<<"\t";
outfile<<"Quantity=>\t"<<groc3.getQuantity()<<"\n";


outfile.close();

return 0;
}
