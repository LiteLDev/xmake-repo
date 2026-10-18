#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ServerPlayerMovementComponent;
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

struct PlayerTickSystem {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // PlayerTickSystem inner types define
    using TickCallback = ::std::function<void(::ServerPlayerMovementComponent const&)>;

public:
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo create(bool);
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo create(bool isCatchup);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createAddMovementTickNeededForCatchupSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createAddMovementTickNeededForCatchupSystem();
#endif // @header-generator platform
    // NOLINTEND
};
