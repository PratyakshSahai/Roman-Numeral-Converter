// You are using GCC
#include <stdio.h>

void roman(int n);

int main() {
    
    int n=0;
    if (scanf("%d", &n) != 1) {   // Checking if a non integer value is entered
      printf("Invalid input\n");
      return 0;
    }
    
    if (n<=0 || n>3999) {
        printf("Out of range\n");
        return 0;
    }
    
    roman(n);
    
    return 0;
}

void roman(int n) {

    if (n==0)
      return;

    if (n>=1 && n<4) {
        for (int i=0; i<n; i++) {
            printf("I");
        }
    } else if (n==4) {
        printf("IV");
    } else if (n>=5 && n<9) {
        printf("V");
        roman(n-5);
    } else if (n==9) {
        printf("IX");
    } else if (n>=10 && n<40) {
        for (int i=0; i<n/10; i++) {
            printf("X");
        }
        if (n%10 != 0)
            roman(n%10);
    } else if (n>=40 && n<50) {
        printf("XL");
        roman(n-40);
    } else if (n>=50 && n<90) {
        printf("L");
        roman(n-50);
    } else if (n>=90 && n<100) {
        printf("XC");
        roman(n-90);
    } else if (n>=100 && n<400) {
        for (int i=0; i<n/100; i++) {
            printf("C");
        }
        roman(n%100);
    } else if (n>=400 && n<500) {
        printf("CD");
        roman(n-400);
    }  else if (n>=500 && n<900) {
        printf("D");
        roman(n-500);
    }  else if (n>=900 && n<1000) {
        printf("CM");
        roman(n-900);
    } else if (n>=1000) {
        for (int i=0; i<n/1000; i++) {
            printf("M");
        }
        roman(n%1000);
    }
}