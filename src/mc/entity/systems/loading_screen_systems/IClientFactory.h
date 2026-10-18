#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace LoadingScreenSystems {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class IClientFactory {};
#endif // @header-generator platform

} // namespace LoadingScreenSystems
