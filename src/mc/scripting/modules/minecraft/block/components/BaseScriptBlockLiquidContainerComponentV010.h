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
#if defined(LL_PLAT_A) // @header-generator platform
class CauldronBlock;
class CauldronBlockActor;
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BaseScriptBlockLiquidContainerComponentV010();
#else // @header-generator platform
    virtual ::Scripting::Result_deprecated<void> setFillLevel(int level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _isValid() const;

    virtual ::Scripting::Result_deprecated<void> setFillLevel(int);
#else // @header-generator platform
    virtual bool _isValid() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BaseScriptBlockLiquidContainerComponentV010(
        ::BlockActor&,
        ::BlockSource&,
        ::BlockPos,
        ::Scripting::WeakLifetimeScope const&,
        ::CauldronLiquidType,
        std::string const&,
        ::ScriptModuleMinecraft::ScriptFluidType
#else // @header-generator platform
    MCAPI BaseScriptBlockLiquidContainerComponentV010(
        ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponentV010 const&
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI bool _isValidLiquid() const;

    MCNAPI ::CauldronBlockActor* _tryGetCauldronBlockActor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleMinecraft::ScriptFluidType
    _getActualCauldronLiquidType(::BlockActor&, ::BlockSource&, ::BlockPos);
#else // @header-generator platform
    MCAPI static ::ScriptModuleMinecraft::ScriptFluidType
    _getActualCauldronLiquidType(::BlockActor& blockActor, ::BlockSource& region, ::BlockPos position);

    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponentV010 const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_isValid() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> $setFillLevel(int level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> $setFillLevel(int);
#else // @header-generator platform
    MCAPI bool $_isValid() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
