#pragma once

#include <exception>
#include <system_error>
#include <typeinfo>

#include "ll/api/base/CompilerPredefine.h"
#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/utils/StacktraceUtils.h"

#include "ll/api/io/LogLevel.h"

#include "mc/deps/core/utility/optional_ref.h"

namespace ll::inline utils::error_utils {

class AnyExceptionRef {
#if defined(LL_PLAT_A)
    std::exception_ptr         mException;
    mutable std::exception_ptr mCaughtException;
#else
    void* impl;

    LLAPI void* typeCast(std::type_info const&) const;
#endif

public:
    LLNDAPI AnyExceptionRef(std::exception_ptr const& ptr);
    LLAPI ~AnyExceptionRef();

    AnyExceptionRef(AnyExceptionRef&&)                 = delete;
    AnyExceptionRef(AnyExceptionRef const&)            = delete;
    AnyExceptionRef& operator=(AnyExceptionRef&&)      = delete;
    AnyExceptionRef& operator=(AnyExceptionRef const&) = delete;

    template <class T>
    [[nodiscard]] optional_ref<T> tryGet() const {
#if defined(LL_PLAT_A)
        if (!mException) return nullptr;
        try {
            std::rethrow_exception(mException);
        } catch (T& value) {
            // Retain the caught exception as well, including implementations
            // that copy the exception during rethrow.
            mCaughtException = std::current_exception();
            return value;
        } catch (...) {
            return nullptr;
        }
#else
        return reinterpret_cast<T*>(typeCast(typeid(T)));
#endif
    }
};

LLNDAPI std::system_error getLastSystemError() noexcept;

#if !defined(LL_PLAT_A)
// Converts a Windows SEH exception record; Android has no corresponding record.
LLNDAPI std::exception_ptr createExceptionPtr(void*) noexcept;
#endif

LLNDAPI Stacktrace stacktraceFromCurrentException(size_t skip = 0, size_t maxDepth = ~0ull);

LLNDAPI std::string makeExceptionString(std::exception_ptr ePtr) noexcept;

LLAPI void printCurrentException(
    io::Logger&  logger,
    io::LogLevel level        = io::LogLevel::Error,
    std::exception_ptr const& = std::current_exception()
) noexcept;

template <class T>
    requires(!std::is_same_v<T, std::exception_ptr>)
inline void printException(T const& e, io::Logger& logger, io::LogLevel level = io::LogLevel::Error) noexcept {
    printCurrentException(logger, level, std::make_exception_ptr(e));
}
} // namespace ll::inline utils::error_utils
