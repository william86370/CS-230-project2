//
//  Electronics.hpp
//  Project 2: Inheritance and Polymorphism
//
//  Created by william wright on 11/2/17.
//  Copyright © 2017 SilverTap. All rights reserved.
//

#ifndef Electronics_hpp
#define Electronics_hpp
#include <iostream>
#include <stdio.h>
#include "Item.h"
#endif /* Electronics_hpp */
using namespace std;
class Electronics : public item{
private:
    string type;
public:
    Electronics();
};
Electronics::Electronics(){
    item();
    type = "";
}
