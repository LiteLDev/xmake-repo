#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlushableEnv : public ::leveldb::EnvWrapper {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    FlushableEnv();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FlushableEnv() = default;
#else // @header-generator platform
    virtual ~FlushableEnv() /*override*/ = default;
#endif // @header-generator platform

    virtual void flushToPermanentStorage() = 0;
    // NOLINTEND
};
