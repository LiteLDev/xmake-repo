#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptItemComponentFactory {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IScriptItemComponentFactory();
#else // @header-generator platform
    virtual ~IScriptItemComponentFactory() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemComponent> createComponent(::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>, ::Scripting::WeakLifetimeScope const&) const = 0;
#else // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemComponent> createComponent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Scripting::WeakLifetimeScope const&                                          scope
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Scripting::ClassBinding> bind() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::Scripting::ClassBinding> bind() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canAddOn(::ScriptModuleMinecraft::ScriptItemStack&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool canAddOn(::ScriptModuleMinecraft::ScriptItemStack& item) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
