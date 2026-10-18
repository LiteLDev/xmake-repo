#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
struct FogDefinition;
// clang-format on

class VolumeFogComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16> mFogDefinition;
    ::ll::UntypedStorage<4, 8>  mPriority;
    // NOLINTEND
};
#else // @header-generator platform
class VolumeFogComponent {};
#endif // @header-generator platform
