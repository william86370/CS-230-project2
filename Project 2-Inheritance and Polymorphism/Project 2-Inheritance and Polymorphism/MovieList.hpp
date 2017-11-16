//
//  MovieList.hpp
//  Project 2: Inheritance and Polymorphism
//
//  Created by william wright on 11/14/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

#ifndef MovieList_hpp
#define MovieList_hpp
#include"Movies.hpp"
#include <stdio.h>

#endif /* MovieList_hpp */
class MovieList{
private:
    Movie* ptrhead;
    Movie* ptrend;
    Movie* ptr;
public:
    MovieList();
    void createmovie(string,double,string,float,int,int,string,string,string);
   void displaymovies();
    Movie* searchname(string);
    Movie* searchupc(string);
    Movie* searchprice(double);
};
MovieList::MovieList(){
    ptrhead = NULL;
    ptrend = NULL;
}
void MovieList::createmovie(string name2,double price2,string upc2,float rating2,int copys2 ,int year2 ,string title2 ,string format2 ,string director2 ){
    Movie *temp= new Movie(name2,price2,upc2,rating2,copys2,year2,title2,format2,director2);
    temp->setname(name2);
    temp->setprice(price2);
    temp->setupc(upc2);
    temp->setRating(rating2);
    temp->setYear(year2);
    temp->setTitle(title2);
    temp->setFormat(format2);
    temp->setDirector(director2);
    if(ptrhead==NULL)
    {
        ptrhead=temp;
        ptrend=temp;
        temp=NULL;
    }
    else
    {
        ptrend->setNextMovie(temp);
        ptrend=temp;
    }
}
void MovieList::displaymovies(){
    Movie *temp = new Movie;
    temp = ptrhead;
    while(temp!=NULL)
    {
        temp->getinfo();
        cout<<endl;
        temp = temp->getnextMovie();
    }
    
}
Movie* MovieList::searchname(string name){
    
    {
        while (ptrhead != NULL)
        {
            if (ptrhead->getname() == name)
            {
                printf("key found\n");
                return ptrhead;
            }
            ptrhead = ptrhead->getnextMovie();
        }
        printf("Key not found\n");
    }
    return NULL;
}
Movie* MovieList::searchupc(string name){
    
    {
        while (ptrhead != NULL)
        {
            if (ptrhead->getupc() == name)
            {
                printf("key found\n");
                return ptrhead;
            }
            ptrhead = ptrhead->getnextMovie();
        }
        printf("Key not found\n");
    }
    return NULL;
}

Movie* MovieList::searchprice(double name){
    
    {
        while (ptrhead != NULL)
        {
            if (ptrhead->getprice() == name)
            {
                printf("key found\n");
                return ptrhead;
            }
            ptrhead = ptrhead->getnextMovie();
        }
        printf("Key not found\n");
    }
    return NULL;
}


