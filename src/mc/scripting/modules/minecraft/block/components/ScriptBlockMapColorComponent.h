#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/block/ScriptTintMethod.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptRGBA; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class Release; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockMapColorComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptBlockMapColorComponent& operator=(ScriptBlockMapColorComponent const&);
    ScriptBlockMapColorComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBlockMapColorComponent();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<ScriptModuleMinecraft::ScriptRGBA> color() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptRGBA> color() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<ScriptModuleMinecraft::ScriptTintMethod> tintMethod() const;
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
    MCAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptTintMethod> tintMethod() const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
