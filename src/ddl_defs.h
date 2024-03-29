#pragma once

// generated by ./sqlpp11/scripts/ddl2cpp src/schema.sql src/ddl_defs db

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace db
{
  namespace Users_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T id;
            T& operator()() { return id; }
            const T& operator()() const { return id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::can_be_null>;
    };
    struct Email
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "email";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T email;
            T& operator()() { return email; }
            const T& operator()() const { return email; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::require_insert>;
    };
    struct FirstName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "firstName";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T firstName;
            T& operator()() { return firstName; }
            const T& operator()() const { return firstName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::require_insert>;
    };
    struct LastName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "lastName";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T lastName;
            T& operator()() { return lastName; }
            const T& operator()() const { return lastName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::require_insert>;
    };
    struct PassHash
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "passHash";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T passHash;
            T& operator()() { return passHash; }
            const T& operator()() const { return passHash; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::require_insert>;
    };
    struct Misc
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "misc";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T misc;
            T& operator()() { return misc; }
            const T& operator()() const { return misc; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
  } // namespace Users_

  struct Users: sqlpp::table_t<Users,
               Users_::Id,
               Users_::Email,
               Users_::FirstName,
               Users_::LastName,
               Users_::PassHash,
               Users_::Misc>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "users";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T users;
        T& operator()() { return users; }
        const T& operator()() const { return users; }
      };
    };
  };
} // namespace db
