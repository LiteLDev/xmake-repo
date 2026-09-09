#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"
#include "mc/scripting/modules/minecraft/ScriptBlockFilter.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
namespace ScriptModuleMinecraft::EventFilters { struct ScriptPlayerBreakingBlockEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptPlayerBreakingBlockEventFilter {
public:
    // ScriptPlayerBreakingBlockEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptPlayerBreakingBlockEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 416, std::optional<ScriptModuleMinecraft::ScriptActorFilter>> mPlayerFilter;
    ::ll::TypedStorage<8, 168, std::optional<ScriptModuleMinecraft::ScriptBlockFilter>> mBlockFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerBreakingBlockEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool
    shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptPlayerBreakingBlockEventFilterData const&) const;

    MCNAPI ~ScriptPlayerBreakingBlockEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
