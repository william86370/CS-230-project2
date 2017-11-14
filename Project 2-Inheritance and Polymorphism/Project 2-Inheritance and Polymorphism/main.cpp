//
//  main.cpp
//  Project 2: Inheritance and Polymorphism
//
//  Created by william wright on 11/2/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//
#ifndef main_cpp
#define main_cpp

#include<iostream>
#include<fstream>
#include"Groceries.h"
#include"Movies.hpp"

#include<stdio.h>

#endif
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

   
    
    int i;
    
    Movie mov1,mov2,mov3;  //,mov2,mov3; //declares 3 instances of movie class object
    
    outfile.open("movies.dat");
    
    if(!outfile.is_open())
    {
        cout<<"!!FILE NOT OPENED!!"<<endl;
    }
    
    //Movie 1
    mov1.setTitle("Lion King");
    
    mov1.setYear(1994);
    
    mov1.setFormat("VHS");
    
    mov1.setDirector("Benny Reese");
    
    mov1.setRating(5.0);
    
    mov1.Numcopies(3);
    outfile<<mov1.getFormat();
    //Movie 2
    mov2.setTitle("The Kingsman");
    
    mov2.setYear(2013);
    
    mov2.setFormat("Digital");
    
    mov2.setDirector("Tarantino");
    
    mov2.setRating(3.5);
    
    mov2.Numcopies(1);
    
    //Movie 3
    mov3.setTitle("Thor: Raganarok");
    
    mov3.setYear(2017);
    
    mov3.setFormat("Digital");
    
    mov3.setDirector("Michael Jackson");
    
    mov3.setRating(2.0);
    
    mov3.Numcopies(20);
    
    outfile.close();
    
    return 0;
}



