package("legacyremotecall")
    add_urls("https://github.com/LiteLDev/LegacyRemoteCall/releases/download/v$(version)/LegacyRemoteCall-windows-x64.zip")
    add_versions("0.3.0", "660aa7582842add78736e7cd21980db1e4df410f8b8f657e5c8b115d46993cc0")
    add_versions("0.4.0", "93e15026a306edfae62a3e20692dc0ab979ef3d6dd1cd5614c827d8dd4b0b9b3")
    add_versions("0.5.0", "d12edcd45d8c3827efed1256748b82ad074260e8859898c494795900cc901a0b")
    add_versions("0.6.0", "673450054be67f43a95a317f361e7bd55236e5e4a1a09c64e304ab6c574a585d")
    add_versions("0.7.0", "2a49534f8cd7c14d7c72c1f3671f9083c61ac2a084836b98d6592d47962d510e")
    add_versions("0.8.1", "694f16d7c2509c0d80c49a554a95cea29e813f57894fa196ddb24826fe4c31d2")
    add_versions("0.8.2", "bb5f4daeab4c7909472e59a810c77e627ec6aa75822b2e0cbdbb755442277885")
    add_versions("0.8.3", "53a137766321d3a27116db2942e6e1f459b38efe562fb9a46344ffdcfd508e16")
    add_versions("0.9.0-rc.1", "88c45ad770cfdda4136fe15acc6bcd25d29bfa3d964932c2ac844fb080236540")
    add_versions("0.10.0", "0db357b6e7ddcc8f2016bfaf7490d2c777a2d407b477631d66c1def884814f1b")
    
    on_install(function (package)
        os.cp("include", package:installdir())
        os.cp("lib/*.lib", package:installdir("lib"))
    end)
