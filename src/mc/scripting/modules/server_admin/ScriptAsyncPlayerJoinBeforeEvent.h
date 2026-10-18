#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/common/SubClientId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/ScriptPlayerSplitScreenSlot.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AsyncVerdictPromise;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleServerAdmin { struct DisconnectedError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleServerAdmin {

struct ScriptAsyncPlayerJoinBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<AsyncVerdictPromise>>                             mJoinData;
    ::ll::TypedStorage<8, 24, std::string>                                                      mPlayerId;
    ::ll::TypedStorage<8, 24, std::string>                                                      mPlayerName;
    ::ll::TypedStorage<1, 2, std::optional<ScriptModuleMinecraft::ScriptPlayerSplitScreenSlot>> mSplitScreenSlot;
    ::ll::TypedStorage<8, 24, std::string>                                                      mRealmsOnlyPlayerXuid;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk210079;
    ::ll::UntypedStorage<8, 32> mUnk1fb4c2;
    ::ll::UntypedStorage<8, 32> mUnkfb3ce5;
    ::ll::UntypedStorage<1, 2>  mUnk554cf8;
    ::ll::UntypedStorage<8, 32> mUnk17df79;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncPlayerJoinBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptAsyncPlayerJoinBeforeEvent(::ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleServerAdmin::DisconnectedError>
        disallowJoin(std::optional<std::string>);
#else // @header-generator platform
    MCNAPI ::Scripting::Result<void, ::ScriptModuleServerAdmin::DisconnectedError>
    disallowJoin(::std::optional<::std::string> message);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleServerAdmin::DisconnectedError> disconnect(std::optional<std::string>);
#else // @header-generator platform
    MCNAPI ::Scripting::Result<void, ::ScriptModuleServerAdmin::DisconnectedError>
    disconnect(::std::optional<::std::string> disconnectReason);

    MCNAPI ::ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent&
    operator=(::ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent&&);

    MCNAPI ::ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent&
    operator=(::ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent const&);

    MCNAPI ~ScriptAsyncPlayerJoinBeforeEvent();
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
    MCNAPI void* $ctor(::ScriptModuleServerAdmin::ScriptAsyncPlayerJoinBeforeEvent const&);
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleServerAdmin
