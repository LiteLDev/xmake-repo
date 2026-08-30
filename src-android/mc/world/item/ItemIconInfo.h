#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemIconInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<4, 4, int>          mFrame;
    ::ll::TypedStorage<4, 4, int>          mAtlasTotalFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemIconInfo& operator=(ItemIconInfo const&);
    ItemIconInfo(ItemIconInfo const&);
};
