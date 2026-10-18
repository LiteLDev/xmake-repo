#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce::framebuilder { struct PerCascadeUpdateParameters; }
// clang-format on

struct ShadowCascadeState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mFrameCount;
    // NOLINTEND
};
#else // @header-generator platform
struct ShadowCascadeState {};
#endif // @header-generator platform
