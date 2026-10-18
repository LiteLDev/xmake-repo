#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DedicatedServerInitialization {

#if defined(LL_PLAT_C) // @header-generator platform
struct InitContext {};
#else // @header-generator platform
struct InitContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5297b2;
    ::ll::UntypedStorage<8, 8> mUnkda07d4;
    // NOLINTEND

public:
    // prevent constructor by default
    InitContext& operator=(InitContext const&);
    InitContext(InitContext const&);
    InitContext();
};
#endif // @header-generator platform

} // namespace DedicatedServerInitialization
#endif // @header-generator platform
