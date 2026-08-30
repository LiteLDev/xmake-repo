#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/scripting/modules/minecraft/ScriptActorEventFilter.h"
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorEventFilterData; }
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorHurtAfterEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorHurtAfterEventFilter : public ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 416, std::optional<ScriptModuleMinecraft::ScriptActorFilter>>          mActorFilter;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SharedTypes::Legacy::ActorDamageCause>>> mAllowedDamageCauses;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptActorHurtAfterEventFilter();

    virtual bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptActorHurtAfterEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptActorHurtAfterEventFilter&&);

    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorHurtAfterEventFilterData const&);
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

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
