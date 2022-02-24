//
//  CriticalToDoItem.cpp
//  Exam 2
//
//  Created by Mark Liberato on 4/25/19.
//  Copyright © 2019 Mark Liberato. All rights reserved.
//

#include "CriticalToDoItem.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

CriticalToDoItem::CriticalToDoItem(std::string newName){
    setTitle(newName);
    setPriority(5);
    dueDateTime = "";
}

void CriticalToDoItem::setTitle(std::string newTitle)
{
    title = newTitle;
}

std::string CriticalToDoItem::getTitle()
{
    title = "!"+title;
    
    return title;
}

void CriticalToDoItem::setPriority(int newPriority)
{
    //Check for priority < 5
    if(newPriority < 5){
        std::cout << "Critical ToDos should have a priotity of 5 or greater." << std::endl;
    }
    else if ((newPriority < 1) || (newPriority > 10)) {
        std::cout << "Non-valid priority" << std::endl;
    }
    else {
        priority = newPriority;
    }
}

int CriticalToDoItem::getPriority()
{
    return priority;
}

void CriticalToDoItem::display() {
    
    // display the priority and title
    title = getTitle();
    std::cout << "[" << priority << "] " << title << std::endl;
    
    // display the time
    std::cout << "April 25th, 2019" << std::endl;
    
    //display due date
    dueDateTime = getDueDate();
    std::cout << "Due: " << dueDateTime << std::endl;
    
}

std::string CriticalToDoItem::getDueDate(){
    dueDateTime = "April 26th, 2019";
    
    return dueDateTime;
}

