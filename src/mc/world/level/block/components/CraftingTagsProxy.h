#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CraftingTagsProxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mTags;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& CRAFTING_TAGS_MAX_AMOUNT();

    MCNAPI static ulong const& CRAFTING_TAG_CHARACTER_LIMIT();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mTags;
#endif // @header-generator platform
    // NOLINTEND
};
