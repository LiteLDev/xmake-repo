#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorSneakingChangedEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorSneakingChangedEventFilter {
public:
    // ScriptActorSneakingChangedEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptActorSneakingChangedEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 416, std::optional<ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorSneakingChangedEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isActorAllowed(::Actor const&) const;

    MCNAPI bool
    shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorSneakingChangedEventFilterData const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
