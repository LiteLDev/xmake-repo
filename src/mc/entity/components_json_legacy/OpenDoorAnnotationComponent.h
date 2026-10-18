#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class Block;
class EntityContext;
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
class NavigationComponent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class OpenDoorAnnotationComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, std::queue<BlockPos, std::deque<BlockPos>>> mPassedDoorPositions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::queue<::BlockPos, ::std::deque<::BlockPos>>> mPassedDoorPositions;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    OpenDoorAnnotationComponent& operator=(OpenDoorAnnotationComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI OpenDoorAnnotationComponent();
#else // @header-generator platform
    MCAPI void _cleanUp(::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _cleanUp(::Mob&);
#else // @header-generator platform
    MCAPI void _tryToggleDoorState(::Block const& block, ::Mob& mob, ::BlockPos const doorPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _tryToggleDoorState(::Block const&, ::Mob&, ::BlockPos const) const;
#else // @header-generator platform
    MCAPI void checkPath(::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void checkPath(::Mob&);

    MCNAPI void initFromDefinition(::Actor&);

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
