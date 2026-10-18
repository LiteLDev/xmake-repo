#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
struct SignalingClientConfiguration;
// clang-format on

class ISignalingServiceConfigProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ISignalingServiceConfigProvider inner types declare
    // clang-format off
    struct Token;
    // clang-format on

    // ISignalingServiceConfigProvider inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Token : public ::std::string {
    public:
        // prevent constructor by default
        Token& operator=(Token const&);
    };
#else // @header-generator platform
    struct Token : public ::std::string {};
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ISignalingServiceConfigProvider() = default;
#else // @header-generator platform
    virtual ~ISignalingServiceConfigProvider() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<SignalingClientConfiguration> getConfiguration(std::string const&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::SignalingClientConfiguration> getConfiguration(::std::string const& id) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<ISignalingServiceConfigProvider::Token> getAuthToken() = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::ISignalingServiceConfigProvider::Token> getAuthToken() = 0;
#endif // @header-generator platform

    virtual void reset() = 0;
    // NOLINTEND
};
