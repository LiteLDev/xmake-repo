#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Poi {

class TagBuilder {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>            mName;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>> mTags;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>> mItems;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnkbb1078;
    ::ll::UntypedStorage<8, 24> mUnkde5558;
    ::ll::UntypedStorage<8, 24> mUnkec5336;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TagBuilder& operator=(TagBuilder const&);
    TagBuilder(TagBuilder const&);
    TagBuilder();
#endif // @header-generator platform
};

} // namespace Poi
