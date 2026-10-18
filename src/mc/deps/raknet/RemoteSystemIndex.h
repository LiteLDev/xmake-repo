#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RemoteSystemIndex {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                         index;
    ::ll::TypedStorage<8, 8, ::RakNet::RemoteSystemIndex*> next;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk154f4d;
    ::ll::UntypedStorage<8, 8> mUnk17b45d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RemoteSystemIndex& operator=(RemoteSystemIndex const&);
    RemoteSystemIndex(RemoteSystemIndex const&);
    RemoteSystemIndex();
#endif // @header-generator platform
};

} // namespace RakNet
