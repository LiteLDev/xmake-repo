#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/PlayFabStatus.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct PlayFabGetTitleKeyResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::PlayFabStatus> mStatus;
    ::ll::TypedStorage<8, 24, std::string>            mTitleKey;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabGetTitleKeyResult& operator=(PlayFabGetTitleKeyResult const&);
};
#else // @header-generator platform
struct PlayFabGetTitleKeyResult {};
#endif // @header-generator platform

} // namespace Social
