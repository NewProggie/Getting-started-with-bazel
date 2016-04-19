#include <iostream>
#include "message.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello, there" << std::endl;

    msg::Message msg("My Message");
    msg.printMessage();

    return 0;
}
