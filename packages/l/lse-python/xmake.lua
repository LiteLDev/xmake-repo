package("lse-python")
    add_urls("https://github.com/LiteLDev/cpython/releases/download/$(version)/lse-python-win-x86_64.zip")
    add_versions("v3.10.6", "2aa14fe10ed10f06da294f2668e93c5f33a82b325818c0eb2eec93c3e673d985")

    add_includedirs("include/")
    on_install(function (package)
        os.cp("*", package:installdir())
    end)
