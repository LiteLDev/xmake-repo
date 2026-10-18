#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CurrentStructureFeaturePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mCurrentStructureFeature;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mCurrentStructureFeature;
#endif // @header-generator platform
    // NOLINTEND
};
