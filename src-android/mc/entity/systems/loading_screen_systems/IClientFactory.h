#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace LoadingScreenSystems {

class IClientFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IClientFactory();

    virtual ::TickingSystemWithInfo clientLoadingScreenSystem() const = 0;

    virtual ::TickingSystemWithInfo clientPushDimensionLoadingScreenSystem() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace LoadingScreenSystems
