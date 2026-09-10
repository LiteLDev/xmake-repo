#include "pl/android/GuardedHook.h"
#include "pl/android/Mod.hpp"
#include <android/log.h>
#include <cstdio>
#include <cstring>
#include <dlfcn.h>
namespace {
void* child;
char  childPath[4096], leafPath[4096];
bool  absent(char const* path) noexcept {
    auto handle = dlopen(path, RTLD_NOW | RTLD_NOLOAD);
    if (handle) {
        dlclose(handle);
        return false;
    }
    return true;
}
class Probe {
public:
    bool load(pl::android::ModContext const& context) noexcept {
        auto    api = pl_get_guarded_hook_api_v1();
        Dl_info self{};
        if (!api || api->abiVersion != 1 || !dladdr(reinterpret_cast<void*>(PLGetModRegistration), &self)
            || !self.dli_fname)
            return false;
        if (std::snprintf(childPath, sizeof(childPath), "%s", self.dli_fname) >= static_cast<int>(sizeof(childPath)))
            return false;
        auto slash = std::strrchr(childPath, '/');
        if (!slash || static_cast<size_t>(slash - childPath) + 21 >= sizeof(childPath)) return false;
        std::strcpy(slash + 1, "libP6NestedChild.so");
        std::strcpy(leafPath, childPath);
        std::strcpy(std::strrchr(leafPath, '/') + 1, "libP6NestedLeaf.so");
        if (!absent(childPath) || !absent(leafPath)) return false;
        context.log(2, "P6Nested: cold child=absent leaf=absent; provider API v1");
        child = dlopen(childPath, RTLD_NOW | RTLD_LOCAL);
        if (!child) {
            __android_log_print(ANDROID_LOG_ERROR, "P6Nested", "child open: %s", dlerror());
            return false;
        }
        auto open = reinterpret_cast<bool (*)() noexcept>(dlsym(child, "p6_child_open"));
        return open && open();
    }
    bool enable() noexcept {
        __android_log_print(ANDROID_LOG_INFO, "P6Nested", "Enabled");
        return child;
    }
    bool disable() noexcept {
        if (!child) return true;
        auto close = reinterpret_cast<bool (*)() noexcept>(dlsym(child, "p6_child_close"));
        if (!close || !close() || dlclose(child)) return false;
        child = nullptr;
        return absent(childPath) && absent(leafPath);
    }
    bool unload() noexcept {
        bool clean = disable();
        __android_log_print(ANDROID_LOG_INFO, "P6Nested", "Unloaded clean=%d childHandles=%d", clean, child ? 1 : 0);
        return clean;
    }
};
Probe probe;
} // namespace
PL_REGISTER_MOD(Probe, probe);
