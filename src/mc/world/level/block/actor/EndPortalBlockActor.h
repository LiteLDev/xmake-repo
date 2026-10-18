#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/VanillaBlockActor.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class EndPortalBlockActor : public ::VanillaBlockActor {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    EndPortalBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EndPortalBlockActor();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EndPortalBlockActor(::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

#else // @header-generator platform
#endif // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();
#endif // @header-generator platform
    // NOLINTEND
};
