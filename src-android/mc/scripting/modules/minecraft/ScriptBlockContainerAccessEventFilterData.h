#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptBlockContainerAccessEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*>                                         mBlock;
    ::ll::TypedStorage<8, 96, std::optional<ScriptModuleMinecraft::ScriptActorData>> mAccessSourceActorData;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockContainerAccessEventFilterData& operator=(ScriptBlockContainerAccessEventFilterData const&);
    ScriptBlockContainerAccessEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptBlockContainerAccessEventFilterData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
