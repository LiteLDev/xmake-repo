package("ieconomicsystem")
    set_homepage("https://github.com/MiracleForest/iEconomicSystem-Release")
    set_description("iEconomicSystem is a multi-economy plugin for LeviLamina.")

    add_urls("https://github.com/MiracleForest/iEconomicSystem-Release/releases/download/v$(version)/iEconomicSystem-SDK.zip")
    add_versions("0.1.0-rc.1", "11c912b0d03cde340ab1011de10fcd2aeec5d5c59e1bec9dc3337c57cfde6515")

    on_install(function (package)
        os.cp("*", package:installdir())
    end)
