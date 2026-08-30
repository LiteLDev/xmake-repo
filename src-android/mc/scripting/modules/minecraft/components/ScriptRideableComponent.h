#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/entity/components_json_legacy/RideableComponent.h"
#include "mc/entity/components_json_legacy/RideableDefinition.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
struct SeatDescription;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptRideableComponent
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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptRideableComponent(::WeakEntityRef const&, ::Scripting::WeakLifetimeScope const&, std::string const&);

    MCNAPI ::Scripting::Result_deprecated<std::vector<std::string>> getFamilyTypes() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
