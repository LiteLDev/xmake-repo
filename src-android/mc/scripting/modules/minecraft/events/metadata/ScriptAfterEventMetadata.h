#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptAfterEventList; }
namespace ScriptModuleMinecraft { struct IScriptAfterEventSignalBuilder; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptAfterEventMetadata {
public:
    // ScriptAfterEventMetadata inner types define
    using EventBuilderHandle = std::unique_ptr<ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>>> mEventBuilders;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _bind(::Scripting::ModuleBindingBuilder&, ::entt::meta_any&) const;

    MCNAPI void appendBuilder(std::unique_ptr<ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>);

    MCNAPI ::ScriptModuleMinecraft::ScriptAfterEventList createSignals(::Scripting::WeakLifetimeScope&) const;

    MCNAPI void generateOrderDocumentationForVersion(::Scripting::ModuleDescriptor const&, ::Json::Value&) const;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
