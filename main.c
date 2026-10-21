#include <stdio.h>

int main() {
    
    char municipalityName[100];
    char mayorName[100];
    int population;

    printf("========================================\n");
    printf(" Municipal Financial Management System\n");
    printf("========================================\n");

    printf("Welcome to Windhoek Municipality\n\n");

    printf("Enter Municipality Name: ");
    scanf("%99s", municipalityName);

    printf("Enter Mayor's Name: ");
    scanf("%99s", mayorName);

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n---Municipality Report---\n");
    printf("Municipality Name: %s\n", municipalityName);
    printf("Mayor's Name: %s\n", mayorName);
    printf("Population: %d\n", population); 
    printf("===========================\n");

    return 0;
}