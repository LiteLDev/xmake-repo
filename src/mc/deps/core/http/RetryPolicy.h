#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class RetryPolicy {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // RetryPolicy inner types define
    using Algorithm = std::function<
        std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>(const Bedrock::Http::Response&)>;

    using Delay = std::chrono::duration<long long, std::ratio<1, 1>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mImplementation;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkb21c3b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RetryPolicy& operator=(RetryPolicy const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RetryPolicy(RetryPolicy const&);
#endif // @header-generator platform
    RetryPolicy();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>
           getDelay(::Bedrock::Http::Response const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::function<
        std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>(const Bedrock::Http::Response&)>
        Always(std::chrono::duration<long long, std::ratio<1, 1>>);

    MCNAPI static std::function<
        std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>(const Bedrock::Http::Response&)>
    Chained(
        std::initializer_list<std::function<
            std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>(const Bedrock::Http::Response&)>>&&
    );

    MCNAPI static std::function<
        std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>(const Bedrock::Http::Response&)>
    Count(int, std::chrono::duration<long long, std::ratio<1, 1>>);

    MCNAPI static std::function<
        std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>(const Bedrock::Http::Response&)>
        ExponentialBackOff(
            std::chrono::duration<long long, std::ratio<1, 1>>,
            std::chrono::duration<long long, std::ratio<1, 1>>
        );

    MCNAPI static std::function<
        std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>(const Bedrock::Http::Response&)>
    RetryAfterHeader(int);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Bedrock::Http
