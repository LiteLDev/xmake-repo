#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorHurtBeforeEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorHurtBeforeEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 416, std::optional<ScriptModuleMinecraft::ScriptActorFilter>>          mActorFilter;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SharedTypes::Legacy::ActorDamageCause>>> mAllowedDamageCauses;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptActorHurtBeforeEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptActorHurtBeforeEventFilter&&);

    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorHurtBeforeEventFilterData const&) const;

    MCNAPI ~ScriptActorHurtBeforeEventFilter();
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
