#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct RealmWorldPublisherData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long>         mId;
    ::ll::TypedStorage<8, 24, std::string> mOwnerXuid;
    // NOLINTEND
};

} // namespace Social
