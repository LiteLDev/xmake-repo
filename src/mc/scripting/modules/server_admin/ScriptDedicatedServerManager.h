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
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleServerAdmin { class ScriptAllowList; }
namespace ScriptModuleServerAdmin { class ScriptLevelStorage; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class IScriptDedicatedServerUtils;
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptDedicatedServerManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::IScriptDedicatedServerUtils&> mServerUtils;
    ::ll::TypedStorage<8, 8, ::Level&>                       mLevel;
    ::ll::UntypedStorage<8, 32>                              mAllowList;
    ::ll::UntypedStorage<8, 32>                              mLevelStorage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkcbaf6b;
    ::ll::UntypedStorage<8, 8>  mUnk7267ad;
    ::ll::UntypedStorage<8, 32> mUnk50de5e;
    ::ll::UntypedStorage<8, 32> mUnk878b2b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDedicatedServerManager& operator=(ScriptDedicatedServerManager const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptDedicatedServerManager(ScriptDedicatedServerManager const&);
#endif // @header-generator platform
    ScriptDedicatedServerManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptDedicatedServerManager(::Scripting::WeakLifetimeScope&, ::IScriptDedicatedServerUtils&, ::Level&);
#else // @header-generator platform
    MCNAPI ScriptDedicatedServerManager(
        ::Scripting::WeakLifetimeScope& scope,
        ::IScriptDedicatedServerUtils&  serverUtils,
        ::Level&                        level
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, Scripting::EngineError> reloadCDNConfig();
#else // @header-generator platform
    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> reloadCDNConfig();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, Scripting::EngineError> reloadPermissionsFile();
#else // @header-generator platform
    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> reloadPermissionsFile();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, Scripting::EngineError> reloadScriptConfig();
#else // @header-generator platform
    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> reloadScriptConfig();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope&, ::IScriptDedicatedServerUtils&, ::Level&);
#else // @header-generator platform
    MCNAPI void*
    $ctor(::Scripting::WeakLifetimeScope& scope, ::IScriptDedicatedServerUtils& serverUtils, ::Level& level);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
