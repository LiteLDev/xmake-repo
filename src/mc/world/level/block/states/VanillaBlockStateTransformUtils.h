#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Name.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/Direction.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/CoralDirection.h"
#include "mc/world/level/block/FrontAndTop.h"
#include "mc/world/level/block/LeverDirection.h"
#include "mc/world/level/block/PillarAxis.h"
#include "mc/world/level/block/PortalAxis.h"
#include "mc/world/level/block/RailDirection.h"
#include "mc/world/level/block/TorchFacing.h"
#include "mc/world/level/block/WeirdoDirection.h"
#endif // @header-generator platform
#include "mc/world/level/block/states/CommonDirection.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class VanillaBlockStateTransformUtils {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // VanillaBlockStateTransformUtils inner types declare
    // clang-format off
    template<typename T0> class CommonDirectionMapping;
    // clang-format on

    // VanillaBlockStateTransformUtils inner types define
    template <typename T0>
    class CommonDirectionMapping {};

public:
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::CommonDirection _mirror(::CommonDirection, ::Mirror);
#else // @header-generator platform
    MCAPI static ::CommonDirection _mirror(::CommonDirection direction, ::Mirror mirror);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::CommonDirection _rotate(::CommonDirection, ::Rotation);
#else // @header-generator platform
    MCAPI static ::CommonDirection _rotate(::CommonDirection direction, ::Rotation rotation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool hasTransformableWallStates(::Block const&);
#else // @header-generator platform
    MCAPI static bool hasTransformableWallStates(::Block const& block);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const* transformBlock(::Block const&, ::CommonDirection);
#else // @header-generator platform
    MCAPI static ::Block const* transformBlock(::Block const& block, ::CommonDirection targetDirection);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const* transformBlock(::Block const&, ::Facing::Name);
#else // @header-generator platform
    MCAPI static ::Block const* transformBlock(::Block const& block, ::Facing::Name targetDirection);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const* transformBlock(::Block const&, ::Rotation, ::Mirror);
#else // @header-generator platform
    MCAPI static ::Block const* transformBlock(::Block const& block, ::Rotation rotation, ::Mirror mirror);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Block const* transformWallConnectionTypes(::Block const&, ::Rotation, ::Mirror);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::Block const* transformConnectionStates(::Block const& block, ::Rotation rotation, ::Mirror mirror);
#endif

    MCAPI static ::Block const*
    transformWallConnectionTypes(::Block const& block, ::Rotation rotation, ::Mirror mirror);
#endif // @header-generator platform
    // NOLINTEND
};
