/* Q9 : Write a program to calculate simple and compound interest for given principal, rate, and time.
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5
Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/
#include<stdio.h>
#include<math.h>

int main(){
    float principal ,rate ,year;
    printf("enter the principal :");
    scanf("%f", &principal );
    printf("enter the rate :");
    scanf("%f", &rate );
    printf("enter the year :");
    scanf("%f", &year );
    float SimpleInterest = (principal*rate*year)/100;
    printf("the simple interest is : %f \n",SimpleInterest);
    float CI;
    CI = principal * (pow((1 + rate / 100.0), year) - 1);
    printf("the compound interest is : %f \n",CI);

    return 0;
}