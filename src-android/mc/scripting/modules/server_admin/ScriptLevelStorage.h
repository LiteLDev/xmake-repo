#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class IScriptDedicatedServerUtils;
namespace ScriptModuleServerAdmin { class ScriptLevelStorageSaveStateChangeError; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptLevelStorage {
public:
    // ScriptLevelStorage inner types declare
    // clang-format off
    struct ScriptLevelStorageQuerySnapshotFile;
    // clang-format on

    // ScriptLevelStorage inner types define
    struct ScriptLevelStorageQuerySnapshotFile {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mFilename;
        ::ll::TypedStorage<8, 8, long>         mFileSize;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScriptLevelStorageQuerySnapshotFile();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IScriptDedicatedServerUtils&> mServerUtils;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLevelStorage& operator=(ScriptLevelStorage const&);
    ScriptLevelStorage(ScriptLevelStorage const&);
    ScriptLevelStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ScriptModuleServerAdmin::ScriptLevelStorageSaveStateChangeError> saveHold();

    MCNAPI ::Scripting::Result<void, ScriptModuleServerAdmin::ScriptLevelStorageSaveStateChangeError> saveResume();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
