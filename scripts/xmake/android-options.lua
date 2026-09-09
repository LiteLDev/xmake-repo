-- Options must exist during xmake's initial menu pass, before switching platforms.
for _, name in ipairs({
    "android_header_root", "android_dependency_lock", "preloader_android_root",
    "android_prelink_executable", "android_runtime_manifest", "android_bmb",
    "android_provider_elf", "android_target_elf"
}) do
    option(name)
        set_showmenu(true)
        set_description("Required frozen P6 Android input")
    option_end()
end
