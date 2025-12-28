/*
This is my cmd line calculator for base C
*/

// LIBRARIES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// VARS

char line[36] = "------------------------------------";

// FUNCTIONS

// Check scan values
int check_scan_val_dob(double *out){
    if (scanf("%lf", out) != 1) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF); // clear buffer
        return 0;
    }
    return 1;
}

int check_scan_val(){
    int scanVal;
    if (scanf("%d" , &scanVal) != 1){
        while(getchar()!= '\n');
        return -1;
    }
    return scanVal;
}


// Functions -> calculator

int add_numbers(void){
    double firstNum , secondNum;
    while(1){
    printf("Enter in first value to be added: ");
    if(!check_scan_val_dob(&firstNum)){
        printf("Invalid try again\n");
        continue;
        }
    printf("Enter in second value to be added: ");
    if(!check_scan_val_dob(&secondNum)){
        printf("Invalid try again\n");
        continue;
        }
    
    double result = firstNum + secondNum;
    printf("%.2lf + %.2lf = %.2lf\n" , firstNum , secondNum , result);
    printf("%s\n", line);
    return 0;
    }
}
int sub_numbers(void){
    double firstNum , secondNum;
    while(1){
    printf("Enter in first value: ");
    if(!check_scan_val_dob(&firstNum)){
        printf("Invalid try again\n");
        continue;
        }
    printf("Enter value to be subtracted from %.2lf: " , firstNum);
    if(!check_scan_val_dob(&secondNum)){
        printf("Invalid try again\n");
        continue;
        }
    
    double result = firstNum - secondNum;
    printf("%.2lf - %.2lf = %.2lf\n" , firstNum , secondNum , result);
    printf("%s\n", line);
    return 0;
    }
}
int multiply_numbers(void){
    double firstNum , secondNum;
    while(1){
    printf("Enter in first value to be multiplied: ");
    if(!check_scan_val_dob(&firstNum)){
        printf("Invalid try again\n");
        continue;
        }
    printf("Enter in second value to be multiplied: ");
    if(!check_scan_val_dob(&secondNum)){
        printf("Invalid try again\n");
        continue;
        }
    
    double result = firstNum * secondNum;
    printf("%.2lf * %.2lf = %.2lf\n" , firstNum , secondNum , result);
    printf("%s\n", line);
    return 0;
    }
}
int divide_numbers(void){
    double firstNum , secondNum;
    while(1){
    printf("Enter in the dividend: ");
    if(!check_scan_val_dob(&firstNum)){
        printf("Invalid try again\n");
        continue;
        }
    printf("Enter in the divisor: ");
    if(!check_scan_val_dob(&secondNum)){
        printf("Invalid try again\n");
        continue;
        }
    
    double result = firstNum / secondNum;
    printf("%.2lf / %.2lf = %.2lf\n" , firstNum , secondNum , result);
    printf("%s\n", line);
    return 0;
    }
}
int calc(){
    int calcMenuVal;
    while(1){
    
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("5) Back to Main Menu\n");
    printf("Please enter in 1-5 to select menu option: ");

    calcMenuVal = check_scan_val();

    if (calcMenuVal == -1) {
        printf("Invalid, try again.\n");
        continue;
        }  
    
    switch(calcMenuVal){
        case 1:
            add_numbers();
            break;
        case 2:
            sub_numbers();
            break;
        case 3:
            multiply_numbers();
            break;
        case 4:
            divide_numbers();
            break;
        case 5:
            return 0; 
        }
    }
}

// Functions --> Unit Converter

int farenheight_celsius(void){
    double num , convertNum;
    int menuVal;
    while(1){
    printf("1) Farenheit -> Celsius\n");
    printf("2) Celsius -> Farenheit\n");
    printf("3) Back to Converter Menu\n");
    printf("Please enter in 1-3 to select menu option: ");
    menuVal = check_scan_val();
    if (menuVal == -1) {
        printf("Invalid, try again.\n");
        continue;
        }  
    switch(menuVal){
        case 1:
            printf("Enter in the Farenheight Temperature: ");
            if(!check_scan_val_dob(&num)){
            printf("Invalid try again\n");
            continue;
            }
            convertNum = ( (num - 32.0) * (5.0/9.0) );
            printf("%.2lf Farenheight is %.2lf Celsius\n" , num , convertNum);
            break;
        case 2:
            printf("Enter in the Celsius Temperature: ");
            if(!check_scan_val_dob(&num)){
            printf("Invalid try again\n");
            continue;
            }
            convertNum = ((num * (9.0/5.0) ) + 32.0);
            printf("%.2lf Celsius is %.2lf Fahrenheit\n", num, convertNum);
            break;
        case 3:
            return 0;
        default:
            printf("Choose 1-3");
            continue;
    
    }

    printf("%s\n", line);
    return 0;
    }
}

int inches_centimeters(void){
    double num , convertNum;
    int menuVal;
    while(1){
    printf("1) Inches -> Centimeters\n");
    printf("2) Centimeters -> Inches\n");
    printf("3) Back to Converter Menu\n");
    printf("Please enter in 1-3 to select menu option: ");
    menuVal = check_scan_val();
    if (menuVal == -1) {
        printf("Invalid, try again.\n");
        continue;
        }  
    switch(menuVal){
        case 1:
            printf("Enter in Inches you want converted to Centimeters: ");
            if(!check_scan_val_dob(&num)){
            printf("Invalid try again\n");
            continue;
            }
            convertNum = num * 2.54;
            printf("%.2lf Inches is %.2lf Centimeters\n" , num , convertNum);
            break;
        case 2:
            printf("Enter in Centimeters you want converted to Inches: ");
            if(!check_scan_val_dob(&num)){
            printf("Invalid try again\n");
            continue;
            }
            convertNum = num / 2.54;
            printf("%.2lf Centimeters is %.2lf Inches\n" , num , convertNum);
            break;
        case 3:
            return 0;
    
    }

    printf("%s\n", line);
    return 0;
    }
}
int pounds_kilograms(void){
    double num , convertNum;
    int menuVal;
    while(1){
    printf("1) Pounds -> Kilograms\n");
    printf("2) Kilograms -> Pounds\n");
    printf("3) Back to Converter Menu\n");
    printf("Please enter in 1-3 to select menu option: ");
    menuVal = check_scan_val();
    if (menuVal == -1) {
        printf("Invalid, try again.\n");
        continue;
        }  
    switch(menuVal){
        case 1:
            printf("Enter in amount of Pounds you want converted to Kilograms: ");
            if(!check_scan_val_dob(&num)){
            printf("Invalid try again\n");
            continue;
            }
            convertNum = num * 0.45359237;
            printf("%.2lf Pounds is %.2lf Kilograms\n" , num , convertNum);
            break;
        case 2:
            printf("Enter in Kilograms you want converted to Pounds: ");
            if(!check_scan_val_dob(&num)){
            printf("Invalid try again\n");
            continue;
            }
            convertNum = num / 0.45359237;
            printf("%.2lf Kilograms is %.2lf Pounds\n" , num , convertNum);
            break;
        case 3:
            return 0;
    
    }

    printf("%s\n", line);
    return 0;
    }
}

int unit_converter(){
    int unitMenuVal;
    while(1){
    
    printf("1) Farenheit <-> Celsius\n");
    printf("2) Inches <-> Centimeters\n");
    printf("3) Pounds <-> Kilograms\n");
    printf("4) Back to Main Menu\n");
    printf("Please enter in 1-4 to select menu option: ");

    unitMenuVal = check_scan_val();

    if (unitMenuVal == -1) {
        printf("Invalid, try again.\n");
        continue;
        }  
    
    switch(unitMenuVal){
        case 1:
            farenheight_celsius();
            break;
        case 2:
            inches_centimeters();
            break;
        case 3:
            pounds_kilograms();
            break;
        case 4:
            return 0;
            break;
        }
    }
}

// Functions --> help

void help(){
    printf("%s\n" , line);
    printf("This calculator is generated by Hayden John Fortunata 12/28/25\n");
    printf("To use in the beginning select 1-3 for different menu options, or 4 to close the program\n");
    printf("If at any point the user types a bad input like aaa or 12b\n");
    printf("The program will run the menu options again as those are not valid inputs\n");
    printf("All functions will take in two numbers and perform the operations as asked to\n");
    printf("All menus have an escape option out of the current menu\n");
    printf("%s\n" , line);
}

// Functions --> main menu
int menu(){
    int menuOption;
    printf("1) Calculator\n");
    printf("2) Unit Converter\n");
    printf("3) Help\n");
    printf("4) Quit\n");
    printf("Please enter in 1-4 to select menu option: ");

    menuOption = check_scan_val();
    return menuOption;
}

int main(){
    while(1){
        int menuOption = menu();
    
        if (menuOption == -1) {
        printf("Invalid, try again.\n");
        continue;
        }  
     
        switch(menuOption){
            case 1:
                calc();
                break;
            case 2:
                unit_converter();
                break;
            case 3:
                help();
                break;
            case 4:
                return 0;
                break;
            default:
                printf("Please enter an integer 1-4\n");                 
                break;
        }
    }
}