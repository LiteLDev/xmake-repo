#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SneakTriggerSystem {

struct PlayerStatusTransitions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, std::optional<bool>> mNewSneakStatus;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mNewCrawlStatus;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mNewSwimStatus;
#else // @header-generator platform
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mNewSneakStatus;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mNewCrawlStatus;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mNewSwimStatus;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SneakTriggerSystem
