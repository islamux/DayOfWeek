#include <iostream>
using namespace std;

string CheckDayNumber(enDayName enDay){

    // call enum

    switch (enDay)
    {
    case enDayName::Sat:
        return "Saturday";
    
    case enDayName::Sun:
        return "Sunday";
    
    case enDayName::Mon:
        return "Monday";

    case enDayName::Tue:
        return "Tuesday";
    
    case enDayName::Wed:
        return "Wednesday";
    
    case enDayName::Thu:
        return "Thursday";
    
    case enDayName::Fri:
        return "Friday";
    
    default: 
        return "Not Proper Choice!\n";
        
    }
}