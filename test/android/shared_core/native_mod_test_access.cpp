#include "native_mod_test_access.h"

#include <algorithm>
#include <cstring>

#include "ll/core/mod/ModRegistrar.h"

namespace {
bool report(ll::Expected<> result, char* error, size_t capacity) {
    if (capacity) error[0] = '\0';
    if (result) return true;
    auto message = result.error().message();
    if (capacity) {
        auto size = std::min(capacity - 1, message.size());
        std::memcpy(error, message.data(), size);
        error[size] = '\0';
    }
    return false;
}
} // namespace

bool p7_test_load_mod(char const* name, char* error, size_t capacity) {
    return report(ll::mod::ModRegistrar::getInstance().loadMod(name), error, capacity);
}

bool p7_test_enable_mod(char const* name, char* error, size_t capacity) {
    return report(ll::mod::ModRegistrar::getInstance().enableMod(name), error, capacity);
}

bool p7_test_disable_mod(char const* name, char* error, size_t capacity) {
    return report(ll::mod::ModRegistrar::getInstance().disableMod(name), error, capacity);
}
