#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

#if defined(LL_PLAT_A) // @header-generator platform
class ViewSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ushort> const> mSets;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewSet& operator=(ViewSet const&);
};
#else // @header-generator platform
class ViewSet {};
#endif // @header-generator platform

} // namespace dragon::framerenderer
