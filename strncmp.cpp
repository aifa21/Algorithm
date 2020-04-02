#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main () {
   char str1[20];
   char str2[20];
   int result;

   //Assigning the value to the string str1
   strcpy(str1, "hello");

   //Assigning the value to the string str2
   strcpy(str2, "helLO WORLD");

   //This will compare the first 3 characters
   result = strncmp(str1, str2, 3);

   if(result > 0) {
      printf("ASCII value of first unmatched character of str1 is greater than str2");
   } else if(result < 0) {
      printf("ASCII value of first unmatched character of str1 is less than str2");
   } else {
      printf("Both the strings str1 and str2 are equal");
   }

   return(0);
}
/*


char str1[20];
   char str2[20];
   int result;

   strcpy(str1, "hello");
   strcpy(str2, "helLO WORLD");

   //This will compare the first 4 characters
   result = strncmp(str1, str2, 4);

   if(result > 0) {
      printf("ASCII value of first unmatched character of str1 is greater than str2");
   } else if(result < 0) {
      printf("ASCII value of first unmatched character of str1 is less than str2");
   } else {
      printf("Both the strings str1 and str2 are equal");
   }

   */



   /*



   char str1[20];
   char str2[20];
   int result;

   strcpy(str1, "abcdef");
   strcpy(str2, "ABCDEF");

   //This will compare the first 4 characters
   result = strncmp(str1, str2, 4);//result=32 bcz(97-65)

   if(result > 0) {
      printf("ASCII value of first unmatched character of str1 is greater than str2");
   } else if(result < 0) {
      printf("ASCII value of first unmatched character of str1 is less than str2");
   } else {
      printf("Both the strings str1 and str2 are equal");
   }



   */
