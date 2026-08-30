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
    // clang-format off
    virtual ~IScriptAfterEventSignalBuilder() = default;

    virtual ::ScriptModuleMinecraft::ScriptAfterEventSignalHandle createSignal(::Scripting::WeakLifetimeScope&) const = 0;

    virtual std::vector<Scripting::Release> getEventDataReleases() const = 0;

    virtual std::vector<Scripting::Release> getSignalReleases() const = 0;

    virtual std::vector<Scripting::Release> getPropertyReleases() const = 0;

    virtual std::string getEventDataName() const = 0;

    virtual void bind(::Scripting::ModuleBindingBuilder&, ::entt::meta_any&) const = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
