#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/components/ScriptComponent.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponent : public ::ScriptModuleMinecraft::ScriptComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mItemStackHandle;
    ::ll::UntypedStorage<8, 32> mItemType;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemComponent& operator=(ScriptItemComponent const&);
    ScriptItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemComponent();

    virtual bool _isValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemComponent(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>,
        ::Scripting::WeakLifetimeScope const&,
        std::string
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
    MCNAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>,
        ::Scripting::WeakLifetimeScope const&,
        std::string
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
