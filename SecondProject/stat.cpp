#include <iostream>
#include <string.h>


int main()
{

    double x;
    double y;
    std::string dif;
    std::string is;
    std::string aword;
    dif = "The Difference of ";
    aword = " and ";
    is = " is: ";
    std::cout << "Please enter two numbers:";
    std::cin >> x;
    std::cin >> y;
    std::cout << "The sum of " << x << " and " << y << " is: " << x + y << "\n";
    if (x >= y) {
        std::cout << dif << x << aword << y << is << (x - y) << "\n";
    } else {
        std::cout << dif << x << aword << y << is << (y - x) << "\n";
    }
    std::cout << "The Product of " << x << " and " << y << " is: " << x * y << "\n";
    std::cout << "The Distance of " << x << " and " << y << " is: " << abs(x - y) << "\n";
    std::cout << "The mean average of " << x << " and " << y << " is: " << (x + y) / 2 << "\n";
    
    return 0;
}