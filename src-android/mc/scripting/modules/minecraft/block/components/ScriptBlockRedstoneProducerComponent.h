#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { struct ScriptBlockInvalidComponentError; }
namespace Scripting { class Release; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRedstoneProducerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockRedstoneProducerComponent& operator=(ScriptBlockRedstoneProducerComponent const&);
    ScriptBlockRedstoneProducerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockRedstoneProducerComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<int, ScriptModuleMinecraft::ScriptBlockInvalidComponentError> getPower() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static std::optional<Scripting::Release> overrideEnumVersion();

    MCNAPI static std::optional<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockRedstoneProducerComponent>>
    tryCreate(::BlockSource&, ::BlockPos, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
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
