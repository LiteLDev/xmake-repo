#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"
#include "mc/scripting/modules/minecraft/ScriptContainerAccessSourceFilter.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorContainerAccessEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorContainerAccessEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 416, std::optional<ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
    ::ll::TypedStorage<8, 424, std::optional<ScriptModuleMinecraft::EventFilters::ScriptContainerAccessSourceFilter>> mAccessSourceFilter;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorContainerAccessEventFilter(
        ::ScriptModuleMinecraft::EventFilters::ScriptActorContainerAccessEventFilter const&
    );

    MCNAPI bool
    shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorContainerAccessEventFilterData const&) const;

    MCNAPI ~ScriptActorContainerAccessEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptActorContainerAccessEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
