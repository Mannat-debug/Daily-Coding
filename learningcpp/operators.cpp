#include <iostream>

int getQuantityPhrase(int quantity)  {
    if (quantity<0)
    std::cout<< "negative";
    else if (quantity==0)
    std::cout<< "no";
    else if (quantity==1)
    std::cout<< "a single";
    else if (quantity==2)
    std::cout<< "a couple of";
    else if (quantity==3)
    std::cout<< "a few";
    else if (quantity>3)
    std::cout<< "many";

    return 0;
}


std::string getApplesPluralized(int quantity) {
    (quantity==1) ? std::cout << "apple" : std::cout << "apples";
    return "";
}

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}