#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/loading_screen_systems/IClientFactory.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace LoadingScreenSystems {

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

} // namespace LoadingScreenSystems
