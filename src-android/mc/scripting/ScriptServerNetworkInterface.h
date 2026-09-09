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
class ServerNetworkHandler;
class ServerNetworkSystem;
class TextFilteringProcessor;
class UserEntityIdentifierComponent;
namespace Scripting { struct EngineError; }
// clang-format on

class ScriptServerNetworkInterface : public ::IScriptServerNetworkInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerNetworkSystem&> mNetworkSystem;
    ::ll::UntypedStorage<8, 24>                      mNetworkHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerNetworkInterface& operator=(ScriptServerNetworkInterface const&);
    ScriptServerNetworkInterface(ScriptServerNetworkInterface const&);
    ScriptServerNetworkInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptServerNetworkInterface();

    virtual ::Scripting::Result<long, Scripting::EngineError> getPlayerPingInMs(::Player const&) const;

    virtual ::Bedrock::NonOwnerPointer<TextFilteringProcessor> getTextFilteringProcessor() const;

    virtual bool isDedicatedServer() const;

    virtual ::Scripting::Result<void, Scripting::EngineError> addUserToDenyList(::Player const&);

    virtual ::Scripting::Result<void, Scripting::EngineError> disconnectPlayer(::Player const&, std::string const&);

    virtual ::CommandPermissionLevel getCommandsOpPermissionLevel() const;

    virtual ::Scripting::Result<void, Scripting::EngineError> savePlayerPermission(::Player&, ::PlayerPermissionLevel);

    virtual ::Scripting::Result<std::optional<SubClientId>, Scripting::EngineError> tryGetPlayerSplitScreenClientId(::Player const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<long, Scripting::EngineError> $getPlayerPingInMs(::Player const&) const;

    MCNAPI ::Bedrock::NonOwnerPointer<TextFilteringProcessor> $getTextFilteringProcessor() const;

    MCNAPI bool $isDedicatedServer() const;

    MCNAPI ::Scripting::Result<void, Scripting::EngineError> $addUserToDenyList(::Player const&);

    MCNAPI ::Scripting::Result<void, Scripting::EngineError> $disconnectPlayer(::Player const&, std::string const&);

    MCNAPI ::CommandPermissionLevel $getCommandsOpPermissionLevel() const;

    MCNAPI ::Scripting::Result<void, Scripting::EngineError> $savePlayerPermission(::Player&, ::PlayerPermissionLevel);

    MCNAPI ::Scripting::Result<std::optional<SubClientId>, Scripting::EngineError>
    $tryGetPlayerSplitScreenClientId(::Player const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
