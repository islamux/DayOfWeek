#include <iostream>
using namespace std; 

/*
    *     Day : Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7
    *     Sat ==> Saturday
    *     Sun ==> Sunday
    *      .....
*/

//Reading 
#include "casting_reading_func_to_enum.h"
//#include "read_number_in_ragne.h"  ==> in casting_reading_func_to_enum.h

// Check & Calculate
#include "check_en_day_number.h"

// Printing
#include "print_number_int_with_double_msg.h"

int main(){

    // Reading & casting
//     enDayName castingNumber = CastingReadingFuncToEnum();

    // Checking & Calculation
//    string stringNumber = CheckDayNumber(castingNumber);

    // Printing
//    PrintNumberIntWithDoubleMsg("", stringNumber, "");

    // Or In One LIne of Code 
    PrintNumberIntWithDoubleMsg("Day is ", CheckDayNumber(CastingReadingFuncToEnum()), ".");

    return 0;
}