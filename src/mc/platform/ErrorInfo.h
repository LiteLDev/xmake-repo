#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/CallStack.h"
#endif // @header-generator platform

namespace Bedrock {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
struct ErrorInfo {};
#else // @header-generator platform
template <typename E = std::error_code>
struct ErrorInfo {
public:
    ErrorInfo() = default;

    ErrorInfo(ErrorInfo const&)                = default;
    ErrorInfo& operator=(ErrorInfo const&)     = default;
    ErrorInfo(ErrorInfo&&) noexcept            = default;
    ErrorInfo& operator=(ErrorInfo&&) noexcept = default;

    ErrorInfo(E const& error) : mError(error) {}

    [[nodiscard]] constexpr E&       code() { return mError; }
    [[nodiscard]] constexpr E const& code() const { return mError; }

    E                      mError;
    CallStack              mCallStack;
    std::vector<ErrorInfo> mStackErrors;
};
#endif // @header-generator platform

} // namespace Bedrock
