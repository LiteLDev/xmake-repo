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
struct NavigationDescription;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class NavigationScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::NavigationDescription const* (*)(::ActorDefinitionDescriptor const&)> mDescriptionGetter;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    NavigationScriptActorComponent();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NavigationScriptActorComponent();
#else // @header-generator platform
    virtual ~NavigationScriptActorComponent() /*override*/ = default;
#endif // @header-generator platform

    virtual ::Scripting::Result_deprecated<bool> getIsAmphibious() const;

    virtual ::Scripting::Result_deprecated<bool> getAvoidSun() const;

    virtual ::Scripting::Result_deprecated<bool> getCanPassDoors() const;

    virtual ::Scripting::Result_deprecated<bool> getCanOpenDoors() const;

    virtual ::Scripting::Result_deprecated<bool> getCanOpenIronDoors() const;

    virtual ::Scripting::Result_deprecated<bool> getCanBreakDoors() const;

    virtual ::Scripting::Result_deprecated<bool> getAvoidWater() const;

    virtual ::Scripting::Result_deprecated<bool> getAvoidDamageBlocks() const;

    virtual ::Scripting::Result_deprecated<bool> getCanFloat() const;

    virtual ::Scripting::Result_deprecated<bool> getCanSink() const;

    virtual ::Scripting::Result_deprecated<bool> getCanPathOverLava() const;

    virtual ::Scripting::Result_deprecated<bool> getCanWalkInLava() const;

    virtual ::Scripting::Result_deprecated<bool> getAvoidPortals() const;

    virtual ::Scripting::Result_deprecated<bool> getCanWalk() const;

    virtual ::Scripting::Result_deprecated<bool> getCanSwim() const;

    virtual ::Scripting::Result_deprecated<bool> getCanBreach() const;

    virtual ::Scripting::Result_deprecated<bool> getCanJump() const;

    virtual ::Scripting::Result_deprecated<bool> getCanPathFromAir() const;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI NavigationScriptActorComponent(
        ::WeakEntityRef const&,
        ::Scripting::WeakLifetimeScope const&,
        std::string const&,
        ::NavigationDescription const* (*)(::ActorDefinitionDescriptor const&)
    );
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::WeakEntityRef const&,
        ::Scripting::WeakLifetimeScope const&,
        std::string const&,
        ::NavigationDescription const* (*)(::ActorDefinitionDescriptor const&)
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
    MCNAPI ::Scripting::Result_deprecated<bool> $getIsAmphibious() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getIsAmphibious() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getAvoidSun() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getAvoidSun() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getCanPassDoors() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getCanPassDoors() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getCanOpenDoors() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getCanOpenDoors() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getCanOpenIronDoors() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getCanOpenIronDoors() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getCanBreakDoors() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getCanBreakDoors() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getAvoidWater() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getAvoidWater() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getAvoidDamageBlocks() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getAvoidDamageBlocks() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getCanFloat() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getCanFloat() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getCanSink() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getCanSink() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getCanPathOverLava() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getCanPathOverLava() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getCanWalkInLava() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getCanWalkInLava() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getAvoidPortals() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getAvoidPortals() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getCanWalk() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getCanWalk() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getCanSwim() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getCanSwim() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getCanBreach() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getCanBreach() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getCanJump() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getCanJump() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> $getCanPathFromAir() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> $getCanPathFromAir() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
