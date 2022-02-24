//
//  ToDoList.cpp
//  Exam 2
//
//  Created by Mark Liberato on 4/25/19.
//  Copyright © 2019 Mark Liberato. All rights reserved.
//

#include "ToDoList.hpp"
#include "CriticalToDoItem.hpp"
#include "ToDoItem.hpp"
#include <iostream>


ToDoList::ToDoList()
{
    name = "To Do List";
}


ToDoList::~ToDoList()
{
}

std::string ToDoList::getName()
{
    return name;
}

void ToDoList::addItem(ToDoItem newItem)
{
    items.push_back(newItem);
}

void ToDoList::addCriticalItem(CriticalToDoItem newCriticalItem)
{
    criticalItems.push_back(newCriticalItem);
}

void ToDoList::display()
{
    std::cout << getName() << std::endl;
    
    for (int i = 0; i < criticalItems.size(); i++){
        criticalItems[i].display();
    }
    
    for (int i = 0; i < items.size(); i++) {
        items[i].display();
    }
}

