#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class WeakEntityRef;
struct MoveControlDescription;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class MovementScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MoveControlDescription const* (*)(::ActorDefinitionDescriptor const&)>
        mDescriptionGetter;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementScriptActorComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MovementScriptActorComponent();

    virtual ::Scripting::Result_deprecated<float> getMaxTurn() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MovementScriptActorComponent(
        ::WeakEntityRef const&,
        ::Scripting::WeakLifetimeScope const&,
        std::string const&,
        ::MoveControlDescription const* (*)(::ActorDefinitionDescriptor const&)
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::WeakEntityRef const&,
        ::Scripting::WeakLifetimeScope const&,
        std::string const&,
        ::MoveControlDescription const* (*)(::ActorDefinitionDescriptor const&)
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
    MCNAPI ::Scripting::Result_deprecated<float> $getMaxTurn() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
