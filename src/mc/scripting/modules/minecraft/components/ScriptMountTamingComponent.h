#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/MountTameableDefinition.h"
#include "mc/entity/components_json_legacy/MountTamingComponent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
class WeakEntityRef;
#else // @header-generator platform
class MountTameableDefinition;
class MountTamingComponent;
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMountTamingComponent
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<MountTamingComponent, MountTameableDefinition> {
public:
    // prevent constructor by default
    ScriptMountTamingComponent& operator=(ScriptMountTamingComponent const&);
    ScriptMountTamingComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptMountTamingComponent();
    // NOLINTEND

#else // @header-generator platform
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::MountTamingComponent, ::MountTameableDefinition> {
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    ScriptMountTamingComponent(::WeakEntityRef const&, ::Scripting::WeakLifetimeScope const&, std::string const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> isTamed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> isTamed() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> isTamedToPlayer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> isTamedToPlayer() const;

    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>>
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
#endif // @header-generator platform
    tamedToPlayer() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::optional<std::string>> tamedToPlayerId() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::string>> tamedToPlayerId() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakEntityRef const&, ::Scripting::WeakLifetimeScope const&, std::string const&);
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
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
