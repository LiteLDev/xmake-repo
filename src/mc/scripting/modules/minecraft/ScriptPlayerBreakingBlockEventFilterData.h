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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorData> mPlayerData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayerData;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Block const*>                            mBlock;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
