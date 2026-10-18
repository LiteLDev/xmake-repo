#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct BrpakIndexEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mDataOffset;
    ::ll::TypedStorage<8, 8, ulong> mSize;
    ::ll::TypedStorage<4, 4, uint>  mCrc;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkdb3807;
    ::ll::UntypedStorage<8, 8> mUnk5d218f;
    ::ll::UntypedStorage<4, 4> mUnk667a32;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BrpakIndexEntry& operator=(BrpakIndexEntry const&);
    BrpakIndexEntry(BrpakIndexEntry const&);
    BrpakIndexEntry();
#endif // @header-generator platform
};

} // namespace Bedrock::Resources
