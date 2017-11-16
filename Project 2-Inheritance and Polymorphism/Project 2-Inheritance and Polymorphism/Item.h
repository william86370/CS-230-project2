


#ifndef Item_h
#define Item_h
#include <stdio.h>
#include <iostream>
#endif
using namespace std;
class item{
private:
    string name;
    double price;
    string upc;
    item* nextitem;
public:
    item();
    item(string,double,string);
    string getname();
    double getprice();
    void setname(string);
    void setprice(double);
    string getupc();
    void setupc(string);
    void setnextitem(item*);
    item* getnextitem();
    void getinfo();
    item* makeitem();
};

item::item(){
    name = "";
    price = NULL;
    upc = "";
}
item::item(string nameh,double pricei,string upc2){
    name = nameh;
    price = pricei;
    upc  = upc2;
}
void item::setnextitem(item* next){
    nextitem = next;
}
item* item::getnextitem(){
    return nextitem;
}
string item::getname(){
    return name;
}
double item::getprice(){
    return price;
}
void item::setname(string name2){
    name = name2;
}
void item::setprice(double price2){
    price = price2;
}
void item::setupc(string upc2){
    upc = upc2;
}
string item::getupc(){
    return upc;
}
void item::getinfo(){
    cout<<"Name: "<<getname()<<" Price: "<< getprice()<<"$ UPC: "<< getupc();
}
item* item::makeitem(){
    item* temp = new item();
    temp->setname(name);
    temp->setupc(upc);
    temp->setprice(price);
    return temp;
}
