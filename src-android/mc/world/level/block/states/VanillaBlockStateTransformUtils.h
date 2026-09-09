#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Name.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/states/CommonDirection.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class VanillaBlockStateTransformUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::CommonDirection _mirror(::CommonDirection, ::Mirror);

    MCNAPI static ::CommonDirection _rotate(::CommonDirection, ::Rotation);

    MCNAPI static bool hasTransformableWallStates(::Block const&);

    MCNAPI static ::Block const* transformBlock(::Block const&, ::CommonDirection);

    MCNAPI static ::Block const* transformBlock(::Block const&, ::Facing::Name);

    MCNAPI static ::Block const* transformBlock(::Block const&, ::Rotation, ::Mirror);

    MCNAPI static ::Block const* transformWallConnectionTypes(::Block const&, ::Rotation, ::Mirror);
    // NOLINTEND
};
