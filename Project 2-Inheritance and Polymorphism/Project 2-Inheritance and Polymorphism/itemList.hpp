//
//  itemList.hpp
//  Project 2: Inheritance and Polymorphism
//
//  Created by william wright on 11/14/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

#ifndef itemList_hpp
#define itemList_hpp
#include "Item.h"
#include <stdio.h>

#endif /* itemList_hpp */
class itemList{
private:
    item* ptrhead;
    item* ptrend;
    item* ptr;
public:
    itemList();
    void createitem(string,double,string);
   void displayitems();
};
itemList::itemList(){
    ptrhead = NULL;
    ptrend = NULL;
}
void itemList::createitem(string name2, double price2, string upc2){
    item *temp= new item(name2,price2,upc2);
    temp->setname(name2);
    temp->setprice(price2);
    temp->setupc(upc2);
    if(ptrhead==NULL)
    {
        ptrhead=temp;
        ptrend=temp;
        temp=NULL;
    }
    else
    {
        ptrend->setnextitem(temp);
        ptrend=temp;
    }
}
void itemList::displayitems(){
    item *temp = new item;
    temp = ptrhead;
    int x=1;
    cout<<endl;
    cout<<"-----cart list-----";
    cout<<endl;
    while(temp!=NULL)
    {
        cout <<x<<": ";
        temp->getinfo();
        cout<<endl;
        temp = temp->getnextitem();
        x++;
    }
    
}

