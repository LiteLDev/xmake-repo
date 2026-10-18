#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::frameobject::components {

#if defined(LL_PLAT_A) // @header-generator platform
struct PointLight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                                           mHashCode;
    ::ll::TypedStorage<8, 192, std::array<dragon::atlas::AtlasTileHandle, 6>> mAtlasTiles;
    // NOLINTEND

public:
    // prevent constructor by default
    PointLight& operator=(PointLight const&);
    PointLight(PointLight const&);
    PointLight();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PointLight();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct PointLight {};
#endif // @header-generator platform

} // namespace dragon::frameobject::components
