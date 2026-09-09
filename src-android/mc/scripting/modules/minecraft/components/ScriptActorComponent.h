#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/components/ScriptComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Player;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorComponent : public ::ScriptModuleMinecraft::ScriptComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntityRef;
    ::ll::UntypedStorage<8, 32>                mHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorComponent& operator=(ScriptActorComponent const&);
    ScriptActorComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptActorComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Error _functionError(std::string_view) const;

    MCNAPI ::Scripting::Error _getPropertyError(std::string_view) const;

    MCNAPI ::Scripting::Error _setPropertyError(std::string_view) const;

    MCNAPI ::Actor* _tryGetOwner() const;

    MCNAPI ::Mob* _tryGetOwnerAsMob() const;

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
        ScriptModuleMinecraft::ScriptInvalidActorError>
    getEntityV2() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
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
