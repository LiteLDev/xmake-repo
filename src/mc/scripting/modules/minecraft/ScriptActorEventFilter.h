#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorUniqueID;
namespace ScriptModuleMinecraft { class ScriptActor; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorEventFilterData; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorEventFilter {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptActorEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData;

    using Invalidator = ::ActorUniqueID;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                          mSpecificActors;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>>   mActorTypes;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<ActorUniqueID>>> mProcessedUniqueIds;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>>
                                                                               mSpecificActors;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>   mActorTypes;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::ActorUniqueID>>> mProcessedUniqueIds;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ScriptActorEventFilter(ScriptActorEventFilter const&);
#else // @header-generator platform
    ScriptActorEventFilter();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptActorEventFilter();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData const&);
#else // @header-generator platform
    virtual bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData const& filterData);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isInvalidated(::ActorUniqueID const&);
#else // @header-generator platform
    MCAPI ScriptActorEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void process();
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter const&);

    MCAPI void process();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bindV010();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilter const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData const&);
#else // @header-generator platform
    MCAPI bool $shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData const& filterData);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
