#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageBuffer.h"

namespace dragon::texturestreaming {

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

} // namespace dragon::texturestreaming
