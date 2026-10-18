#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/camera/aimassist/ScriptAimAssistCategory.h"
#include "mc/scripting/modules/minecraft/camera/aimassist/ScriptAimAssistPreset.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ServerLevel;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptAimAssistCategorySettings; }
namespace ScriptModuleMinecraft { class ScriptAimAssistPresetSettings; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptAimAssistCategory; }
namespace ScriptModuleMinecraft { class ScriptAimAssistPreset; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistRegistry {
public:
    // ScriptAimAssistRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using AddPresetResultType = ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptAimAssistPreset>,
        Scripting::Error,
        Scripting::InvalidArgumentError,
        Scripting::EngineError,
        ScriptModuleMinecraft::ScriptNamespaceNameError>;

#else // @header-generator platform
#endif // @header-generator platform
    using AddCategoryResultType = ::Scripting::Result<
#if defined(LL_PLAT_A) // @header-generator platform
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptAimAssistCategory>,
        Scripting::Error,
        Scripting::InvalidArgumentError,
        Scripting::EngineError,
        ScriptModuleMinecraft::ScriptNamespaceNameError>;
#else // @header-generator platform
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistCategory>,
        ::Scripting::Error,
        ::Scripting::InvalidArgumentError,
        ::Scripting::EngineError,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError>;

    using AddPresetResultType = ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistPreset>,
        ::Scripting::Error,
        ::Scripting::InvalidArgumentError,
        ::Scripting::EngineError,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>   mLevel;
    ::ll::UntypedStorage<8, 40>                               mCategoriesHandles;
    ::ll::UntypedStorage<8, 40>                               mPresetHandles;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistCategory>>>
        mCategoriesHandles;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistPreset>>>
        mPresetHandles;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptAimAssistRegistry(ScriptAimAssistRegistry const&);
#endif // @header-generator platform
    ScriptAimAssistRegistry();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptAimAssistRegistry(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistCategory>
    _createCategoryHandle(::std::string const& categoryId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptAimAssistCategory>
    _createCategoryHandle(std::string const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistPreset>
    _createPresetHandle(::std::string const& presetId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptAimAssistPreset>
    _createPresetHandle(std::string const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistCategory>>
    _getOrCreateCategoryHandle(::std::string const& categoryId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptAimAssistCategory>>
           _getOrCreateCategoryHandle(std::string const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistPreset>>
    _getOrCreatePresetHandle(::std::string const& presetId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptAimAssistPreset>>
           _getOrCreatePresetHandle(std::string const&) const;
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptAimAssistRegistry&
    operator=(::ScriptModuleMinecraft::ScriptAimAssistRegistry const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptAimAssistRegistry();
#else // @header-generator platform
    MCAPI ~ScriptAimAssistRegistry();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
