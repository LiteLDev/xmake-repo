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
class Actor;
class Player;
struct PlayerInteractWithEntityBeforeEvent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemStack; }
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityBeforeEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>    mItemStack;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
                                   mItemStack;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPlayerInteractWithEntityBeforeEvent(
        ::Player&,
        ::Actor&,
        ::PlayerInteractWithEntityBeforeEvent const&,
        ::Scripting::WeakLifetimeScope&
#else // @header-generator platform
    MCAPI ScriptPlayerInteractWithEntityBeforeEvent(
        ::Player&                                    player,
        ::Actor&                                     target,
        ::PlayerInteractWithEntityBeforeEvent const& eventData,
        ::Scripting::WeakLifetimeScope&              scope
#endif // @header-generator platform
    );
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
    MCNAPI void*
    $ctor(::Player&, ::Actor&, ::PlayerInteractWithEntityBeforeEvent const&, ::Scripting::WeakLifetimeScope&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Player&                                    player,
        ::Actor&                                     target,
        ::PlayerInteractWithEntityBeforeEvent const& eventData,
        ::Scripting::WeakLifetimeScope&              scope
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
