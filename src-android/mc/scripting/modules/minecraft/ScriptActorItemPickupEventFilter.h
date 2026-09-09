#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"
#include "mc/scripting/modules/minecraft/ScriptItemFilter.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorItemPickupEventFilterData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorItemPickupEventFilter {
public:
    // ScriptActorItemPickupEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 416, std::optional<ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
    ::ll::TypedStorage<8, 80, std::optional<ScriptModuleMinecraft::ScriptItemFilter>>   mItemFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorItemPickupEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isActorAllowed(::Actor const&) const;

    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData const&);

    MCNAPI ~ScriptActorItemPickupEventFilter();
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
