//
//  grocerieList.hpp
//  Project 2: Inheritance and Polymorphism
//
//  Created by william wright on 11/14/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

#ifndef grocerieList_hpp
#define grocerieList_hpp
#include"groceries.h"
#include <stdio.h>

#endif /* grocerieList_hpp */
class grocerieList{
private:
    grocerie* ptrhead;
    grocerie* ptrend;
    grocerie* ptr;
public:
    grocerieList();
    void creategrocerie(string,double,string,float,int,int,string,string,string);
   void displaygroceries();
    grocerie* searchname(string);
    grocerie* searchupc(string);
    grocerie* searchprice(double);
};
grocerieList::grocerieList(){
    ptrhead = NULL;
    ptrend = NULL;
}
void grocerieList::creategrocerie(string name2,double price2,string upc2,float rating2,int copys2 ,int year2 ,string title2 ,string format2 ,string director2 ){
    grocerie *temp= new grocerie(name2,price2,upc2,rating2,copys2,year2,title2,format2,director2);
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
        ptrend->setNextgrocerie(temp);
        ptrend=temp;
    }
}
void grocerieList::displaygroceries(){
    grocerie *temp = new grocerie;
    temp = ptrhead;
    cout<<endl;
    cout<<"-----grocerie list-----";
    cout<<endl;
    int x =1;
    while(temp!=NULL)
    {
        
        cout <<x<<": ";
        temp->getinfo();
        cout<<endl;
        temp = temp->getnextgrocerie();
        x++;
    }
    
}
grocerie* grocerieList::searchname(string name){
    
    {
        while (ptrhead != NULL)
        {
            if (ptrhead->getname() == name)
            {
                
                return ptrhead;
            }
            ptrhead = ptrhead->getnextgrocerie();
        }
        
    }
    return NULL;
}
grocerie* grocerieList::searchupc(string name){
    {
        while (ptrhead != NULL)
        {
            if (ptrhead->getupc() == name)
            {
                return ptrhead;
            }
            ptrhead = ptrhead->getnextgrocerie();
        }
    }
    return NULL;
}
grocerie* grocerieList::searchprice(double name){
    {
        while (ptrhead != NULL)
        {
            if (ptrhead->getprice() == name)
            {
                return ptrhead;
            }
            ptrhead = ptrhead->getnextgrocerie();
        }
    }
    return NULL;
}
