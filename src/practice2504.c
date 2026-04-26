#include "embeddedjourney/practice2504.h"
#include<stdbool.h>

/*Buffer Definition*/
uint8_t buffer[BUFFER_SIZE]={1,2,3,4,5,6,8,7,10,12};

/*Command Table Definition*/
cmd_func_t cmd_table[CMD_TABLE_SIZE]={cmd_led_on, cmd_led_off,cmd_reset,cmd_status};

uint8_t cmd_response=0;

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

/*array Reversal*/
 void array_reverse(uint8_t *arr, uint8_t size){
    uint8_t *start_ptr=arr;
    uint8_t *end_ptr = arr + size-1;

    while(end_ptr>start_ptr){
        *start_ptr = *start_ptr + *end_ptr;
        *end_ptr = *start_ptr - *end_ptr;
        *start_ptr = *start_ptr - *end_ptr;
        start_ptr++;
        end_ptr--;
    }
 }

 /*Swap two integers using Pointers*/
 void swap_integers(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
 }

 /*Command definitions*/
   void cmd_led_on(void){
    cmd_response=1;
   }
  void cmd_led_off(void){
    cmd_response=2;
  }
  void cmd_reset(void){
    cmd_response=3;
  }
  void cmd_status(void){
    cmd_response=4;
  }
 /*Command Table Dispatch Definition*/
   void handle_command(uint8_t cmd){

    switch (cmd)
    {
    case 0:
        cmd_table[cmd]();
        break;
    
    case 1:
        cmd_table[cmd]();
        break;

    case 2:
        cmd_table[cmd]();
        break;

    case 3:
        cmd_table[cmd]();
            break;
    
    default:
        cmd_response=99;
        break;
    }
   }
