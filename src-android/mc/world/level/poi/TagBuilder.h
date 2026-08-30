#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

namespace Poi {

class TagBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>            mName;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>> mTags;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>> mItems;
    // NOLINTEND
};

} // namespace Poi
