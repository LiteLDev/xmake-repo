#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/items/ScriptItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class ItemStackBase;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemStack; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerBreakBlockBeforeEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>    mPlayer;
    ::ll::UntypedStorage<8, 40>    mItem;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mPlayer;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
                                   mItem;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptPlayerBreakBlockBeforeEvent& operator=(ScriptPlayerBreakBlockBeforeEvent const&);
#endif // @header-generator platform
    ScriptPlayerBreakBlockBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPlayerBreakBlockBeforeEvent(::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent const&);
#else // @header-generator platform
    MCAPI ScriptPlayerBreakBlockBeforeEvent(::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPlayerBreakBlockBeforeEvent(
        ::Player const&,
        ::Dimension&,
        ::BlockPos const&,
        ::ItemStackBase const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI ScriptPlayerBreakBlockBeforeEvent(
        ::Player const&                       player,
        ::Dimension&                          dimension,
        ::BlockPos const&                     pos,
        ::ItemStackBase const&                item,
        ::Scripting::WeakLifetimeScope const& scope
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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::Player const&,
        ::Dimension&,
        ::BlockPos const&,
        ::ItemStackBase const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Player const&                       player,
        ::Dimension&                          dimension,
        ::BlockPos const&                     pos,
        ::ItemStackBase const&                item,
        ::Scripting::WeakLifetimeScope const& scope
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
