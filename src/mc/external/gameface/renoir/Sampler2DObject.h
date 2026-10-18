#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct Sampler2DObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> Id;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Sampler2DObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd39144;
    // NOLINTEND

public:
    // prevent constructor by default
    Sampler2DObject& operator=(Sampler2DObject const&);
    Sampler2DObject(Sampler2DObject const&);
    Sampler2DObject();
};
#else // @header-generator platform
struct Sampler2DObject {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
