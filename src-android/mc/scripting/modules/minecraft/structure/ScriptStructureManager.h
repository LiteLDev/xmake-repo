#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/structure/ScriptStructureTemplate.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class ServerLevel;
class StructureTemplate;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace ScriptModuleMinecraft { struct ScriptJigsawPlaceOptions; }
namespace ScriptModuleMinecraft { struct ScriptJigsawStructurePlaceOptions; }
namespace ScriptModuleMinecraft { struct ScriptPlaceJigsawError; }
namespace ScriptModuleMinecraft { struct ScriptStructureCreateOptions; }
namespace ScriptModuleMinecraft { struct ScriptStructurePlaceOptions; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStructureManager : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptStructureManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>          mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>            mLevel;
    ::ll::UntypedStorage<8, 40>                                        mStructures;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mPackStructureIds;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStructureManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptStructureManager(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);

    MCNAPI std::string_view _getPlaceErrorMessage(std::string_view const) const;

    MCNAPI ::StructureTemplate const* _getStructure(
        std::variant<
            std::string,
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptStructureTemplate>> const&
    ) const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptStructureTemplate>
    getOrCreateScriptStructure(::StructureTemplate&);

    MCNAPI std::optional<Scripting::InvalidArgumentError> validateIdentifier(std::string const&) const;

    MCNAPI ~ScriptStructureManager();
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
