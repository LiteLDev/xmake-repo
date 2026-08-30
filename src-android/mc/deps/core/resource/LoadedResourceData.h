#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LoadedResourceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          mIndex;
    ::ll::TypedStorage<8, 24, std::string> mContent;
    ::ll::TypedStorage<1, 1, bool>         mIsBaseGamePack;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadedResourceData& operator=(LoadedResourceData const&);
    LoadedResourceData(LoadedResourceData const&);
    LoadedResourceData();
};
