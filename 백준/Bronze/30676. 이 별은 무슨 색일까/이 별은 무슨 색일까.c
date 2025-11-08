#include <stdio.h>

int main() {
    int wavelength;
    scanf("%d", &wavelength);

    if (wavelength >= 620 && wavelength <= 780) {
        printf("Red\n");
    } 
    else if (wavelength >= 590 && wavelength < 620) {
        printf("Orange\n");
    } 
    else if (wavelength >= 570 && wavelength < 590) {
        printf("Yellow\n");
    } 
    else if (wavelength >= 495 && wavelength < 570) {
        printf("Green\n");
    } 
    else if (wavelength >= 450 && wavelength < 495) {
        printf("Blue\n");
    } 
    else if (wavelength >= 425 && wavelength < 450) {
        printf("Indigo\n");
    } 
    else if (wavelength >= 380 && wavelength < 425) {
        printf("Violet\n");
    } 

    return 0;
}
