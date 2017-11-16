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



#include<stdio.h>

#endif
using namespace std;

MovieList* pullmovies();
void moviemenu();
void mainmenu();
void top10movies();
void viewcart();
void moviesearch();
MovieList *movies = pullmovies();
itemList *cart = new itemList();

void moviemenu(){
    int selection;
    cout<<"\n Einstinzon Movie Menu";
    cout<<"\n Select an option from the list ";
    cout<<"\n 1 - search through all the movies";
    cout<<"\n 2 - view the top 10 movies";
    cout<<"\n 3 - View Your Current cart";
    cout<<"\n 4 - return to main menu";
    cout<<"\n Enter selection: ";
    // read the input
    cin>>selection;
    switch(selection)
    {
        case 1 :{cout<<"\n send to search \n";
            moviesearch();
        }
            break;
            
        case 2 :{cout<<"\n view top 10 movies";
            
        }
            break;
            
        case 3 :{cout<<"\n view your current cart";
            viewcart();
        }
            break;
            
        case 4 :{cout<<"\n return to main menu";
            mainmenu();
        }
            break;
        default : cout<<"\n Invalid selection";{
        }
            
    }
    cout<<"\n";
    
    
    
    
    
}

void mainmenu(){
    int selection;
    cout<<"\n Einstinzon Main Menu";
    cout<<"\nPlease Select the Department That You Would like to Shop in";
    cout<<"\n 1 - Movies";
    cout<<"\n 2 - Groceries";
    cout<<"\n 3 - Electronics";
    cout<<"\n 4 - View Your Current cart";
    cout<<"\n 5 - exit the program";
    cout<<"\n Enter selection: ";
    // read the input
    cin>>selection;
    switch(selection)
    {
        case 1 :{cout<<"\n send to movies list \n";
            moviemenu();
        }
            break;
        case 2 :{cout<<"\n send to Groceries list ";
            
        }
            break;
            
        case 3 :{cout<<"\n send to Electronics list";
            
        }
            break;
            
        case 4 :{cout<<"\n send to cart view ";
             viewcart();
        }
            break;
        case 5:{
            cout<<"\n exit the program";
        }break;
        default : cout<<"\n Invalid selection";{
        }
            
    }
    cout<<"\n";
    
    
}


int main()
{
    mainmenu();
    return 0;
}

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
        cerr << "Unable to open file datafile.txt";
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
    cout<< "done";
    return movies;
}
void viewcart(){
    cart->displayitems();
    
}
void moviesearch(){
    
    int selection;
    cout<<"\n Movie Search Menu";
    cout<<"\n Select an option from the list ";
    cout<<"\n 1 - search movies by name";
    cout<<"\n 2 - search movies by rateing";
    cout<<"\n 3 - search movies by price";
    cout<<"\n 4 - return to main menu";
    cout<<"\n Enter selection: ";
    // read the input
    cin>>selection;
    switch(selection)
    {
        case 1 :{cout<<"\n search nameh \n";
            cout<<"enter the name of the movie you would like to search for"<<endl;
            string name;
            cin >>name;
            Movie* search = movies->searchname(name);
            if(search== NULL){
                cout<<"the movie you searched for dosent exist"<<endl;
                 moviesearch();
            }else{
                search->getinfo();
                cout<<"would you like to add this movie to your cart????"<<endl;
                cout<<"1-Yes"<<endl;
                cout<<"2-no"<<endl;
                int x;
                cin>>x;
                if(x==1){
                    cart->createitem(search->getname(), search->getprice(), search->getupc());
                    moviemenu();
                }else if (x==2){
                    cout<<"would you like to search again"<<endl;
                    cout<<"1-Yes"<<endl;
                    cout<<"2-no"<<endl;
                    int x;
                    cin>>x;
                    if(x==1){
                        moviesearch();
                    }else{
                        moviemenu();
                    }
                }else{
                   cout<<"incorrcect entrie"<<endl;
                    moviesearch();
                }
            }
        }
            break;
            
        case 2 :{cout<<"\n search upc";
            cout<<"enter the upc of the movie you would like to search for"<<endl;
            string name;
            cin >>name;
            Movie* search = movies->searchupc(name);
            if(search== NULL){
                cout<<"the movie you searched for dosent exist"<<endl;
                moviesearch();
            }else{
                search->getinfo();
                cout<<"would you like to add this movie to your cart????"<<endl;
                cout<<"1-Yes"<<endl;
                cout<<"2-no"<<endl;
                int x;
                cin>>x;
                if(x==1){
                    cart->createitem(search->getname(), search->getprice(), search->getupc());
                    moviemenu();
                }else if (x==2){
                    cout<<"would you like to search again"<<endl;
                    cout<<"1-Yes"<<endl;
                    cout<<"2-no"<<endl;
                    int x;
                    cin>>x;
                    if(x==1){
                        moviesearch();
                    }else{
                        moviemenu();
                    }
                }else{
                    cout<<"incorrcect entrie"<<endl;
                    moviesearch();
                }
            }
        }
            break;
            
        case 3 :{cout<<"\n search price";
            cout<<"enter the price of the movie you would like to search for"<<endl;
            
            double name;
            cin >>name;
            Movie* search = movies->searchprice(name);
            if(search== NULL){
                cout<<"the movie you searched for dosent exist"<<endl;
                 moviesearch();
            }else{
                search->getinfo();
                cout<<"would you like to add this movie to your cart????"<<endl;
                cout<<"1-Yes"<<endl;
                cout<<"2-no"<<endl;
                int x;
                cin>>x;
                if(x==1){
                    cart->createitem(search->getname(), search->getprice(), search->getupc());
                    moviemenu();
                }else if (x==2){
                    cout<<"would you like to search again"<<endl;
                    cout<<"1-Yes"<<endl;
                    cout<<"2-no"<<endl;
                    int x;
                    cin>>x;
                    if(x==1){
                        moviesearch();
                    }else{
                        moviemenu();
                    }
                }else{
                    cout<<"incorrcect entrie"<<endl;
                    moviesearch();
                }
            }
        }
            break;
            
        case 4 :{cout<<"\n return to main menu";
            mainmenu();
        }
            break;
        default : cout<<"\n Invalid selection";{
            moviesearch();
        }
            
    }
    cout<<"\n";
}
