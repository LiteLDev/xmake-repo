package("coffi")
    set_description("A header-only C++ library for accessing files in COFF binary format. (Including Windows PE/PE+ formats)")

    add_urls("https://github.com/serge1/COFFI.git")
    add_versions("v1.1.0", "ef7dd6068ffb131306152234e303b05b2a23580e")

    on_install(function (package)
        os.cp("coffi/*", package:installdir("include", "coffi"))
    end)
