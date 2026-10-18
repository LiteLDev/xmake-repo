#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class IScriptBlockComponentFactory; }
namespace ScriptModuleMinecraft { class IScriptBlockCustomComponentReader; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockComponents {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string_view, std::shared_ptr<ScriptModuleMinecraft::IScriptBlockComponentFactory>>> mNativeFactories;
    ::ll::UntypedStorage<1, 16> mCustomComponentReader;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::std::string_view, ::std::shared_ptr<::ScriptModuleMinecraft::IScriptBlockComponentFactory>>>
        mNativeFactories;
    ::ll::TypedStorage<8, 16, ::WeakRef<::ScriptModuleMinecraft::IScriptBlockCustomComponentReader const>>
        mCustomComponentReader;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptBlockComponents();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptBlockComponents(::WeakRef<const ScriptModuleMinecraft::IScriptBlockCustomComponentReader>);
#else // @header-generator platform
    MCAPI ::std::unordered_map<
        ::std::string_view,
        ::std::shared_ptr<::ScriptModuleMinecraft::IScriptBlockComponentFactory>> const&
    getOrCreateBlockComponentFactories() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string_view> getSupportedComponentIds(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation> const&,
        bool
#else // @header-generator platform
    MCAPI ::std::vector<::std::string_view> getSupportedComponentIds(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> const& permutation,
        bool                                                                                         includeCustom
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::BaseScriptBlockComponent>>
    tryCreateComponent(std::string_view, ::BlockSource&, ::BlockPos, ::Scripting::WeakLifetimeScope const&, bool) const;

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::BaseScriptBlockComponent>>
    tryCreateComponentV010(std::string_view, ::BlockSource&, ::BlockPos, ::Scripting::WeakLifetimeScope const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::BaseScriptBlockComponent>>
    tryCreateComponent(
        ::std::string_view                    componentName,
        ::BlockSource&                        region,
        ::BlockPos                            position,
        ::Scripting::WeakLifetimeScope const& scope,
        bool                                  allowCustomComponent
    ) const;
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
        std::shared_ptr<ScriptModuleMinecraft::ScriptBlockComponents> const&
#else // @header-generator platform
    MCAPI static void bind(
        ::Scripting::ModuleBindingBuilder&                                       moduleBuilder,
        ::Scripting::Version const&                                              scriptingVersion,
        ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&                 componentTypeEnumBuilder,
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptBlockComponents> const& blockComponents
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakRef<const ScriptModuleMinecraft::IScriptBlockCustomComponentReader>);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
