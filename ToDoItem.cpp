//
//  ToDoItem.cpp
//  Exam 2
//
//  Created by Mark Liberato on 4/25/19.
//  Copyright © 2019 Mark Liberato. All rights reserved.
//

#include "ToDoItem.hpp"

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

ToDoItem::ToDoItem(std::string newTitle) {
    
    setTitle(newTitle);
    setPriority(5);
    
}

void ToDoItem::setTitle(std::string newTitle)
{
    title = newTitle;
}

std::string ToDoItem::getTitle()
{
    return title;
}

void ToDoItem::setPriority(int newPriority)
{
    if ((newPriority < 1) || (newPriority > 10)) {
        std::cout << "Non-valid priority" << std::endl;
    }
    else {
        priority = newPriority;
    }
}

int ToDoItem::getPriority()
{
    return priority;
}

void ToDoItem::display() {
    
    // display the priority and title
    cout << "[" << priority << "] " << title << endl;
    
    // display the time
    cout << "April 25th, 2019" << endl;
    
}
