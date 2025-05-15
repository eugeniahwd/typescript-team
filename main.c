#include <stdio.h>

float calculate_area(float height, float width){
    return height * width;
}

int validate_input(float value){
    if (value <= 0){
        printf("Invalid: Value must be positive!\n");
        return 0;
    }
    return 1;
}

float calculate_perimeter(float height, float width) {
	return 2 * (height + width);
}

void display_results(float area, float perimeter) {
	printf("Area: %.2f\n", area);
	printf("Perimeter: %.2f\n", perimeter);
}

int main(){
    float height, width;
    printf("=== Rectangle Area Calculator ===\n");
    printf("Enter the height: "); scanf("%f", &height);
    printf("Enter the width: "); scanf("%f", &width);
}
