#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class PermissionsHandler {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel> mCommandPermissions;
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel> mPlayerPermissions;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::PubSub::Publisher<void (), Bedrock::PubSub::ThreadModel::SingleThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mClientPlayerPermissionsPublisher;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addSaveData(::CompoundTag&) const;

    MCNAPI ::CommandPermissionLevel getCommandPermissions() const;

    MCNAPI ::PlayerPermissionLevel getPlayerPermissions() const;

    MCNAPI std::optional<std::reference_wrapper<
        Bedrock::PubSub::
            Publisher<void(), Bedrock::PubSub::ThreadModel::SingleThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>>
           getPlayerPermissionsChangedPublisher() const;

    MCNAPI bool loadSaveData(::CompoundTag const&);

    MCNAPI bool operator!=(::PermissionsHandler const&) const;

    MCNAPI void setCommandPermissions(::CommandPermissionLevel);

    MCNAPI void setPlayerPermissions(::PlayerPermissionLevel);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PlayerPermissionLevel playerPermissionLevelFromString(std::string const&);

    MCNAPI static std::string playerPermissionLevelToString(::PlayerPermissionLevel const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& DIFF_COMMAND_PERMISSION();

    MCNAPI static std::string const& DIFF_PLAYER_PERMISSION();
    // NOLINTEND
};
