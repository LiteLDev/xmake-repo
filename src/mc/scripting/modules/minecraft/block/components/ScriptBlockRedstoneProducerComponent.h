#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptBlockInvalidComponentError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class Release; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRedstoneProducerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptBlockRedstoneProducerComponent& operator=(ScriptBlockRedstoneProducerComponent const&);
    ScriptBlockRedstoneProducerComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockRedstoneProducerComponent();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptBlockInvalidComponentError> getPower() const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
