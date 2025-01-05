package("moodycamelconqueue")
    set_homepage("https://github.com/cameron314/concurrentqueue")
    set_description("A fast multi-producer, multi-consumer lock-free concurrent queue for C++11")
    set_license("BSD")

    add_urls("https://github.com/cameron314/concurrentqueue/archive/refs/tags/$(version).tar.gz",
             "https://github.com/cameron314/concurrentqueue.git")

    add_versions("v1.0.4", "87fbc9884d60d0d4bf3462c18f4c0ee0a9311d0519341cac7cbd361c885e5281")

    on_load(function (package)
        package:set("kind", "library", {headeronly = true})
    end)

    on_install(function (package)
        os.cp("include/concurrentqueue", package:installdir("include"))
    end)
