package("compact_enc_det")
    set_description("The compact_enc_det package")

    add_urls("https://github.com/LiteLDev/compact_enc_det.git")
    add_versions("v1.0.1", "232a425a69aa8ccb391f24a051723029a7d4173d")

    on_install(function (package)
        local configs = {}
        if package:config("shared") then
            configs.kind = "shared"
        end
        import("package.tools.xmake").install(package, configs)
    end)

    on_test(function (package)
        assert(package:check_cxxsnippets({test = [[
            #include <type_traits>
            void test(int argc, char** argv) {
                // check whether CompactEncDet::DetectEncoding is a function
                static_assert(std::is_function<decltype(CompactEncDet::DetectEncoding)>::value, "CompactEncDet::DetectEncoding is not a function");
            }
        ]]}, {configs = {languages = "cxx11"}, includes = "compact_enc_det/compact_enc_det.h"}))
    end)
