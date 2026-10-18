#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/options/DiscoveryEnvironment.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { struct Url; }
// clang-format on

class IMinecraftServiceKeySource {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IMinecraftServiceKeySource();
#else // @header-generator platform
    virtual ~IMinecraftServiceKeySource() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Bedrock::Http::Url> getAuthServiceUrl() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Url> getAuthServiceUrl() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<DiscoveryEnvironment> getDiscoveryEnvironment() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<::DiscoveryEnvironment> getDiscoveryEnvironment() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
