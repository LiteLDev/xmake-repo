#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct Texture2DObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> Id;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Texture2DObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb1bea9;
    // NOLINTEND

public:
    // prevent constructor by default
    Texture2DObject& operator=(Texture2DObject const&);
    Texture2DObject(Texture2DObject const&);
    Texture2DObject();
};
#else // @header-generator platform
struct Texture2DObject {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
