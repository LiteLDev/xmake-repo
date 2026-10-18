#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/structure/ScriptStructureTemplate.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BoundingBox;
#else // @header-generator platform
#endif // @header-generator platform
class ServerLevel;
class StructureTemplate;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace ScriptModuleMinecraft { struct ScriptJigsawPlaceOptions; }
namespace ScriptModuleMinecraft { struct ScriptJigsawStructurePlaceOptions; }
namespace ScriptModuleMinecraft { struct ScriptPlaceJigsawError; }
namespace ScriptModuleMinecraft { struct ScriptStructureCreateOptions; }
namespace ScriptModuleMinecraft { struct ScriptStructurePlaceOptions; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptStructureTemplate; }
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptStructureManager : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptStructureManager> {
#else // @header-generator platform
class ScriptStructureManager : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptStructureManager> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>          mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>            mLevel;
    ::ll::UntypedStorage<8, 40>                                        mStructures;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mPackStructureIds;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>>>
                                                                             mStructures;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mPackStructureIds;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptStructureManager(ScriptStructureManager const&);
#endif // @header-generator platform
    ScriptStructureManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptStructureManager(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);
#else // @header-generator platform
    MCAPI ::std::string_view _getPlaceErrorMessage(::std::string_view const key) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string_view _getPlaceErrorMessage(std::string_view const) const;

    MCNAPI ::StructureTemplate const* _getStructure(
        std::variant<
            std::string,
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptStructureTemplate>> const&
#else // @header-generator platform
    MCAPI ::StructureTemplate const* _getStructure(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>> const&
            scriptStructureOrName
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptStructureTemplate>
    getOrCreateScriptStructure(::StructureTemplate&);
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureTemplate>
    getOrCreateScriptStructure(::StructureTemplate& structureTemplate);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::InvalidArgumentError> validateIdentifier(std::string const&) const;
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptStructureManager&
    operator=(::ScriptModuleMinecraft::ScriptStructureManager const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptStructureManager();
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::InvalidArgumentError> validateIdentifier(::std::string const& identifier) const;
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
