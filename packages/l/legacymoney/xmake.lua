package("legacymoney")
    add_urls("https://github.com/LiteLDev/LegacyMoney/releases/download/v$(version)/LegacyMoney-windows-x64.zip")
    add_versions("0.1.0", "ea33c23bc116cec686fbae3187c3fecece0c1dd8b208cdeef3b101b5a5fdc412")
    add_versions("0.1.1", "a8bcbbad1d65a0e16debd74ff77cdf62c383bb85b1acbe33519ae6a6618b1d6b")

    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
