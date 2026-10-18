#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/components/GenericScriptActorComponentFactory.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/components/ScriptRidingComponent.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptRidingComponent; }
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRidingComponentFactory
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ScriptModuleMinecraft::GenericScriptActorComponentFactory<ScriptModuleMinecraft::ScriptRidingComponent> {
#else // @header-generator platform
: public ::ScriptModuleMinecraft::GenericScriptActorComponentFactory<::ScriptModuleMinecraft::ScriptRidingComponent> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptRidingComponentFactory();
#else // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorComponent> createComponent(
        ::WeakEntityRef                       entity,
        ::Scripting::WeakLifetimeScope const& scope,
        ::std::string const&                  id
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorComponent> createComponent(::WeakEntityRef, ::Scripting::WeakLifetimeScope const&, std::string const&);

    virtual bool hasComponent(::WeakEntityRef) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool hasComponent(::WeakEntityRef entity) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorComponent>
    $createComponent(::WeakEntityRef, ::Scripting::WeakLifetimeScope const&, std::string const&);
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorComponent>
    $createComponent(::WeakEntityRef entity, ::Scripting::WeakLifetimeScope const& scope, ::std::string const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasComponent(::WeakEntityRef) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $hasComponent(::WeakEntityRef entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
