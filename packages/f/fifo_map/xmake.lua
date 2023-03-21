package("fifo_map")
    set_description("a FIFO-ordered associative container for C++")

    add_urls("https://github.com/nlohmann/fifo_map.git")
    add_versions("v1.0.0", "a5a5b4dc92b0031ec30b37b6c29944d450054df5")

    on_install(function (package)
        os.cp("src/*.hpp", package:installdir("include", "fifo_map"))
    end)
