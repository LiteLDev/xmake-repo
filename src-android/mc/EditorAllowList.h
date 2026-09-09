#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EditorAllowList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                         mFilePath;
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsActive;
    ::ll::TypedStorage<8, 24, std::set<std::string, std::less<void>, std::allocator<std::string>>> mAllowedXuids;
    // NOLINTEND
};
