#include <iostream>
#include "TextHandler.cpp"

int main() {
    TextHandler* handler = new TextHandler("symbols.txt");
    
    handler->parseText();
    
    std::cout << *handler << std::endl;
    
    return 0;
}
