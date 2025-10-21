#include "mylib.h"
int c=0;
int reverseDigits(int n) {
    int reverse=0;
    while (n>0)
    {
        int r=n%10;
        reverse=(reverse*10)+r;
        c+=1;
        n/=10;
    }
    return reverse;

}
int isArmstrong(int num)
{
    reverseDigits(num);
    int n=num,p=0;
    while(n>0){
        int r = n%10;
        int a=1;
        for(int i=1;i<=c;i++){
            a*=r;
        }
        p+=a;
        n/=10;
        
    }
    return p;
}
int isAdams(int num) {
    int a=reverseDigits(num*num);
    int b=reverseDigits(num);
    if (a==b*b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int isPrime(int num) {
    for (int i = 2; i < num; i++)
    {
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int isPrimePalindrome(int num) {
    if (isPrime(num)==1&&reverseDigits(num)==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
