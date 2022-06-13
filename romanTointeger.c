#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
   char roman[30];
   int deci=0;
   int length,i,d[30];
   printf("The Roman equivalent to decimal\n");
   printf("Decimal:.........Roman\n");
   printf("%5d............%3c\n",1,'I');
   printf("%5d............%3c\n",5,'V');
   printf("%5d............%3c\n",10,'X');
   printf("%5d............%3c\n",50,'L');
   printf("%5d............%3c\n",100,'C');
   printf("%5d............%3c\n",500,'D');
   printf("%5d............%3c\n",1000,'M');
   printf("Enter a Roman numeral:");
   scanf("%s",roman);
   length=strlen(roman);
   for(i=0;i<length;i++){
      switch(roman[i]){
         case 'm':
         case 'M': d[i]=1000; break;
         case 'd':
         case 'D': d[i]= 500; break;
         case 'c':
         case 'C': d[i]= 100; break;
         case 'l':
         case 'L': d[i]= 50; break;
         case 'x':
         case 'X': d[i]= 10; break;;
         case 'v':
         case 'V': d[i]= 5; break;
         case 'i':
         case 'I': d[i]= 1;
      }
   }
   for(i=0;i<length;i++){
      if(i==length-1 || d[i]>=d[i+1])
         deci += d[i];
      else
         deci -= d[i];
   }
   printf("The Decimal equivalent of Roman numeral %s is %d\n", roman, deci);
}