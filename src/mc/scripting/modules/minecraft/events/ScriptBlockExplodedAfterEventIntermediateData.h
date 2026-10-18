#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class Block;
class Dimension;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockExplodedAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                                           mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                            mBlockPos;
    ::ll::TypedStorage<8, 8, ::Block const&>                                         mDestroyedBlock;
    ::ll::TypedStorage<8, 96, std::optional<ScriptModuleMinecraft::ScriptActorData>> mSource;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                 mBlockPos;
    ::ll::TypedStorage<8, 8, ::Block const&>                                              mDestroyedBlock;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mSource;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockExplodedAfterEventIntermediateData& operator=(ScriptBlockExplodedAfterEventIntermediateData const&);
    ScriptBlockExplodedAfterEventIntermediateData(ScriptBlockExplodedAfterEventIntermediateData const&);
    ScriptBlockExplodedAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
