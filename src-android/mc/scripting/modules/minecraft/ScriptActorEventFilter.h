#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorEventFilterData; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                          mSpecificActors;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>>   mActorTypes;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<ActorUniqueID>>> mProcessedUniqueIds;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorEventFilter(ScriptActorEventFilter const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptActorEventFilter();

    virtual bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isInvalidated(::ActorUniqueID const&);

    MCNAPI void process();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
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
