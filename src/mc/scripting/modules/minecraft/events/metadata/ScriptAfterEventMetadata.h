#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptAfterEventList; }
namespace ScriptModuleMinecraft { struct IScriptAfterEventSignalBuilder; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptAfterEventMetadata {
public:
    // ScriptAfterEventMetadata inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using EventBuilderHandle = std::unique_ptr<ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>;
#else // @header-generator platform
    using EventBuilderHandle = ::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>>> mEventBuilders;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>>>
        mEventBuilders;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _bind(::Scripting::ModuleBindingBuilder&, ::entt::meta_any&) const;
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptAfterEventList createSignals(::Scripting::WeakLifetimeScope& scope) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void appendBuilder(std::unique_ptr<ScriptModuleMinecraft::IScriptAfterEventSignalBuilder>);
#else // @header-generator platform
    MCAPI void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptAfterEventList createSignals(::Scripting::WeakLifetimeScope&) const;
#else // @header-generator platform
    MCAPI ~ScriptAfterEventMetadata();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void generateOrderDocumentationForVersion(::Scripting::ModuleDescriptor const&, ::Json::Value&) const;
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
