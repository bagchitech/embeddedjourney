#include "embeddedjourney/practice2704.h"

const char * const error_strings[5] = {"Error 201", "Error555", "Error 1234", "Error 404", "Error 3214"};

/*function to increment the counter*/
uint8_t counter_function(void){
    static uint8_t counter = 0;
    counter ++;
    return counter;
}


/* Error Code Retrieval Function*/
 const char* get_error_string(uint8_t code){
    if(code>0 && code<=4){
    return error_strings[code];
    }
    return "NA";
 }
