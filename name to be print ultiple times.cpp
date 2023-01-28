#include <stdio.h>
int main(){
   char name[50],i;
   printf("Enter you name :");
   scanf("%s",name);
   for(i=0;i<10;i++){
      printf("%s\n",name);
   }
   return 0;
}
