#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace ScriptModuleMinecraft { class IScriptActorComponentFactory; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class ModuleBindingBuilder; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorComponents {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string_view, std::shared_ptr<ScriptModuleMinecraft::IScriptActorComponentFactory>>> mNativeFactories;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::std::string_view, ::std::shared_ptr<::ScriptModuleMinecraft::IScriptActorComponentFactory>>>
        mNativeFactories;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptActorComponents();
#else // @header-generator platform
    MCAPI ::std::unordered_map<
        ::std::string_view,
        ::std::shared_ptr<::ScriptModuleMinecraft::IScriptActorComponentFactory>> const&
    _getOrCreateActorComponentFactories() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string_view> getSupportedComponentIds(::WeakRef<EntityContext>) const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::string_view> getSupportedComponentIds(::WeakRef<::EntityContext> entityRef) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ScriptModuleMinecraft::IScriptActorComponentFactory> const&
           tryGetFactory(std::string const&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ScriptModuleMinecraft::IScriptActorComponentFactory> const&
    tryGetFactory(::std::string const& componentName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(
        ::Scripting::ModuleBindingBuilder&,
        ::Scripting::Version const&,
        ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&,
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorComponents> const&
#else // @header-generator platform
    MCAPI static void bind(
        ::Scripting::ModuleBindingBuilder&                                       moduleBuilder,
        ::Scripting::Version const&                                              scriptingVersion,
        ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&                 actorComponentTypesEnum,
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorComponents> const& actorComponents
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
