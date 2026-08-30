#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/IScriptSerializable.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class LevelStorage;
class StructureManager;
class StructureTemplate;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptStructureManager; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStructureTemplate : public ::ScriptModuleMinecraft::IScriptSerializable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>              mId;
    ::ll::UntypedStorage<8, 24>                               mStructureManager;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                 mLevelStorage;
    ::ll::UntypedStorage<8, 32>                               mScriptStructureManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStructureTemplate& operator=(ScriptStructureTemplate const&);
    ScriptStructureTemplate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptStructureTemplate();

    virtual std::string const& getContentType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<Vec3, ScriptModuleMinecraft::ScriptInvalidStructureError> getSize() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::EnumBinding bindAnimationModeEnum();

    MCNAPI static ::Scripting::EnumBinding bindMirrorEnum();

    MCNAPI static ::Scripting::EnumBinding bindRotationEnum();

    MCNAPI static ::Scripting::EnumBinding bindStructureSaveModeEnum();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getContentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
