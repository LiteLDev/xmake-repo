#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

namespace Parties {

struct PartyExperienceConnectionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                creatorId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                experienceId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> scenarioId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> serverId;
    ::ll::TypedStorage<8, 24, std::optional<mce::UUID>>   targetId;
    ::ll::TypedStorage<8, 24, std::optional<mce::UUID>>   worldId;
    // NOLINTEND
};

} // namespace Parties
