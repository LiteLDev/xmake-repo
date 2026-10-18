#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct InternalPacketRefCountedData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, uchar*> sharedDataBlock;
    ::ll::TypedStorage<4, 4, uint>   refCount;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk526be6;
    ::ll::UntypedStorage<4, 4> mUnk6e07de;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    InternalPacketRefCountedData& operator=(InternalPacketRefCountedData const&);
    InternalPacketRefCountedData(InternalPacketRefCountedData const&);
    InternalPacketRefCountedData();
#endif // @header-generator platform
};

} // namespace RakNet
