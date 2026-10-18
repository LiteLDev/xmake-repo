#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class IScriptDedicatedServerUtils;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleServerAdmin { class ScriptLevelStorageSaveStateChangeError; }
namespace Scripting { class ModuleBindingBuilder; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mFilename;
        ::ll::TypedStorage<8, 8, long>         mFileSize;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk7ad974;
        ::ll::UntypedStorage<8, 8>  mUnk2a9ee6;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        ScriptLevelStorageQuerySnapshotFile& operator=(ScriptLevelStorageQuerySnapshotFile const&);
        ScriptLevelStorageQuerySnapshotFile(ScriptLevelStorageQuerySnapshotFile const&);
#endif // @header-generator platform
        ScriptLevelStorageQuerySnapshotFile();
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::IScriptDedicatedServerUtils&> mServerUtils;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk48d05a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLevelStorage& operator=(ScriptLevelStorage const&);
    ScriptLevelStorage(ScriptLevelStorage const&);
    ScriptLevelStorage();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleServerAdmin::ScriptLevelStorageSaveStateChangeError> saveHold();
#else // @header-generator platform
    MCNAPI ::Scripting::Result<void, ::ScriptModuleServerAdmin::ScriptLevelStorageSaveStateChangeError> saveHold();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleServerAdmin::ScriptLevelStorageSaveStateChangeError> saveResume();
#else // @header-generator platform
    MCNAPI ::Scripting::Result<void, ::ScriptModuleServerAdmin::ScriptLevelStorageSaveStateChangeError> saveResume();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
#else // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& mod);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
