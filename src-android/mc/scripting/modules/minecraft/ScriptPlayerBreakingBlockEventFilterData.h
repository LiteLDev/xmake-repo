#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptPlayerBreakingBlockEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayerData;
    ::ll::TypedStorage<8, 8, ::Block const*>                            mBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerBreakingBlockEventFilterData& operator=(ScriptPlayerBreakingBlockEventFilterData const&);
    ScriptPlayerBreakingBlockEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptPlayerBreakingBlockEventFilterData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
