#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/camera/aimassist/ScriptAimAssistCategory.h"
#include "mc/scripting/modules/minecraft/camera/aimassist/ScriptAimAssistPreset.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptAimAssistCategorySettings; }
namespace ScriptModuleMinecraft { class ScriptAimAssistPresetSettings; }
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
    using AddPresetResultType = ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptAimAssistPreset>,
        Scripting::Error,
        Scripting::InvalidArgumentError,
        Scripting::EngineError,
        ScriptModuleMinecraft::ScriptNamespaceNameError>;

    using AddCategoryResultType = ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptAimAssistCategory>,
        Scripting::Error,
        Scripting::InvalidArgumentError,
        Scripting::EngineError,
        ScriptModuleMinecraft::ScriptNamespaceNameError>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>   mLevel;
    ::ll::UntypedStorage<8, 40>                               mCategoriesHandles;
    ::ll::UntypedStorage<8, 40>                               mPresetHandles;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAimAssistRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptAimAssistRegistry(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptAimAssistCategory>
    _createCategoryHandle(std::string const&) const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptAimAssistPreset>
    _createPresetHandle(std::string const&) const;

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptAimAssistCategory>>
           _getOrCreateCategoryHandle(std::string const&) const;

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptAimAssistPreset>>
           _getOrCreatePresetHandle(std::string const&) const;

    MCNAPI ~ScriptAimAssistRegistry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
