cc_library(
    name = "message-lib",
    srcs = ["src/message.cpp"],
    hdrs = ["src/message.h"],
)

cc_binary(
    name = "greetings",
    srcs = ["src/main.cpp"],
    deps = [":message-lib"],
)

cc_test(
    name = "greetings_test",
    srcs = ["src/message_test.cpp"],
    deps = [":message-lib"],
)
