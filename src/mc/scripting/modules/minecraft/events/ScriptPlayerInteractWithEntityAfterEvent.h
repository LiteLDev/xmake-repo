#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractWithEntityEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/items/ScriptItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemStack; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptPlayerInteractWithEntityIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityAfterEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityEvent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptPlayerInteractWithEntityAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40> mBeforeItemStack;
    ::ll::UntypedStorage<8, 40> mAfterItemStack;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mBeforeItemStack;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mAfterItemStack;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
#else // @header-generator platform
    MCAPI
#endif // @header-generator platform
    ScriptPlayerInteractWithEntityAfterEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPlayerInteractWithEntityAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData> const&,
        ::Scripting::WeakLifetimeScope&
#else // @header-generator platform
    MCAPI ScriptPlayerInteractWithEntityAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope&                                                                   scope
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData> const&,
        ::Scripting::WeakLifetimeScope&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope&                                                                   scope
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
