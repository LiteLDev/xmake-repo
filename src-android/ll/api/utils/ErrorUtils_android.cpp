#include "ll/api/utils/ErrorUtils.h"

#include <cerrno>
#include <exception>
#include <stdexcept>

namespace ll::inline utils::error_utils {

AnyExceptionRef::AnyExceptionRef(std::exception_ptr const& pointer) : mException(pointer) {}
AnyExceptionRef::~AnyExceptionRef() = default;

std::system_error getLastSystemError() noexcept { return {errno, std::generic_category()}; }

std::string makeExceptionString(std::exception_ptr exception) noexcept try {
    if (!exception) return "bad exception, can't make exception string";
    std::string result;
    while (exception) {
        auto current = std::exchange(exception, {});
        try {
            std::rethrow_exception(current);
        } catch (std::exception const& error) {
            result += error.what();
            if (auto nested = dynamic_cast<std::nested_exception const*>(&error)) exception = nested->nested_ptr();
        } catch (std::string const& error) {
            result += error;
        } catch (char const* error) {
            result += error ? error : "null exception string";
        } catch (...) {
            result += "unknown C++ exception";
        }
        if (exception) result += ",\nwith: ";
    }
    return result;
} catch (...) {
    return "unknown error when make exception string";
}

// C++ does not retain a throw-site stack in exception_ptr on this platform.
// The caller can use Stacktrace::current() and label it as the current stack.
Stacktrace stacktraceFromCurrentException(size_t, size_t) { return {}; }

} // namespace ll::inline utils::error_utils
