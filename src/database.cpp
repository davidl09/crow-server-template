//
// Created by davidl09 on 2/17/24.
//

#include "database.hpp"

Database::Database(const std::string& filename)
    : config{filename}, db{config} {

    const auto initCmd =
#include "schema.sql"
        ;

    db.execute(initCmd);
}

Database::~Database() = default;


bool Database::addUser(users user) {
    try {
        db.insert(user);
        return true;
    }
    catch (sqlpp::exception& e) {
        std::clog << e.what() << std::endl;
        return false;
    }
}

bool Database::confirmLogin(std::string_view email, std::string_view passHash) {
    users user;
    auto result = db(select(sqlpp::all_of(user)).from(user).where(user.email == email));
    for (const auto& elem : result) {
        std::cout << elem.id;
    }
}




