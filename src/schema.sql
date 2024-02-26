SQL_QSTR (
    CREATE TABLE IF NOT EXISTS users (
        id INT PRIMARY KEY,
        email TEXT UNIQUE,
        passHash TEXT
    )
)