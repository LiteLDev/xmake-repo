#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct RealmWorldPublisherData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long>         mId;
    ::ll::TypedStorage<8, 24, std::string> mOwnerXuid;
    // NOLINTEND
};
#else // @header-generator platform
struct RealmWorldPublisherData {};
#endif // @header-generator platform

} // namespace Social
