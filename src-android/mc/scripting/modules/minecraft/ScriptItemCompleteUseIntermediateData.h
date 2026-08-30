#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemCompleteUseEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCompleteUseIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData const> mPlayer;
    ::ll::TypedStorage<8, 128, ::ItemInstance const>                          mItemInstance;
    ::ll::TypedStorage<4, 4, int>                                             mUseDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCompleteUseIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemCompleteUseIntermediateData(::Player const&, ::ItemCompleteUseEvent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player const&, ::ItemCompleteUseEvent const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
