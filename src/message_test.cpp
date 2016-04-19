#include <string>
#include "message.h"

int main(int argc, char *argv[]) {
    msg::Message test_msg("Hallo, test");
    if (test_msg.getMessage().empty()) {
        return 1;
    }

    return 0;
}
