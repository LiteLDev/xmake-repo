#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"
#include "mc/scripting/modules/minecraft/ScriptItemFilter.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorItemDropEventFilterData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorItemDropEventFilter {
public:
    // ScriptActorItemDropEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptActorItemDropEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 416, std::optional<ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
    ::ll::TypedStorage<8, 80, std::optional<ScriptModuleMinecraft::ScriptItemFilter>>   mItemFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorItemDropEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorItemDropEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptActorItemDropEventFilter&&);

    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorItemDropEventFilterData const&);

    MCNAPI ~ScriptActorItemDropEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptActorItemDropEventFilter&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
