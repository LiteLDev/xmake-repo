#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EduAIConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> enabled;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkbaf9ff;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EduAIConfig& operator=(EduAIConfig const&);
    EduAIConfig(EduAIConfig const&);
    EduAIConfig();
#endif // @header-generator platform
};
