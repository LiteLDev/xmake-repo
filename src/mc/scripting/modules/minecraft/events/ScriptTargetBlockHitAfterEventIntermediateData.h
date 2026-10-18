#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
struct TargetBlockHitEvent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTargetBlockHitAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                                           mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                                      mPos;
    ::ll::TypedStorage<4, 4, int>                                                    mPreviousRedstonePower;
    ::ll::TypedStorage<4, 4, int>                                                    mRedstonePower;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                mHitVector;
    ::ll::TypedStorage<8, 96, std::optional<ScriptModuleMinecraft::ScriptActorData>> mSource;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                                           mPos;
    ::ll::TypedStorage<4, 4, int>                                                         mPreviousRedstonePower;
    ::ll::TypedStorage<4, 4, int>                                                         mRedstonePower;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                     mHitVector;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mSource;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTargetBlockHitAfterEventIntermediateData& operator=(ScriptTargetBlockHitAfterEventIntermediateData const&);
    ScriptTargetBlockHitAfterEventIntermediateData(ScriptTargetBlockHitAfterEventIntermediateData const&);
    ScriptTargetBlockHitAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
