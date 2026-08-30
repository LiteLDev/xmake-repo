#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct DirectoryEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mFolderPath;
    ::ll::TypedStorage<8, 8, ulong>        mFolderSize;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryEntry& operator=(DirectoryEntry const&);
    DirectoryEntry(DirectoryEntry const&);
    DirectoryEntry();
};

} // namespace Bedrock
