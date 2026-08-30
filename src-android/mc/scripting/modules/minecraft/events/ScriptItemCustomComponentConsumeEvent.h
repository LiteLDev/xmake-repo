#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentIntermediateStorage.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ComponentItem;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentConsumeEvent : public ::ScriptModuleMinecraft::ScriptItemCustomComponentAfterEvent {
public:
    // ScriptItemCustomComponentConsumeEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptItemCustomComponentConsumeEvent inner types define
    struct IntermediateStorage : public ::ScriptModuleMinecraft::ScriptItemCustomComponentIntermediateStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack const>    mItemStack;
        ::ll::TypedStorage<1, 24, ::WeakEntityRef const> mEntity;
        // NOLINTEND

    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~IntermediateStorage();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using EventConnectorsType =
        ::ScriptModuleMinecraft::ScriptCustomComponentPubSubConnectors<void(const ItemStack&, ItemStack&, Actor&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mScriptItem;
    ::ll::UntypedStorage<8, 32> mEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentConsumeEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemCustomComponentConsumeEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
