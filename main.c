#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void Question1(int count, char *string) {
    int i = 0;


}

char *Question1Offuction(char *s) {
    int length = 0;
    int i = 0;
    while(1) {
        if (s[i++] == '\0') break;
        length++;
    }
    char *s_temp[length];
    int index = 0;

    for (int i = length; i > 0; i--) {
        s_temp[index++] = (char*)s[length];
    }
}

// 1 : TRUE
// 2 : FAL

void Question4(char *string) {

    int length = 0;
    int i = 0;
    while(1) {
        if (string[i++] == '\0') break;
        length++;
    }


    int counter = 0;
    int sum = 0;
    int checkNumber = 0;

    for ( i = 0; i < length; i++) {
        if (string[i] != '-') {
            int number = string[i] - '0';
            if (checkNumber % 2 == 0) {
                sum += number * 1;
                checkNumber++;
            } else if (checkNumber % 2 == 1){
                sum += number * 3;
            }
        } else {
            if (counter == 2) break;
            counter++;
        }
    }

    int checkISBN = string[length - 1] - '0';

    if (sum % 10 == checkISBN) {
        printf ("TRUE\n");
    } else {
        printf("FALSE");
    }

}


void Question2 () {
    for (int i = 1; i <= 500; i++) {
        printf("%d\n", i);
    }
}

void question5(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d\t|", i*i*i);
        printf ("%d\t|", (i+1) * (i+1) * (i+1));
        printf ("%d\n", (i+2) * (i+2) * (i+2);
    }
}


void Question3(int n) {
    int sum = 0;

    for (int i = 0; i <= n; i++ ) {
        sum += i;
    }

    if (sum % 2 == 0) {
        printf("偶数\n");
    } else {
        printf("奇数\n");
    }
}

int main() {

}