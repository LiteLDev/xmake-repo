package("threadpool")
    set_description("The threadpool package")

    add_urls("https://github.com/progschj/ThreadPool.git")
    add_versions("v1.0.0", "9a42ec1329f259a5f4881a291db1dcb8f2ad9040")

    on_install(function (package)
        os.cp("*.h", package:installdir("include", "threadpool"))
    end)