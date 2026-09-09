#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CraftingTagsProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mTags;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& CRAFTING_TAGS_MAX_AMOUNT();

    MCNAPI static ulong const& CRAFTING_TAG_CHARACTER_LIMIT();
    // NOLINTEND
};
