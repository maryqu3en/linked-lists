#include<stdio.h>

int main()
{
    char key, choice;
    int num;
    long date;
    float yield;

    printf("%x \n %x \n %x \n %x \n %x \n", &key, &choice, &num, &date, &yield);
    printf("%lu \n %lu \n %lu \n %lu \n %lu", sizeof(key), sizeof(choice), sizeof(num), sizeof(date), sizeof(yield));

}