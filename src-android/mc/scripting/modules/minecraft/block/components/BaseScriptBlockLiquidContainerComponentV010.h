#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/ScriptFluidType.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"
#include "mc/world/level/block/CauldronLiquidType.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
class CauldronBlock;
class CauldronBlockActor;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class BaseScriptBlockLiquidContainerComponentV010 : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CauldronLiquidType>                     mLiquidType;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFluidType> mFluidType;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseScriptBlockLiquidContainerComponentV010& operator=(BaseScriptBlockLiquidContainerComponentV010 const&);
    BaseScriptBlockLiquidContainerComponentV010();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseScriptBlockLiquidContainerComponentV010();

    virtual bool _isValid() const;

    virtual ::Scripting::Result_deprecated<void> setFillLevel(int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseScriptBlockLiquidContainerComponentV010(
        ::BlockActor&,
        ::BlockSource&,
        ::BlockPos,
        ::Scripting::WeakLifetimeScope const&,
        ::CauldronLiquidType,
        std::string const&,
        ::ScriptModuleMinecraft::ScriptFluidType
    );

    MCNAPI bool _isValidLiquid() const;

    MCNAPI ::CauldronBlockActor* _tryGetCauldronBlockActor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::ScriptFluidType
    _getActualCauldronLiquidType(::BlockActor&, ::BlockSource&, ::BlockPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::BlockActor&,
        ::BlockSource&,
        ::BlockPos,
        ::Scripting::WeakLifetimeScope const&,
        ::CauldronLiquidType,
        std::string const&,
        ::ScriptModuleMinecraft::ScriptFluidType
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
    MCNAPI bool $_isValid() const;

    MCNAPI ::Scripting::Result_deprecated<void> $setFillLevel(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
