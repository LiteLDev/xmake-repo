#include "ll/api/utils/SystemUtils.h"

#include <charconv>
#include <chrono>
#include <cstdlib>
#include <dlfcn.h>
#include <sys/system_properties.h>
#include <unistd.h>

namespace ll::inline utils::sys_utils {
namespace {
std::string property(char const* name) {
    char value[PROP_VALUE_MAX]{};
    auto length = __system_property_get(name, value);
    return {value, static_cast<size_t>(length)};
}

std::system_error libraryError() {
    auto message = ::dlerror();
    return {std::make_error_code(std::errc::executable_format_error), message ? message : "dynamic loader failed"};
}
} // namespace

HandleT getModuleHandle(void* address) {
    Dl_info info{};
    return address && ::dladdr(address, &info) ? info.dli_fbase : nullptr;
}

std::optional<std::filesystem::path> getModulePath(HandleT module, HandleT process) {
    if (!module || process) return std::nullopt;
    Dl_info info{};
    if (!::dladdr(module, &info) || !info.dli_fname || !*info.dli_fname) return std::nullopt;
    return std::filesystem::path(info.dli_fname);
}

std::string getModuleFileName(HandleT module, HandleT process) {
    auto path = getModulePath(module, process);
    return path ? path->stem().string() : std::string{};
}

std::string getSystemLocaleCode() {
    auto locale = property("persist.sys.locale");
    if (locale.empty()) locale = property("ro.product.locale");
    return locale;
}

std::string const& getSystemName() {
    static std::string name = "Android " + property("ro.build.version.release");
    return name;
}

data::Version getSystemVersion() {
    auto release = property("ro.build.version.release");
    std::uint16_t major{}, minor{}, patch{};
    char const* first = release.data();
    auto last = first + release.size();
    for (auto* part : {&major, &minor, &patch}) {
        auto result = std::from_chars(first, last, *part);
        if (result.ec != std::errc{} || result.ptr == last || *result.ptr != '.') break;
        first = result.ptr + 1;
    }
    return {major, minor, patch};
}

data::TmWithMs getLocalTime() {
    auto now = std::chrono::system_clock::now();
    auto time = std::chrono::system_clock::to_time_t(now);
    data::TmWithMs result{};
    ::localtime_r(&time, &result);
    result.ms = static_cast<ushort>(std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count() % 1000);
    return result;
}

std::string getEnvironmentVariable(std::string_view name) {
    if (name.empty() || name.find('\0') != std::string_view::npos) return {};
    auto value = std::getenv(std::string(name).c_str());
    return value ? value : std::string{};
}

bool setEnvironmentVariable(std::string_view name, std::string_view value) {
    if (name.empty() || name.find_first_of("=\0", 0, 2) != std::string_view::npos
        || value.find('\0') != std::string_view::npos) return false;
    return ::setenv(std::string(name).c_str(), std::string(value).c_str(), 1) == 0;
}

bool addOrSetEnvironmentVariable(std::string_view name, std::string_view value) {
    auto previous = getEnvironmentVariable(name);
    if (!previous.empty()) previous += ':';
    previous += value;
    return setEnvironmentVariable(name, previous);
}

bool isStdoutSupportAnsi() { return ::isatty(STDOUT_FILENO) != 0; }
bool isWine() { return false; }

std::optional<std::system_error> DynamicLibrary::load(std::filesystem::path const& path) noexcept try {
    if (lib) return std::system_error(std::make_error_code(std::errc::device_or_resource_busy));
    ::dlerror();
    auto opened = ::dlopen(path.c_str(), RTLD_NOW | RTLD_LOCAL);
    if (!opened) return libraryError();
    lib = opened;
    return {};
} catch (...) {
    return std::system_error(std::make_error_code(std::errc::not_enough_memory));
}

std::optional<std::system_error> DynamicLibrary::free() noexcept try {
    if (!lib) return {};
    ::dlerror();
    if (::dlclose(lib) != 0) return libraryError();
    lib = nullptr;
    return {};
} catch (...) {
    return std::system_error(std::make_error_code(std::errc::not_enough_memory));
}

void* DynamicLibrary::getAddress(char const* name) noexcept {
    if (!lib || !name || !*name) return nullptr;
    ::dlerror();
    auto address = ::dlsym(lib, name);
    return ::dlerror() ? nullptr : address;
}
} // namespace ll::inline utils::sys_utils
