#include <stdio.h>

float calculate_area(float height, float width){
    return height * width;
}

int validate_input(float value){
    if (value <= 0){
        printf("Invalid: Value must be positive!\n");
        return 0;
    }
}

int main(){
    float height, width;
    printf("=== Rectangle Area Calculator ===\n");
    printf("Enter the height: "); scanf("%f", &height);
    printf("Enter the width: "); scanf("%f", &width);
}