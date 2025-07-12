#include <iostream>

int main() {
    int time_1 = 5;
    int time_2 = 7;
    int time_3 = 10;
    float level_increase = 1.5;

    std::cout << "The ocean will be " << level_increase * time_1 << " milimeters higher in " << time_1 << " years time." << std::endl;
    std::cout << "The ocean will be " << level_increase * time_2 << " milimeters higher in " << time_2 << " years time." << std::endl;
    std::cout << "The ocean will be " << level_increase * time_3 << " milimeters higher in " << time_3 << " years time." << std::endl;
    return 0;
}