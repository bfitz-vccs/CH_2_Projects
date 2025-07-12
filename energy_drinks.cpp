#include <iostream>

int main(){
    
    int survey_size = 16500;
    float drink_percentage = 0.15;
    float citrus_percentage = 0.58;

    std::cout << "Around " << survey_size * drink_percentage << " of the surveyed customers drink one or more energy drinks per week." << std::endl;
    std::cout << "Around " << survey_size * citrus_percentage << " of the surveyed customers prefer citrus-flavored energy drinks." << std::endl;

    return 0;
}