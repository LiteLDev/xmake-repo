#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"
#include "mc/scripting/modules/minecraft/items/ScriptItemStack.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class ItemStackBase;
class Player;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerBreakBlockBeforeEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>    mPlayer;
    ::ll::UntypedStorage<8, 40>    mItem;
    ::ll::TypedStorage<1, 1, bool> mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerBreakBlockBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerBreakBlockBeforeEvent(::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent const&);

    MCNAPI ScriptPlayerBreakBlockBeforeEvent(
        ::Player const&,
        ::Dimension&,
        ::BlockPos const&,
        ::ItemStackBase const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent const&);

    MCNAPI void* $ctor(
        ::Player const&,
        ::Dimension&,
        ::BlockPos const&,
        ::ItemStackBase const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
