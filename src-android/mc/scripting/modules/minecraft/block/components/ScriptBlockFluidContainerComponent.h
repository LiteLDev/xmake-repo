#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/ScriptFluidType.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockActorComponent.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class BlockSource;
class CauldronBlock;
class CauldronBlockActor;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockFluidContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockActorComponent {
public:
    // prevent constructor by default
    ScriptBlockFluidContainerComponent& operator=(ScriptBlockFluidContainerComponent const&);
    ScriptBlockFluidContainerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockFluidContainerComponent();

    virtual bool _isValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<ScriptModuleMinecraft::ScriptRGBA> getCustomColor() const;

    MCNAPI ::Scripting::Result_deprecated<int> getFillLevel() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::ScriptFluidType
    _getActualCauldronFluidType(::BlockActor&, ::BlockSource&, ::BlockPos);

    MCNAPI static std::optional<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockFluidContainerComponent>>
    tryCreate(::BlockSource&, ::BlockPos, ::Scripting::WeakLifetimeScope const&, std::string const&);
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
