#include <iostream>
#include "defs.h"
#include "server.hpp"


int main() {
    webServer server;
    Database db{"test.db3"};
    Database::users newUser;
    newUser.email = "test@gmail.com";
    newUser.passhash = "2oijspoiasd;f";
    db.addUser(newUser);
    db.confirmLogin("test@gmail.com", ";aojfas;fljjsd");
    server.run(8080);
}
