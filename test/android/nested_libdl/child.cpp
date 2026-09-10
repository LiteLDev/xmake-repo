#include <android/log.h>
#include <cstdio>
#include <cstring>
#include <dlfcn.h>
namespace {
void* leaf;
}
extern "C" __attribute__((visibility("default"))) bool p6_child_open() noexcept {
    Dl_info self{};
    if (leaf || !dladdr(reinterpret_cast<void*>(p6_child_open), &self) || !self.dli_fname) return false;
    char path[4096];
    if (std::snprintf(path, sizeof(path), "%s", self.dli_fname) >= static_cast<int>(sizeof(path))) return false;
    auto slash = std::strrchr(path, '/');
    if (!slash || static_cast<size_t>(slash - path) + 20 >= sizeof(path)) return false;
    std::strcpy(slash + 1, "libP6NestedLeaf.so");
    auto already = dlopen(path, RTLD_NOW | RTLD_NOLOAD);
    if (already) {
        dlclose(already);
        return false;
    }
    leaf = dlopen(path, RTLD_NOW | RTLD_LOCAL);
    if (!leaf) {
        __android_log_print(ANDROID_LOG_ERROR, "P6Nested", "leaf open: %s", dlerror());
        return false;
    }
    auto value = reinterpret_cast<int (*)() noexcept>(dlsym(leaf, "p6_leaf_value"));
    bool pass  = value && value() == 260405;
    __android_log_print(ANDROID_LOG_INFO, "P6Nested", "child nested leaf result=%d", pass);
    return pass;
}
extern "C" __attribute__((visibility("default"))) bool p6_child_close() noexcept {
    if (!leaf) return true;
    if (dlclose(leaf)) return false;
    leaf = nullptr;
    return true;
}
__attribute__((destructor)) static void closed() {
    __android_log_print(ANDROID_LOG_INFO, "P6Nested", "child destructor");
}
