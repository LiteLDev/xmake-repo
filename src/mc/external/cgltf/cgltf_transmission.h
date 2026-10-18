#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct cgltf_transmission {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkc58275;
    ::ll::UntypedStorage<4, 4>  mUnk6bc5d2;
    // NOLINTEND

public:
    // prevent constructor by default
    cgltf_transmission& operator=(cgltf_transmission const&);
    cgltf_transmission(cgltf_transmission const&);
    cgltf_transmission();
};
#endif // @header-generator platform
