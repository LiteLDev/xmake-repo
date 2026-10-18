#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureLoading {

#if defined(LL_PLAT_A) // @header-generator platform
struct AbstractFeatureHolder {};
#else // @header-generator platform
struct AbstractFeatureHolder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AbstractFeatureHolder() = default;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace FeatureLoading
