#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
#if defined(LL_PLAT_A) // @header-generator platform
class WeakEntityRef;
#else // @header-generator platform
#endif // @header-generator platform
struct MoveControlDescription;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    MovementScriptActorComponent();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MovementScriptActorComponent();
#else // @header-generator platform
    virtual ~MovementScriptActorComponent() /*override*/ = default;
#endif // @header-generator platform

    virtual ::Scripting::Result_deprecated<float> getMaxTurn() const;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<float> $getMaxTurn() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<float> $getMaxTurn() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
