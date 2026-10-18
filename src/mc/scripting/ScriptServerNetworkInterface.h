#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/IScriptServerNetworkInterface.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class ServerNetworkHandler;
class ServerNetworkSystem;
#else // @header-generator platform
#endif // @header-generator platform
class TextFilteringProcessor;
class UserEntityIdentifierComponent;
namespace Scripting { struct EngineError; }
// clang-format on

class ScriptServerNetworkInterface : public ::IScriptServerNetworkInterface {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ServerNetworkSystem&> mNetworkSystem;
    ::ll::UntypedStorage<8, 24>                      mNetworkHandler;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkc3dc66;
    ::ll::UntypedStorage<8, 24> mUnk7ba394;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerNetworkInterface& operator=(ScriptServerNetworkInterface const&);
    ScriptServerNetworkInterface(ScriptServerNetworkInterface const&);
    ScriptServerNetworkInterface();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptServerNetworkInterface();
#else // @header-generator platform
    virtual ~ScriptServerNetworkInterface() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<long, Scripting::EngineError> getPlayerPingInMs(::Player const&) const;
#else // @header-generator platform
    virtual ::Scripting::Result<int64, ::Scripting::EngineError> getPlayerPingInMs(::Player const& player) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<TextFilteringProcessor> getTextFilteringProcessor() const;
#else // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<::TextFilteringProcessor> getTextFilteringProcessor() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDedicatedServer() const;
#else // @header-generator platform
    virtual bool isDedicatedServer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<void, Scripting::EngineError> addUserToDenyList(::Player const&);
#else // @header-generator platform
    virtual ::Scripting::Result<void, ::Scripting::EngineError> addUserToDenyList(::Player const& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<void, Scripting::EngineError> disconnectPlayer(::Player const&, std::string const&);
#else // @header-generator platform
    virtual ::Scripting::Result<void, ::Scripting::EngineError>
    disconnectPlayer(::Player const& player, ::std::string const& reason) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CommandPermissionLevel getCommandsOpPermissionLevel() const;
#else // @header-generator platform
    virtual ::CommandPermissionLevel getCommandsOpPermissionLevel() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<void, Scripting::EngineError> savePlayerPermission(::Player&, ::PlayerPermissionLevel);
#else // @header-generator platform
    virtual ::Scripting::Result<void, ::Scripting::EngineError>
    savePlayerPermission(::Player& player, ::PlayerPermissionLevel permission) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<std::optional<SubClientId>, Scripting::EngineError> tryGetPlayerSplitScreenClientId(::Player const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::Scripting::Result<::std::optional<::SubClientId>, ::Scripting::EngineError>
    tryGetPlayerSplitScreenClientId(::Player const& player) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptServerNetworkInterface(::ServerNetworkSystem&, ::Bedrock::NonOwnerPointer<ServerNetworkHandler>);

    MCNAPI ::Scripting::Result<const UserEntityIdentifierComponent*, Scripting::EngineError>
    _getNetIdentity(::Player const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerNetworkSystem&, ::Bedrock::NonOwnerPointer<ServerNetworkHandler>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI ::Scripting::Result<::UserEntityIdentifierComponent const*, ::Scripting::EngineError>
    _getNetIdentity(::Player const& player) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<long, Scripting::EngineError> $getPlayerPingInMs(::Player const&) const;
#else // @header-generator platform
    MCNAPI ::Scripting::Result<int64, ::Scripting::EngineError> $getPlayerPingInMs(::Player const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<TextFilteringProcessor> $getTextFilteringProcessor() const;
#else // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<::TextFilteringProcessor> $getTextFilteringProcessor() const;
#endif // @header-generator platform

    MCNAPI bool $isDedicatedServer() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, Scripting::EngineError> $addUserToDenyList(::Player const&);
#else // @header-generator platform
    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> $addUserToDenyList(::Player const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, Scripting::EngineError> $disconnectPlayer(::Player const&, std::string const&);
#else // @header-generator platform
    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    $disconnectPlayer(::Player const& player, ::std::string const& reason);
#endif // @header-generator platform

    MCNAPI ::CommandPermissionLevel $getCommandsOpPermissionLevel() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, Scripting::EngineError> $savePlayerPermission(::Player&, ::PlayerPermissionLevel);
#else // @header-generator platform
    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    $savePlayerPermission(::Player& player, ::PlayerPermissionLevel permission);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::optional<SubClientId>, Scripting::EngineError>
    $tryGetPlayerSplitScreenClientId(::Player const&) const;
#else // @header-generator platform
    MCNAPI ::Scripting::Result<::std::optional<::SubClientId>, ::Scripting::EngineError>
    $tryGetPlayerSplitScreenClientId(::Player const& player) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
