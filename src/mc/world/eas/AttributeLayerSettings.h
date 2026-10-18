#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct AttributeLayerSettings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>   mPriority;
    ::ll::TypedStorage<4, 4, float> mWeight;
    ::ll::TypedStorage<1, 1, bool>  mEnabled;
    ::ll::TypedStorage<1, 1, bool>  mTransitionsPaused;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk281b37;
    ::ll::UntypedStorage<4, 4> mUnk99a968;
    ::ll::UntypedStorage<1, 1> mUnk23fceb;
    ::ll::UntypedStorage<1, 1> mUnk2c8253;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AttributeLayerSettings& operator=(AttributeLayerSettings const&);
    AttributeLayerSettings(AttributeLayerSettings const&);
    AttributeLayerSettings();
#endif // @header-generator platform
};

} // namespace EAS
