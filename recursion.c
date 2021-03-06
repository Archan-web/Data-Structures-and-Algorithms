//Write a C program to find power of any number using recursion.

#include<stdio.h>
int getPow(int base,int power){
    if (power==0) return 1;
    return base*getPow(base,power-1);
}
void main(){
    int base,power;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter power: ");
    scanf("%d",&power);
    printf("\n%d^%d = %d",base,power,getPow(base,power));
}


//Write a C program to print all even or odd numbers in given range using recursion.

#include <stdio.h>
void printEvenOdd(int cur, int limit)
{
    if(cur > limit)
        return;
    
    printf("%d, ", cur);
    printEvenOdd(cur + 2, limit);
}
int main()
{
    int lowerLimit, upperLimit;
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);
    
    printf("Even/odd Numbers from %d to %d are: ", lowerLimit, upperLimit);
    printEvenOdd(lowerLimit, upperLimit); 
    
    return 0;
}

//Write a C program to find sum of all-natural numbers between 1 to n using recursion.

#include <stdio.h>
int addNumbers(int n) {
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", addNumbers(num));
    return 0;
}

//Write a C program to find sum of all even or odd numbers in given range using recursion.

#include <stdio.h>
int sumOfEvenOdd(int start, int end) 
{
    if(start > end)
        return 0;
    else
        return (start + sumOfEvenOdd(start + 2, end));
}
int main()
{
    int start, end, sum;
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    printf("Sum of even/odd numbers between %d to %d = %d\n", start, end, sumOfEvenOdd(start, end));
    
    return 0;
}

//Write a C program to find reverse of any number using recursion.

#include <stdio.h>
#include <math.h>
int reverse(int num)
{
    int digit = (int) log10(num);
    if(num == 0)
        return 0;
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}
int main()
{
    int num, rev; 
    printf("Enter any number: ");
    scanf("%d", &num);
    rev = reverse(num);
    printf("Reverse of %d = %d", num, rev);
    
    return 0;
}

//Write a C program to check whether a number is palindrome or not using recursion.

#include <stdio.h>
#include <math.h> 
int reverse(int num)
{
    int digit = (int)log10(num);
    if(num == 0)
        return 0;
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}
int isPalindrome(int num)
{
    if(num == reverse(num))
    {
        return 1;
    }
    
    return 0;
}

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if(isPalindrome(num) == 1)
    {
        printf("%d is palindrome number.\n", num);
    }
    else
    {
        printf("%d is NOT palindrome number.\n", num);
    }
    
    return 0;
}

//Write a C program to find sum of digits of a given number using recursion.

#include <stdio.h>
int sum (int a);
int main()
{
    int num, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}
 
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}

//Write a C program to find factorial of any number using recursion.

#include<stdio.h>
int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d! = %d",n,fact(n));
}

//Write a C program to generate nth Fibonacci term using recursion.

#include <stdio.h>
int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fibo(num - 1) + fibo(num - 2));
    }
}
int main()
{
    int num;
    int result;
 
    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Fibonacci of negative number is not possible.\n");
    }
    else
    {
        result = fibo(num);
        printf("The %d number in fibonacci series is %d\n", num, result);
    }
    return 0;
}

//Write a C program to find GCD (HCF) of two numbers using recursion.

#include <stdio.h>
int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}
int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}

//To calculate factorial of an integer number. (try taking big number also).

#include<stdio.h>
unsigned long long fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d! = %llu",n,fact(n));
}

//To calculate GCD / HCF of n integer numbers.

#include<stdio.h>
int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int arr[], int n){
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = gcd(arr[i], result);
        if(result == 1)
        {
            return 1;
        }
    }
    return result;
}
int main(){
    int a[1000],n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",findGCD(a,n));
    return 0;
}

//To generate Fibonacci series up to n terms.

#include<stdio.h>
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
void main()
{
    int n, s = 0;
    printf("Enter the nth value: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    while(fib(s) <= n)
    {
        printf("%d\t", fib(s));
        s++;
    }
}

//To solve Tower of Hanoi problem for different number of disks.
#include <stdio.h>
void hanoifun(int n, char fr, char tr, char ar)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", fr, tr);
        return;
    }
    hanoifun(n-1, fr, ar, tr);
    printf("\n Move disk %d from rod %c to rod %c", n, fr, tr);
    hanoifun(n-1, ar, tr, fr);
}
int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    hanoifun(n, 'A', 'C', 'B');
    return 0;
}