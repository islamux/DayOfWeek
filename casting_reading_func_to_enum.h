#include <iostream>
using namespace std;


// enum make error
//   error: expected unqualified-id before ‘using’
//   2 | using namespace std; when calling from seperate file so i put it here 
enum enDayName{
    Sat=1,
    Sun=2,
    Mon=3,
    Tue=4,
    Wed=5,
    Thu=6,
    Fri=7
};

#include "read_number_in_ragne.h"

enDayName CastingReadingFuncToEnum(){

    return (enDayName) ReadNumberInRange("Enter a number from 1 to 7: ", 1, 7);
}