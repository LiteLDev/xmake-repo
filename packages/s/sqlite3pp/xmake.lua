package("sqlite3pp")
    set_homepage("https://github.com/iwongu/sqlite3pp")
    set_description("C++ wrapper for SQLite3")
    set_license("MIT")

    add_urls("https://github.com/iwongu/sqlite3pp.git")
    add_versions("1.0.8", "68e6fa2fadf1aeb3f2f41f4883563748002d973a")
    add_deps("sqlite3")

    on_install(function (package)
        os.cp("headeronly_src/*", package:installdir("include/sqlite3pp"))
    end)
