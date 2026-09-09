#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class Dimension;
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHitBlockAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<8, 8, ::Dimension&>                              mDimension;
    ::ll::TypedStorage<8, 8, ::Block const&>                            mHitBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                         mPos;
    ::ll::TypedStorage<1, 1, uchar const>                               mFace;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHitBlockAfterEventIntermediateData& operator=(ScriptActorHitBlockAfterEventIntermediateData const&);
    ScriptActorHitBlockAfterEventIntermediateData(ScriptActorHitBlockAfterEventIntermediateData const&);
    ScriptActorHitBlockAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorHitBlockAfterEventIntermediateData(::Player&, ::BlockPos const&, ::Block const&, uchar const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&, ::BlockPos const&, ::Block const&, uchar const);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
