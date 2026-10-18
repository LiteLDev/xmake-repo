#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/util/ChatMessageRestrictions.h"

namespace PlayerCapabilities {

struct MaySendChatResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ChatMessageRestrictions> mRestriction;
    ::ll::TypedStorage<8, 24, std::string>              mErrorLocKey;
    // NOLINTEND
};

} // namespace PlayerCapabilities
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
