#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class RetryPolicy {
public:
    // RetryPolicy inner types define
    using Algorithm = std::function<
        std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>(const Bedrock::Http::Response&)>;

    using Delay = std::chrono::duration<long long, std::ratio<1, 1>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mImplementation;
    // NOLINTEND

public:
    // prevent constructor by default
    RetryPolicy& operator=(RetryPolicy const&);
    RetryPolicy();

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
};

} // namespace Bedrock::Http
