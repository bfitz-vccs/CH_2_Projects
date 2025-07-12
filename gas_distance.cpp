#include <iostream>

int main(){
    
    int tank_size = 20;
    float town_mileage = 23.5;
    float highway_mileage = 28.9;

    std::cout << "The car can drive " << tank_size * town_mileage << " miles when driven in town." << std::endl;
    std::cout << "The car can drive " << tank_size * highway_mileage << " miles when driven on the highway." << std::endl;

    return 0;
}