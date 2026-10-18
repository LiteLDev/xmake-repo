#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockGeometry {

#if defined(LL_PLAT_A) // @header-generator platform
struct Face {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>        u0;
    ::ll::TypedStorage<4, 4, float>        v0;
    ::ll::TypedStorage<4, 4, float>        u1;
    ::ll::TypedStorage<4, 4, float>        v1;
    ::ll::TypedStorage<4, 4, int>          rotation;
    ::ll::TypedStorage<8, 24, std::string> texture;
    ::ll::TypedStorage<4, 4, int>          textureIndex;
    ::ll::TypedStorage<1, 1, bool>         enabled;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Face {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>          u0;
    ::ll::TypedStorage<4, 4, float>          v0;
    ::ll::TypedStorage<4, 4, float>          u1;
    ::ll::TypedStorage<4, 4, float>          v1;
    ::ll::TypedStorage<4, 4, int>            rotation;
    ::ll::TypedStorage<8, 32, ::std::string> texture;
    ::ll::TypedStorage<4, 4, int>            textureIndex;
    ::ll::TypedStorage<1, 1, bool>           enabled;
    // NOLINTEND
};
#else // @header-generator platform
struct Face {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace BlockGeometry
