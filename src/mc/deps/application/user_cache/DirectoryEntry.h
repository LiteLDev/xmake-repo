#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct DirectoryEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mFolderPath;
    ::ll::TypedStorage<8, 8, ulong>        mFolderSize;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk1ba14a;
    ::ll::UntypedStorage<8, 8>  mUnk3689d0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryEntry& operator=(DirectoryEntry const&);
    DirectoryEntry(DirectoryEntry const&);
    DirectoryEntry();
};

} // namespace Bedrock
