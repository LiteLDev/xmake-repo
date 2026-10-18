#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_dispersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8b5131;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_dispersion& operator=(cgltf_dispersion const&);
    cgltf_dispersion(cgltf_dispersion const&);
    cgltf_dispersion();
};
#endif // @header-generator platform
