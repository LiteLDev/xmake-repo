#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/BlockListEventMap.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/BlockEventDispatcherToken.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ActorFilterGroup;
class BlockListEventMap;
#endif // @header-generator platform
// clang-format on

class BlockBreakSensorComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                           mSensorRadius;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mSensorPos;
    ::ll::TypedStorage<8, 32, ::BlockEventDispatcherToken>    mListener;
    ::ll::TypedStorage<8, 24, std::vector<BlockListEventMap>> mBlockSets;
    ::ll::TypedStorage<8, 24, std::vector<ActorFilterGroup>>  mSourceFilters;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                               mSensorRadius;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mSensorPos;
    ::ll::TypedStorage<8, 32, ::BlockEventDispatcherToken>        mListener;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockListEventMap>> mBlockSets;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorFilterGroup>>  mSourceFilters;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BlockBreakSensorComponent& operator=(BlockBreakSensorComponent const&);
    BlockBreakSensorComponent(BlockBreakSensorComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BlockBreakSensorComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockBreakSensorComponent();
#else // @header-generator platform
    MCAPI void initialize(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::Actor&);
#else // @header-generator platform
    MCAPI ::BlockBreakSensorComponent& operator=(::BlockBreakSensorComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateSensorPos(::Vec3 const&);
#else // @header-generator platform
    MCAPI void updateSensorPos(::Vec3 const& newPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~BlockBreakSensorComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI ~BlockBreakSensorComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
