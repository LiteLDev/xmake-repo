#if defined(_WIN32) || defined(__ANDROID__)
#include "ll/api/utils/SystemUtils.h"

#if defined(__ANDROID__)
#include <charconv>
#include <chrono>
#include <cstdlib>
#include <dlfcn.h>
#include <sys/system_properties.h>
#include <unistd.h>
#else
#include <string>

#include "ll/api/i18n/I18n.h"
#include "ll/api/memory/Memory.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"

#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"

#include "windows.h"

#include "psapi.h"
#endif

namespace ll::inline utils::sys_utils {
#if defined(__ANDROID__)
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
#else
using namespace ll::string_utils;
#endif

std::string getSystemLocaleCode() {
#if defined(__ANDROID__)
    auto locale = property("persist.sys.locale");
    if (locale.empty()) locale = property("ro.product.locale");
    return locale;
#else
    wchar_t buf[LOCALE_NAME_MAX_LENGTH]{};
    GetUserDefaultLocaleName(buf, LOCALE_NAME_MAX_LENGTH);
    auto str = wstr2str(buf);
    return str;
#endif
}
#if defined(__ANDROID__)

#endif
std::string const& getSystemName() {
#if defined(__ANDROID__)
    static std::string name = "Android " + property("ro.build.version.release");
    return name;
}

data::Version getSystemVersion() {
    auto          release = property("ro.build.version.release");
    std::uint16_t major{}, minor{}, patch{};
    char const*   first = release.data();
    auto          last  = first + release.size();
    for (auto* part : {&major, &minor, &patch}) {
        auto result = std::from_chars(first, last, *part);
        if (result.ec != std::errc{} || result.ptr == last || *result.ptr != '.') break;
        first = result.ptr + 1;
    }
    return {major, minor, patch};
}

data::TmWithMs getLocalTime() {
    auto           now  = std::chrono::system_clock::now();
    auto           time = std::chrono::system_clock::to_time_t(now);
    data::TmWithMs result{};
    ::localtime_r(&time, &result);
    result.ms = static_cast<ushort>(
        std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count() % 1000
    );
#else
    static std::string result = []() {
        std::string name{"Unknown"};
        HMODULE     hMod = LoadLibraryEx(L"winbrand.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
        if (hMod) {
            PWSTR(WINAPI * pfnBrandingFormatString)(PCWSTR pstrFormat);
            (FARPROC&)pfnBrandingFormatString = GetProcAddress(hMod, "BrandingFormatString");
            if (pfnBrandingFormatString) {
                PWSTR pstrOSName = pfnBrandingFormatString(L"%WINDOWS_LONG%");
                name             = wstr2str(pstrOSName);
                // Remember to free the memory!
                GlobalFree((HGLOBAL)pstrOSName);
            }
            FreeLibrary(hMod);
        }
        return name;
    }();
#endif
    return result;
}

#if defined(__ANDROID__)
std::string getEnvironmentVariable(std::string_view name) {
    if (name.empty() || name.find('\0') != std::string_view::npos) return {};
    auto value = std::getenv(std::string(name).c_str());
    return value ? value : std::string{};
#else
bool isWine() {
    static bool result = []() {
        HMODULE ntdll = GetModuleHandle(L"ntdll.dll");
        if (!ntdll) return false;
        auto funcWineGetVersion = GetProcAddress(ntdll, "wine_get_version");
        if (funcWineGetVersion) return true;
        else return false;
    }();
    return result;
#endif
}

#if defined(_WIN32)
data::Version getSystemVersion() {
    OSVERSIONINFOW osVersionInfoW = [] {
        OSVERSIONINFOW osVersionInfoW{};
        HMODULE        hMod = GetModuleHandle(L"ntdll.dll");
        if (hMod) {
            using RtlGetVersionPtr = uint(WINAPI*)(POSVERSIONINFOW);
            auto fxPtr             = (RtlGetVersionPtr)::GetProcAddress(hMod, "RtlGetVersion");
            if (fxPtr != nullptr) {
                osVersionInfoW.dwOSVersionInfoSize = sizeof(osVersionInfoW);
                if (0 == fxPtr(&osVersionInfoW)) {
                    return osVersionInfoW;
                }
            }
        }
        return osVersionInfoW;
    }();
    data::Version version{
        (uint16_t)osVersionInfoW.dwMajorVersion,
        (uint16_t)osVersionInfoW.dwMinorVersion,
        (uint16_t)osVersionInfoW.dwBuildNumber
    };
    if (osVersionInfoW.szCSDVersion[0] != 0) {
        version.preRelease.emplace(wstr2str(osVersionInfoW.szCSDVersion));
    }
    return version;
}

std::span<std::byte> getImageRange(std::string_view name) {
    static auto process = GetCurrentProcess();
    HMODULE     rangeStart;
    if (name.empty()) {
        rangeStart = GetModuleHandle(nullptr);
    } else {
        rangeStart = GetModuleHandle(str2wstr(name).c_str());
    }
    if (rangeStart) {
        MODULEINFO moduleInfo;
        if (GetModuleInformation(process, rangeStart, &moduleInfo, sizeof(MODULEINFO))) {
            return {(std::byte*)rangeStart, moduleInfo.SizeOfImage};
        }
    }
    return {};
}

void* getModuleHandle(void* addr) {
    HMODULE hModule = nullptr;
    GetModuleHandleEx(
        GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        reinterpret_cast<LPCTSTR>(addr),
        &hModule
    );
    return hModule;
}

std::optional<std::filesystem::path> getModulePath(void* handle, void* process) {
    return adaptFixedSizeToAllocatedResult(
               [module = (HMODULE)handle,
                process](wchar_t* value, size_t valueLength, size_t& valueLengthNeededWithNul) -> bool {
                   DWORD  copiedCount{};
                   size_t valueUsedWithNul{};
                   bool   copyFailed{};
                   bool   copySucceededWithNoTruncation{};
                   if (process != nullptr) {
                       // GetModuleFileNameExW truncates and provides no error or other indication it has done so.
                       // The only way to be sure it didn't truncate is if it didn't need the whole buffer. The
                       // count copied to the buffer includes the nul-character as well.
                       copiedCount = ::GetModuleFileNameExW(process, module, value, static_cast<DWORD>(valueLength));
                       valueUsedWithNul              = static_cast<size_t>(copiedCount) + 1;
                       copyFailed                    = (0 == copiedCount);
                       copySucceededWithNoTruncation = !copyFailed && (copiedCount < valueLength - 1);
                   } else {
                       // In cases of insufficient buffer, GetModuleFileNameW will return a value equal to
                       // lengthWithNull and set the last error to ERROR_INSUFFICIENT_BUFFER. The count returned does
                       // not include the nul-character
                       copiedCount      = ::GetModuleFileNameW(module, value, static_cast<DWORD>(valueLength));
                       valueUsedWithNul = static_cast<size_t>(copiedCount) + 1;
                       copyFailed       = (0 == copiedCount);
                       copySucceededWithNoTruncation = !copyFailed && (copiedCount < valueLength);
                   }
                   if (copyFailed) {
                       return false;
                   }
                   // When the copy truncated, request another try with more space.
                   valueLengthNeededWithNul = copySucceededWithNoTruncation ? valueUsedWithNul : (valueLength * 2);
                   return true;
               }
    ).transform([](auto&& path) { return std::filesystem::path(path); });
}

std::string getModuleFileName(void* handle, void* process) {
    return getModulePath(handle, process)
        .transform([](auto&& path) { return u8str2str(path.stem().u8string()); })
        .value_or("unknown module");
}

data::TmWithMs getLocalTime() {
    SYSTEMTIME sysTime;
    GetLocalTime(&sysTime);
    return data::TmWithMs{
        {
         .tm_sec   = sysTime.wSecond,      // seconds after the minute - [0, 60] including leap second
            .tm_min   = sysTime.wMinute,      // minutes after the hour - [0, 59]
            .tm_hour  = sysTime.wHour,        // hours since midnight - [0, 23]
            .tm_mday  = sysTime.wDay,         // day of the month - [1, 31]
            .tm_mon   = sysTime.wMonth - 1,   // months since January - [0, 11]
            .tm_year  = sysTime.wYear - 1900, // years since 1900
            .tm_wday  = sysTime.wDayOfWeek,   // days since Sunday - [0, 6]
            .tm_isdst = -1                    // daylight savings time flag
        },
        sysTime.wMilliseconds
    };
}

std::string getEnvironmentVariable(std::string_view name) {
    auto wName = str2wstr(name);
    return wstr2str(adaptFixedSizeToAllocatedResult(
                        [&wName](wchar_t* value, size_t valueLength, size_t& valueLengthNeededWithNul) -> bool {
                            ::SetLastError(ERROR_SUCCESS);
                            valueLengthNeededWithNul =
                                ::GetEnvironmentVariableW(wName.c_str(), value, static_cast<DWORD>(valueLength));
                            if (valueLengthNeededWithNul == 0 && ::GetLastError() != ERROR_SUCCESS) {
                                return false;
                            }
                            if (valueLengthNeededWithNul < valueLength) {
                                valueLengthNeededWithNul++; // It fit, account for the null.
                            }
                            return true;
                        }
    ).value_or(L""));
}
#endif
bool setEnvironmentVariable(std::string_view name, std::string_view value) {
#if defined(__ANDROID__)
    if (name.empty() || name.find_first_of("=\0", 0, 2) != std::string_view::npos
        || value.find('\0') != std::string_view::npos)
        return false;
    return ::setenv(std::string(name).c_str(), std::string(value).c_str(), 1) == 0;
#else
    return (bool)SetEnvironmentVariableW(str2wstr(name).c_str(), str2wstr(value).c_str());
#endif
}

bool addOrSetEnvironmentVariable(std::string_view name, std::string_view value) {
#if defined(__ANDROID__)
    auto previous = getEnvironmentVariable(name);
    if (!previous.empty()) previous += ':';
    previous += value;
    return setEnvironmentVariable(name, previous);
#else
    auto oldValue = getEnvironmentVariable(name);
    if (!oldValue.empty()) {
        oldValue += ";";
    }
    oldValue += value;
    return setEnvironmentVariable(name, oldValue);
#endif
}

#if defined(__ANDROID__)
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
#else
bool isStdoutSupportAnsi() {
    DWORD mode;
    if (GetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), &mode)) {
        return mode & ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    }
    return false;
#endif
}

#if defined(__ANDROID__)
std::optional<std::system_error> DynamicLibrary::free() noexcept try {
#else
std::optional<std::system_error> DynamicLibrary::load(std::filesystem::path const& path) noexcept {
    if (lib) {
        return std::system_error{{}};
    }
    lib = LoadLibrary(path.c_str());
    if (!lib) {
        return error_utils::getLastSystemError();
    }
    return {};
}
std::optional<std::system_error> DynamicLibrary::free() noexcept {
#endif
    if (!lib) return {};
#if defined(__ANDROID__)
    ::dlerror();
    if (::dlclose(lib) != 0) return libraryError();
#else
    if (!FreeLibrary((HMODULE)lib)) {
        return error_utils::getLastSystemError();
    }
#endif
    lib = nullptr;
    return {};
#if defined(__ANDROID__)
} catch (...) {
    return std::system_error(std::make_error_code(std::errc::not_enough_memory));
#endif
}
#if defined(__ANDROID__)

void* DynamicLibrary::getAddress(char const* name) noexcept {
    if (!lib || !name || !*name) return nullptr;
    ::dlerror();
    auto address = ::dlsym(lib, name);
    return ::dlerror() ? nullptr : address;
}
#else
void* DynamicLibrary::getAddress(char const* name) noexcept { return GetProcAddress((HMODULE)lib, name); }
#endif
} // namespace ll::inline utils::sys_utils

#endif
