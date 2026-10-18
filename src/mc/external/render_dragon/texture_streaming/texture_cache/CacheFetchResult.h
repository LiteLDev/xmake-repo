#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/ImageBuffer.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct CacheFetchResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<cg::ImageBuffer>> mMips;
    ::ll::TypedStorage<1, 1, bool>                          mWasCacheHit;
    // NOLINTEND

public:
    // prevent constructor by default
    CacheFetchResult& operator=(CacheFetchResult const&);
    CacheFetchResult(CacheFetchResult const&);
    CacheFetchResult();
};
#else // @header-generator platform
struct CacheFetchResult {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming
