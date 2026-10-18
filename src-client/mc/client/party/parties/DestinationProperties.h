#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties::PartyUtils {

struct DestinationProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                type;
    ::ll::TypedStorage<8, 24, std::string>                id;
    ::ll::TypedStorage<8, 24, std::string>                port;
    ::ll::TypedStorage<8, 24, std::string>                scanText;
    ::ll::TypedStorage<8, 24, std::string>                redactedText;
    ::ll::TypedStorage<8, 24, std::string>                created;
    ::ll::TypedStorage<8, 24, std::string>                creatorId;
    ::ll::TypedStorage<8, 24, std::string>                experienceId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> scenarioId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> serverId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> targetId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> worldId;
    ::ll::TypedStorage<8, 24, std::string>                cookie;
    ::ll::TypedStorage<8, 24, std::string>                intent;
    // NOLINTEND
};

} // namespace Parties::PartyUtils
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
