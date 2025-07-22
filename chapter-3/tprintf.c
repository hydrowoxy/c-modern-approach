/* prints int and float values in various formats */

#include <stdio.h>

int main(void){
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);
    printf("|%10.3f|%10.3e|%-10g|\n",x,x,x);

    return 0;
}

/*
|40|   40|40   |  040|
|   839.210| 8.392e+02|839.21    |
*/

/*
%d displays i in decimal form using a minimum amount of space
%5d displays i in decimal form using a minimum of 5 characters (it added 3 spaces before cuz it only needs 2 chars)
%-5d displays i in decimal form using a minimum of 5 characters (it added 3 spaces after cuz it only needs 2 chars)
%5.3d displays i in decimal form using a minimum of 5 characters overall and a minimum of 3 digits. i is only two digits long 
so it added a 0 to the start to guarantee three digits. Result is 3 chars long so two spaces were added to total to 5 chars. i is right justified.
%10.3f displays x in fixed decimal form using 10 characters overall with 3 difits after the decimal. x requires only 7 characters 
(three before the dp, three after the dp, one for the dp) three spaces precede x.
%10.3e displays x in exponential form using 10 characters overall with three digits after the dp. x requires 9 chars including the exponent so one 
space precedes x
%-10g displays x in either fixed decimal form or exponential form using 10 chars overall. in this case printf chose to display x in
fixed decimal form. minus sign forces left justification so the four spaces come at the end. 
*/