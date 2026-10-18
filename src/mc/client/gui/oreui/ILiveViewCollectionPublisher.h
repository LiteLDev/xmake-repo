#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ILiveViewCollectionPublisher {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ILiveViewCollectionPublisher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILiveViewCollectionPublisher() = default;

    virtual uint allocateHandle() = 0;

    virtual void markChanged(uint handle) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ILiveViewCollectionPublisher {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
