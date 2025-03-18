#include <iostream>

int main() {
    float heights[] = {160.5, 165.2, 170.8, 158.0, 175.4, 169.3};

    int size = sizeof(heights) / sizeof(heights[0]);

    float totalHeight = 0;

    for (int i = 0; i < size; i++) {
        totalHeight = totalHeight + heights[i];
    }

    float averageHeight = totalHeight / size;

    std::cout << "The average height of students is: " << averageHeight << " cm" << std::endl;

    return 0;
}
