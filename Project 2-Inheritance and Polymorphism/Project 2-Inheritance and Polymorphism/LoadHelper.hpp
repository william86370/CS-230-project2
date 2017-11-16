//
//  LoadHelper.hpp
//  Project 2: Inheritance and Polymorphism
//
//  Created by william wright on 11/16/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

#ifndef LoadHelper_hpp
#define LoadHelper_hpp
#include<iostream>
#include <stdio.h>
#include <fstream>

MovieList* pullmovies(){
    MovieList *movies = new MovieList();
    ifstream inFile;
    int x=0;
    int y;
    string name2;
    double price2;
    string upc2;
    float rating2;
    int copys2;
    int year2;
    string title2;
    string format2;
    string director2;
    inFile.open("movielist.txt");
    if (!inFile) {
        exit(1);   // call system to stop
    }
    inFile >> x;
    for( int y = 0;y<x;y++){
        inFile >> name2;
        inFile >> price2;
        inFile >> upc2;
        inFile >> rating2;
        inFile >> copys2;
        inFile >> year2;
        inFile >> title2;
        inFile >> format2;
        inFile >> director2;
        //
        movies->createmovie( name2,  price2,  upc2,  rating2,  copys2,  year2,  title2,  format2,  director2);
    }
    return movies;
}
GroceriesList* pullgroceries(){
    GroceriesList *gro = new GroceriesList();
    ifstream inFile;
    int x=0;
    int y;
    string name2;
    double price2;
    string upc2;
    string type2;//type of food
    string expiration2;//expiration date
    int calorie2;
    int quantity2;
    inFile.open("grocerielist.txt");
    if (!inFile) {
        exit(1);   // call system to stop
    }
    inFile >> x;
    for( int y = 0;y<x;y++){
        inFile >> name2;
        inFile >> price2;
        inFile >> upc2;
        inFile >> type2;
        inFile >> expiration2;
        inFile >> calorie2;
        inFile >> quantity2;
        
        gro->createGroceries(name2, price2, upc2, type2, expiration2, calorie2, quantity2);
    }
    return gro;
}
ClothingList* pullClothing(){
    ClothingList *gro = new ClothingList();
    ifstream inFile;
    int x=0;
    int y;
    string name2;
    double price2;
    string upc2;
    string type; // pants, shirts, sleepwear, accessories
    string gender; // man, women
    string sizePants; //Large, medium, small (for shirts)
    int sizeL; //length
    int sizeW; //width
    int quantity;
    inFile.open("ClothingList.txt");
    if (!inFile) {
        cerr << "Unable to open file grocerie.txt";
        exit(1);   // call system to stop
    }
    inFile >> x;
    for( int y = 0;y<x;y++){
        inFile >> name2;
        inFile >> price2;
        inFile >> upc2;
        inFile >> type;
        inFile >> gender;
        inFile >> sizePants;
        inFile >> sizeL;
        inFile >> sizeW;
        inFile >> quantity;
        gro->CreateClothing(name2, price2, upc2, type, gender, sizePants, sizeL, sizeW, quantity);
    }
    return gro;
}
itemList* pullCart(){
    itemList *gro = new itemList();
    ifstream inFile;
    int x=0;
    int y;
    string name2;
    double price2;
    string upc2;
    inFile.open("CartList.txt");
    if (!inFile) {
        
        exit(1);   // call system to stop
    }
    inFile >> x;
    for( int y = 0;y<x;y++){
        inFile >> name2;
        inFile >> price2;
        inFile >> upc2;
        
        gro->createitem(name2, price2, upc2);
    }
    return gro;

}
void SaveCart(itemList* cart){
    if( remove( "CartList.txt" ) != 0 ){
        
    }else{
       
         cart->cartlist();
}
}

#endif /* LoadHelper_hpp */
