#include <stdio.h>
int main() {
   int i;
   scanf("%d",&i);
   if(i>=90)
   {
    printf("A");
   }
   else if(80<=i<90)
   {
    printf("B");
   }
   else if(70<=i<80)
   {
    printf("C");
   }
   else if(60<=i<70)
   {
    printf("D");
   }
   else{
    printf("F");
   }
}