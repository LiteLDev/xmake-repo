#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ILiveViewCollectionConsumer {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ILiveViewCollectionConsumer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILiveViewCollectionConsumer() = default;

    virtual ::std::vector<uint> consumeChangedHandles() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ILiveViewCollectionConsumer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
