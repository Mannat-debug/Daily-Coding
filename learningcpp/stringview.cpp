#include <string_view>
#include <iostream>

int main() {
    std::string_view str{"Peach"};
    std::cout << str << std::endl;
    str.remove_prefix(2);
    std::cout << str << std::endl;
    str.remove_suffix(1);
    std::cout << str << std::endl;
    str="Apple";
    std::cout << str << std::endl;
    return 0;
}