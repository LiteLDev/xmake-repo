#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class EntityContext;
class Mob;
class NavigationComponent;
// clang-format on

class OpenDoorAnnotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, std::queue<BlockPos, std::deque<BlockPos>>> mPassedDoorPositions;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenDoorAnnotationComponent& operator=(OpenDoorAnnotationComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OpenDoorAnnotationComponent();

    MCNAPI void _cleanUp(::Mob&);

    MCNAPI void _tryToggleDoorState(::Block const&, ::Mob&, ::BlockPos const) const;

    MCNAPI void checkPath(::Mob&);

    MCNAPI void initFromDefinition(::Actor&);

    MCNAPI void onComponentRemoved(::EntityContext&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
