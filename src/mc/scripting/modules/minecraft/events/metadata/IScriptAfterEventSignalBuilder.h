#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptAfterEventSignalHandle; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class Release; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct IScriptAfterEventSignalBuilder {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IScriptAfterEventSignalBuilder() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ScriptModuleMinecraft::ScriptAfterEventSignalHandle createSignal(::Scripting::WeakLifetimeScope&) const = 0;
#else // @header-generator platform
    virtual ::ScriptModuleMinecraft::ScriptAfterEventSignalHandle
    createSignal(::Scripting::WeakLifetimeScope& scope) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Scripting::Release> getEventDataReleases() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::Scripting::Release> getEventDataReleases() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Scripting::Release> getSignalReleases() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::Scripting::Release> getSignalReleases() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Scripting::Release> getPropertyReleases() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::Scripting::Release> getPropertyReleases() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getEventDataName() const = 0;
#else // @header-generator platform
    virtual ::std::string getEventDataName() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void bind(::Scripting::ModuleBindingBuilder&, ::entt::meta_any&) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual void
    bind(::Scripting::ModuleBindingBuilder& modulebindingBuilder, ::entt::meta_any& classBindingAny) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
