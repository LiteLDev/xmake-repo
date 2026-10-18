#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptItemComponentFactory; }
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentReader; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponents {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string_view, std::shared_ptr<ScriptModuleMinecraft::IScriptItemComponentFactory>>> mNativeFactories;
    ::ll::UntypedStorage<1, 16> mCustomComponentReader;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::std::string_view, ::std::shared_ptr<::ScriptModuleMinecraft::IScriptItemComponentFactory>>>
        mNativeFactories;
    ::ll::TypedStorage<8, 16, ::WeakRef<::ScriptModuleMinecraft::IScriptItemCustomComponentReader const>>
        mCustomComponentReader;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptItemComponents();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptItemComponents(::WeakRef<const ScriptModuleMinecraft::IScriptItemCustomComponentReader>);
#else // @header-generator platform
    MCAPI ::std::unordered_map<
        ::std::string_view,
        ::std::shared_ptr<::ScriptModuleMinecraft::IScriptItemComponentFactory>> const&
    _getOrCreateNativeItemComponentFactories() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void bind(
        ::Scripting::ModuleBindingBuilder&,
        ::Scripting::Version const&,
        ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&
#else // @header-generator platform
    MCAPI void bind(
        ::Scripting::ModuleBindingBuilder&                       moduleBuilder,
        ::Scripting::Version const&                              scriptingVersion,
        ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakRef<const ScriptModuleMinecraft::IScriptItemCustomComponentReader>);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ScriptModuleMinecraft::IScriptItemComponentFactory> const&
    tryGetFactory(::std::string_view componentName);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
