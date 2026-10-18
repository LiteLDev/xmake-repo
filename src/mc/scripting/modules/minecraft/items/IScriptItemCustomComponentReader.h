#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptItemCustomComponentReader {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IScriptItemCustomComponentReader();
#else // @header-generator platform
    virtual ~IScriptItemCustomComponentReader() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string_view> getValidComponentsForItem(::Scripting::WeakTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>) const = 0;
#else // @header-generator platform
    virtual ::std::vector<::std::string_view> getValidComponentsForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const& tryGetCustomComponentParametersForItem(::Scripting::WeakTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>, std::string_view, ::Scripting::WeakLifetimeScope const&) const = 0;
    // clang-format on
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
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomComponentParameters> const&
    tryGetCustomComponentParametersForItem(
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> itemHandle,
        ::std::string_view                                                           componentName,
        ::Scripting::WeakLifetimeScope const&                                        scope
    ) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
