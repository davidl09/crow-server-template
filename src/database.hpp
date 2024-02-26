//
// Created by davidl09 on 2/17/24.
//

#ifndef DATABASE_HPP
#define DATABASE_HPP

#include "defs.h"

#define  DEFINE_COLUMN(name, sqlppType, ...)                                    \
struct name {                                                                   \
struct _alias_t {                                                           \
static constexpr char _literal[] =  #name ;                             \
using _name_t = sqlpp::make_char_sequence<sizeof (_literal), _literal>; \
template <typename T>                                                   \
struct _member_t {                                                      \
T name;                                                             \
T& operator()() {return name;}                                      \
const T& operator()() const {return name;}                          \
};                                                                      \
};                                                                          \
using _traits = sqlpp::make_traits<sqlppType, __VA_ARGS__>;                 \
};

#define DEFINE_TABLE(name, ...)\
struct name : sqlpp::table_t<name,__VA_ARGS__> {\
struct _alias_t {\
static constexpr char _literal[] = #name;\
using _name_t = sqlpp::make_char_sequence<sizeof (_literal), _literal>;\
template <typename T>\
struct _member_t {\
T name;\
T& operator()() {return name;}\
const T& operator()() const {return name;}\
};\
};\
};




class Database {
public:

    DEFINE_COLUMN(id, sqlpp::integer, sqlpp::tag::require_insert)
    DEFINE_COLUMN(email, sqlpp::varchar, sqlpp::tag::require_insert)
    DEFINE_COLUMN(passhash, sqlpp::varchar, sqlpp::tag::require_insert)

    DEFINE_TABLE(users, id, email, passhash)


    explicit Database(const std::string& filename = ":memory");
    ~Database();
    bool addUser(users user);
    bool confirmLogin(std::string_view email, std::string_view passHash);


private:
    sqlpp::sqlite3::connection_config config;
    sqlpp::sqlite3::connection db;

};






#endif //DATABASE_HPP
