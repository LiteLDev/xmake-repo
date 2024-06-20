package("libhat")
    set_description("A modern, high-performance library for C++20 designed around game hacking")

    set_urls("https://github.com/BasedInc/libhat.git")

    add_versions("2024.4.16", "e71b7d4b97141faf9fb77c3507d353412cc90c34")

    add_deps("cmake")

    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        if package:config("shared") then
            table.insert(configs, "-DLIBHAT_SHARED_C_LIB=ON")
        else
            table.insert(configs, "-DLIBHAT_STATIC_C_LIB=ON")
        end
        import("package.tools.cmake").install(package, configs)
        os.mv("include/*", package:installdir("include"))
    end)

    on_test(function (package)
        assert(package:check_cxxsnippets({test = [[
            // Parse a pattern's string representation to an array of bytes at compile time
            constexpr auto pattern = hat::compile_signature<"48 8D 05 ? ? ? ? E8">();

            // ...or parse it at runtime
            using parsed_t = hat::result<hat::signature, hat::signature_parse_error>;
            parsed_t runtime_pattern = hat::parse_signature("48 8D 05 ? ? ? ? E8");
        ]]}, {configs = {languages = "c++20"}, includes = "libhat.hpp"}))
    end)
