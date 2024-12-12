#include <stdio.h>
/*A C CODE TO CALCULATE THE AREA OF A TRIANGLE*/
int main() {
    int base, height; /*VARIABLES OF BASE AND HEIGHT IN INTEGERS*/
    float area; /*VARIABLE OUTPUT OF AREA IN FLOATING DECIMAL*/
    char unit; /*VARIABLE UNIT IN CHARACTER*/
/*TO SELECT THE UNIT FOR CALCULATION. THIS IS EXPECTED TO BE IN A SINGULAR UNIT*/
    printf("Select the unit of measurement:\n");
    printf("m for Meters\n");
    printf("c for Centimeters\n");
    printf("M for Millimeters\n");
    scanf(" %c", &unit); /* TO STORE THE VALUE OF THE UNIT*/

    printf("PLEASE Enter the HEIGHT of the triangle: \n");
    scanf("%d", &height); /*TO STORE THE VALUE TO THE VARIABLE HEIGHT*/

    printf("PLEASE Enter the BASE of the triangle: \n");
    scanf("%d", &base);/*TO STORE THE VALUE TO THE VARIABLE BASE*/

    area = (base * height) / 2.0;

    printf("Base\tHeight\t  Area\n"); /* TO DISPLAY THE BASE, HEIGHT AND AREA IN TABULAR FORMAT*/
 switch (unit) {
        case 'm':
            printf("%d m\t%7d m\t%9.2f m^2\n", base, height, area);
            break;
        case 'c':
            printf("%d cm\t%d cm\t%7.2f cm^2\n", base, height, area);
            break;
        case 'M':
            printf("%d mm\t%5d mm\t%7.2f mm^2\n", base, height, area);
            break;
        default:
            printf("Invalid unit selection\n");
            break;
    }

    return 0;
}

