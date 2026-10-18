#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

namespace Social {

class IGooglePlayGamesService {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::Threading::Async<bool> isAuthenticated() = 0;

    virtual ~IGooglePlayGamesService() = default;

    virtual void unlockAchievement(std::string_view) = 0;

    virtual void incrementAchievement(std::string_view, int) = 0;
    // NOLINTEND
};

} // namespace Social
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
