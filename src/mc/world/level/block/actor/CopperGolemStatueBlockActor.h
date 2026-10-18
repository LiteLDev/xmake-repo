#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class SerializedActorBlockActor;
// clang-format on

class CopperGolemStatueBlockActor {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<SerializedActorBlockActor> create(::BlockPos const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BlockActorType const& TypeId();
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::SerializedActorBlockActor> create(::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND
};
