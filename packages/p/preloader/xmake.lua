package("preloader")
    set_description("The preloader package")

    add_urls("https://github.com/LiteLDev/PreLoader.git")
    add_urls("https://github.com/LiteLDev/PreLoader/releases/download/$(version)/preloader-windows-x64.zip")
    add_versions("v1.0.3", "9ec6cd9c2e0590e02229037435a15036eedd925a")
    add_versions("v1.1.0", "0b54d73ade8e534c390fae5451e3e541b74c184e")
    add_versions("v1.2.0", "9fa4a932867b51bf50193838e47944e70175212c")
    add_versions("v1.3.0", "1007284479673a1b14560dfbd94a92f8645777f3")
    add_versions("v1.3.1", "4a50d1d686ec2c9410bdfa7575f0ee9968790515")
    add_versions("v1.4.0", "4a50d1d686ec2c9410bdfa7575f0ee9968790515")
    add_versions("v1.4.2", "19ac92711210d6b57a8b007b63d028b19c150fff")
    add_versions("v1.4.3", "e751e3804811921b71624fa130b6820adf9e846b")
    add_versions("v1.5.0", "a2c5b6dba1352766df845d06cfdd447ab671c075")
    add_versions("v1.5.2", "0d4cd3ffac9435dd945030d20153103e5f8f39e9")
    add_versions("v1.6.0", "21d715b95642fd8148ba2bb3098a8850778f6fe4")
    add_versions("v1.6.1", "a7d0fc0474475036311145a38f3e0b6b22858e46")
    add_versions("v1.6.2", "d1c9603752adcf172c29b7eea6fae765587f83eb")
    add_versions("v1.6.3", "2cdd2f577995dd81eb4f265db5a58253670c8eda")
    add_versions("v1.7.0", "2a7e2befb7ab1a7296a53e8d523728f761f6f43f")
    add_versions("v1.8.0", "da0a383e34c42b251038c3cd42418ea68dd1f6d0")
    add_versions("v1.9.0", "0b6097999e158e5fb36b246827f9bdb1e2ae133b")
    add_versions("v1.12.0", "20d5484c4b76396089d294d8b0373aa56d53cc3c4fdd9b3f3e7705d06b11e811")
    add_versions("v1.13.0", "8b9a11b78e09643bcaff5275b5ff1aaa0282a7f311d47ee60e07fada49462d02")

    on_install(function(package)
        if package:version():le("1.10.0") then
            local configs = {
                kind = "shared"
            }
            import("package.tools.xmake").install(package, configs)
        else
            os.cp("*", package:installdir())
        end
    end)
