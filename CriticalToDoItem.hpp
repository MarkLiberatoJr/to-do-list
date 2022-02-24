//
//  CriticalToDoItem.hpp
//  Exam 2
//
//  Created by Mark Liberato on 4/25/19.
//  Copyright © 2019 Mark Liberato. All rights reserved.
//
#pragma once
#ifndef CriticalToDoItem_hpp
#define CriticalToDoItem_hpp

#include <stdio.h>
#include "ToDoItem.hpp"
#include "string"
#endif /* CriticalToDoItem_hpp */

class CriticalToDoItem
{
private:
    std::string title;
    int priority;
    //Create dueDateTime method
    std::string dueDateTime;
    
public:
    //Create getter for dueDateTime
    std::string getDueDate();
    
    CriticalToDoItem(std::string newName);
    
    void setTitle(std::string newTitle);
    std::string getTitle();
    
    void setPriority(int newPriority);
    int getPriority();
    
    void display();

    
};
