#include <iostream>
#include "defs.h"

int main() {
    SimpleApp app;

    CROW_CATCHALL_ROUTE(app)([]() {
        std::stringstream ss;
        ss << std::chrono::steady_clock::now().time_since_epoch();
        return ss.str();
    });

    app.port(8080).loglevel(LogLevel::Debug).multithreaded().run();
}
