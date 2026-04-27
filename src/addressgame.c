#include"embeddedjourney/addressgame.h"

int address_game(){
 int    a = 10;
 float  b = 3.14f;
 char   c = 'Z';

 /*Printing the values*/
 printf("a = %d\n",a);
 printf("b = %f\n",b);
 printf("c = %c\n",c);

 /*Printing the addresses*/
 printf("Address of a = %p\n",&a);
 printf("Address of b = %p\n", &b);
 printf("Address of c = %p\n", &c);

 /*Printing the sizeof*/
 printf("Size of a = %d\n",sizeof(a));
 printf("Size of b = %d\n",sizeof(b));
 printf("Size of c = %d\n",sizeof(c));

 /*Change the values using pointers*/

 int *ptr_a;
 char *ptr_c;

 ptr_a = &a;
 ptr_c = &c;

 *ptr_a = 99;
 *ptr_c = 'A';

 printf("changed a = %d\n",a);
 printf("changed c = %c\n",c);


 return 0;


}