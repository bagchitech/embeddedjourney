#include"practice25041.h"

/*Buffer Definition*/
uint8_t buffer[BUFFER_SIZE]={1,2,3,4,5,6,8,7,10,12};

/*Array Sum Function Definition*/
uint8_t array_sum(uint8_t *arr, uint8_t size){
    uint8_t temp_sum = 0;
    uint8_t *arr_ptr = arr;
    for(uint8_t i=0;i<size;i++){
        temp_sum += *arr_ptr;
        arr_ptr++;
    }
    return temp_sum;
}
