#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/DlcPerformanceTier.h"
#include "mc/deps/core/utility/HardwareMemoryTier.h"

struct HardwareCompatibilityContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mUseHardwareTier;
    ::ll::UntypedStorage<4, 4>           mField_198dee47;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HardwareCompatibilityContext const buildHardwareCompatibilityContext();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
