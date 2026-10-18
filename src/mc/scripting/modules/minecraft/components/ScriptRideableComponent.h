#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/RideableComponent.h"
#include "mc/entity/components_json_legacy/RideableDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class WeakEntityRef;
struct SeatDescription;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
class RideableComponent;
class RideableDefinition;
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRideableComponent
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<RideableComponent, RideableDefinition> {
public:
    // prevent constructor by default
    ScriptRideableComponent& operator=(ScriptRideableComponent const&);
    ScriptRideableComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptRideableComponent();
    // NOLINTEND

#else // @header-generator platform
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::RideableComponent, ::RideableDefinition> {
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptRideableComponent(::WeakEntityRef const&, ::Scripting::WeakLifetimeScope const&, std::string const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> getCrouchingSkipInteract() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<std::vector<std::string>> getFamilyTypes() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getFamilyTypes() const;

    MCAPI ::Scripting::Result_deprecated<bool> getPassengerCanInteract() const;

    MCAPI ::Scripting::Result_deprecated<float> getPassengerMaxWidth() const;
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
