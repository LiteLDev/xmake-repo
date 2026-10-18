#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

struct ExperienceJoinRequestInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>                experienceId;
    ::ll::TypedStorage<8, 24, std::optional<mce::UUID>>   worldId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> partyId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> friendId;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
