//
//  ToDoList.hpp
//  Exam 2
//
//  Created by Mark Liberato on 4/25/19.
//  Copyright © 2019 Mark Liberato. All rights reserved.
//
#pragma once
#ifndef ToDoList_hpp
#define ToDoList_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include "ToDoItem.hpp"
#include "CriticalToDoItem.hpp"

#endif /* ToDoList_hpp */

class ToDoList
{
public:
    ToDoList();
    ~ToDoList();
    
    std::string getName();
    void addItem(ToDoItem newItem);
    //add criticalItem
    void addCriticalItem(CriticalToDoItem newCriticalItem);
    void display();
    
private:
    std::string name;
    std::vector<ToDoItem> items;
    //create vector for criticalItems
    std::vector<CriticalToDoItem> criticalItems;
};

