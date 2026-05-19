#include<stdio.h>
#include "nobel.h"
int main(){
    int a[10]={4,38,25,30,34,23,42,65,78,48};
    int size=sizeof(a)/sizeof(a[0]);
    max(a,size);

    min(a,size);

    prime(7);

    odd(133);

    even(14);

    int sum = sumofarray(a,size);
    printf("The sum is = %d\n",sum);

    int sumofdigit = digitsum(2345);
    printf("The sum of digits of %d is = %d\n",2345,sumofdigit);

    int rev=reverse(123);
    printf("Reversed: %d\n", rev);

    palindrome(121);

    dtob(5);

    btod(18);

    dtoo(18);

    dtoh(898);
    return 0;
}