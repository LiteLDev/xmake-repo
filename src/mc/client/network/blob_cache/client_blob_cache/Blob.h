#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlobCache::Server {

class Blob {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong const>        id;
    ::ll::TypedStorage<8, 24, std::string const> data;
    ::ll::TypedStorage<1, 1, bool const>         isChunkInTickRange;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkd22e9f;
    ::ll::UntypedStorage<8, 32> mUnk263eb6;
    ::ll::UntypedStorage<1, 1>  mUnk7a29d3;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Blob& operator=(Blob const&);
    Blob(Blob const&);
    Blob();
#endif // @header-generator platform
};

} // namespace ClientBlobCache::Server
