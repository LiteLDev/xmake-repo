#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptBlockFilter.h"
#include "mc/scripting/modules/minecraft/ScriptContainerAccessSourceFilter.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptBlockContainerAccessEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptBlockContainerAccessEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 168, std::optional<ScriptModuleMinecraft::ScriptBlockFilter>> mBlockFilter;
    ::ll::TypedStorage<8, 424, std::optional<ScriptModuleMinecraft::EventFilters::ScriptContainerAccessSourceFilter>> mAccessSourceFilter;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlockContainerAccessEventFilter(
        ::ScriptModuleMinecraft::EventFilters::ScriptBlockContainerAccessEventFilter const&
    );

    MCNAPI bool
    shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptBlockContainerAccessEventFilterData const&) const;

    MCNAPI ~ScriptBlockContainerAccessEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptBlockContainerAccessEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
