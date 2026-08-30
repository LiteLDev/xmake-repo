#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemReleaseUseEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemReleaseUseIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData const> mPlayer;
    ::ll::TypedStorage<8, 128, ::ItemInstance const>                          mItemInstance;
    ::ll::TypedStorage<4, 4, int>                                             mUseDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemReleaseUseIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemReleaseUseIntermediateData(::Player const&, ::ItemReleaseUseEvent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player const&, ::ItemReleaseUseEvent const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
