#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class EntityContext;
class Mob;
class Path;
// clang-format on

class BreakDoorAnnotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                               mBreakTicks;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty> mMinDifficulty;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                   mTargetID;
    ::ll::TypedStorage<4, 4, int>                               mBreakingTime;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, std::optional<BlockPos>>          mObstructionPos;
    ::ll::TypedStorage<8, 8, ulong>                             mLastPathIndex;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>>      mObstructionPos;
    ::ll::TypedStorage<8, 8, uint64>                            mLastPathIndex;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BreakDoorAnnotationComponent();
#else // @header-generator platform
    MCAPI void _cleanUp(::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _cleanUp(::Mob&);
#else // @header-generator platform
    MCAPI bool canMobBreakDoor(::Mob& mob, ::Path const& path) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canMobBreakDoor(::Mob&, ::Path const&) const;
#else // @header-generator platform
    MCAPI void clearProgress(::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearProgress(::Mob&);
#else // @header-generator platform
    MCAPI void obstructionCheck(::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initFromDefinition(::Actor&);

    MCNAPI void obstructionCheck(::Mob&);

    MCNAPI void onComponentRemoved(::EntityContext&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void onComponentRemoved(::EntityContext& entity);
#endif // @header-generator platform
    // NOLINTEND
};
