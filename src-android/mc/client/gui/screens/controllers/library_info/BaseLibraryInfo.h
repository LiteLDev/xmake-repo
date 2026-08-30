#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LibraryInfo {

struct BaseLibraryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSectionHeader;
    // NOLINTEND
};

} // namespace LibraryInfo
