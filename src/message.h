#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>

namespace msg {
    class Message {
      public:
        Message(const std::string msg);
        std::string getMessage() const;
        void setMessage(const std::string& msg);
        void printMessage() const;

      private:
        std::string msg_;
    };
}

#endif
