#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
    ::ll::TypedStorage<4, 16, std::optional<BlockPos>>          mObstructionPos;
    ::ll::TypedStorage<8, 8, ulong>                             mLastPathIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BreakDoorAnnotationComponent();

    MCNAPI void _cleanUp(::Mob&);

    MCNAPI bool canMobBreakDoor(::Mob&, ::Path const&) const;

    MCNAPI void clearProgress(::Mob&);

    MCNAPI void initFromDefinition(::Actor&);

    MCNAPI void obstructionCheck(::Mob&);

    MCNAPI void onComponentRemoved(::EntityContext&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
