#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class BaseScriptBlockActorComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*> mBlockActor;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseScriptBlockActorComponent& operator=(BaseScriptBlockActorComponent const&);
    BaseScriptBlockActorComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseScriptBlockActorComponent();

    virtual bool _isValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseScriptBlockActorComponent(
        ::BlockActor*,
        ::BlockSource&,
        ::BlockPos,
        ::Scripting::WeakLifetimeScope const&,
        std::string const&
    );

    MCNAPI ::BlockActor const* _tryGetOwner() const;

    MCNAPI ::BlockActor* _tryGetOwner();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::BlockActor*, ::BlockSource&, ::BlockPos, ::Scripting::WeakLifetimeScope const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
