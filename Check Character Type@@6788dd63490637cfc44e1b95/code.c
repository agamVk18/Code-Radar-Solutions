#include <stdio.h>
int main() {
    char a[20];
    scanf("%c",&a);
    if(a =="a" || a =="e" || a=="i" || a=="o" || a=="u")
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}