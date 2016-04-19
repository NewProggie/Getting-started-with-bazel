#include "message.h"
#include <iostream>

namespace msg {

    Message::Message(const std::string msg) : msg_(msg) {}

    std::string Message::getMessage() const {
        return msg_;
    }

    void Message::setMessage(const std::string& msg) {
        msg_ = msg;
    }

    void Message::printMessage() const {
        std::cout << "Message is: " << msg_ << std::endl;
    }
}
