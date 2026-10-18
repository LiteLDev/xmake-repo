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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntityRef;
    ::ll::UntypedStorage<8, 32>                mHandle;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                                                            mEntityRef;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mHandle;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorComponent& operator=(ScriptActorComponent const&);
    ScriptActorComponent();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptActorComponent();
#else // @header-generator platform
    virtual ~ScriptActorComponent() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Error _functionError(std::string_view) const;
#else // @header-generator platform
    MCAPI ScriptActorComponent(::ScriptModuleMinecraft::ScriptActorComponent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Error _getPropertyError(std::string_view) const;
#else // @header-generator platform
    MCAPI ScriptActorComponent(
        ::WeakEntityRef const&                entity,
        ::Scripting::WeakLifetimeScope const& context,
        ::std::string const&                  id
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Error _setPropertyError(std::string_view) const;
#else // @header-generator platform
    MCAPI ::Scripting::Error _functionError(::std::string_view functionName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* _tryGetOwner() const;
#else // @header-generator platform
    MCAPI ::Scripting::Error _getPropertyError(::std::string_view propertyName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Mob* _tryGetOwnerAsMob() const;
#else // @header-generator platform
    MCAPI ::Scripting::Error _setPropertyError(::std::string_view propertyName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
        ScriptModuleMinecraft::ScriptInvalidActorError>
#else // @header-generator platform
    MCAPI ::Actor* _tryGetOwner() const;

    MCAPI ::Mob* _tryGetOwnerAsMob() const;

    MCAPI ::Player* _tryGetOwnerAsPlayer() const;

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
#endif // @header-generator platform
    getEntityV2() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bindV010();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorComponent const&);

    MCAPI void*
    $ctor(::WeakEntityRef const& entity, ::Scripting::WeakLifetimeScope const& context, ::std::string const& id);
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
