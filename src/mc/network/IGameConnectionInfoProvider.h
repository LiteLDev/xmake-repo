#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social { class GameConnectionInfo; }
// clang-format on

namespace Social {

class IGameConnectionInfoProvider {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IGameConnectionInfoProvider();
#else // @header-generator platform
    virtual ~IGameConnectionInfoProvider() = default;
#endif // @header-generator platform

    virtual ::Social::GameConnectionInfo const& getConnectionInfo() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::string> getNetworkInfoString() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    virtual ::std::optional<::std::string> getNetworkInfoString() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social
