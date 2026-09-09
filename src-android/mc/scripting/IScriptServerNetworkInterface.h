#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Player;
class TextFilteringProcessor;
namespace Scripting { struct EngineError; }
// clang-format on

class IScriptServerNetworkInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IScriptServerNetworkInterface() = default;

    virtual ::Scripting::Result<long, Scripting::EngineError> getPlayerPingInMs(::Player const&) const = 0;

    virtual ::Bedrock::NonOwnerPointer<TextFilteringProcessor> getTextFilteringProcessor() const = 0;

    virtual bool isDedicatedServer() const = 0;

    virtual ::Scripting::Result<void, Scripting::EngineError> addUserToDenyList(::Player const&) = 0;

    virtual ::Scripting::Result<void, Scripting::EngineError> disconnectPlayer(::Player const&, std::string const&) = 0;

    virtual ::CommandPermissionLevel getCommandsOpPermissionLevel() const = 0;

    virtual ::Scripting::Result<void, Scripting::EngineError> savePlayerPermission(::Player&, ::PlayerPermissionLevel) = 0;

    virtual ::Scripting::Result<std::optional<SubClientId>, Scripting::EngineError> tryGetPlayerSplitScreenClientId(::Player const&) const = 0;
    // clang-format on
    // NOLINTEND
};
