#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/systems/loading_screen_systems/IClientFactory.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace LoadingScreenSystems {

#if defined(LL_PLAT_A) // @header-generator platform
class Factory : public ::LoadingScreenSystems::IClientFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Factory();

    virtual ::TickingSystemWithInfo clientLoadingScreenSystem() const;

    virtual ::TickingSystemWithInfo clientPushDimensionLoadingScreenSystem() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::TickingSystemWithInfo $clientLoadingScreenSystem() const;

    MCNAPI ::TickingSystemWithInfo $clientPushDimensionLoadingScreenSystem() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class Factory {};
#endif // @header-generator platform

} // namespace LoadingScreenSystems
