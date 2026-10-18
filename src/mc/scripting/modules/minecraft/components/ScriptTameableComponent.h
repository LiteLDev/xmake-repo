#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/TameableComponent.h"
#include "mc/entity/components_json_legacy/TameableDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
class WeakEntityRef;
#else // @header-generator platform
class TameableComponent;
class TameableDefinition;
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTameableComponent
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<TameableComponent, TameableDefinition> {
public:
    // prevent constructor by default
    ScriptTameableComponent& operator=(ScriptTameableComponent const&);
    ScriptTameableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptTameableComponent();
    // NOLINTEND

#else // @header-generator platform
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::TameableComponent, ::TameableDefinition> {
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptTameableComponent(::WeakEntityRef const&, ::Scripting::WeakLifetimeScope const&, std::string const&);

    MCNAPI ::Scripting::Result_deprecated<
        std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>>
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
#endif // @header-generator platform
    getTameItems() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::vector<std::string>> getTameItems_010() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getTameItems_010() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> isTamed() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> isTamed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static char const*& ComponentId();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
