#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon::atlas { struct AtlasTileHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class IAtlasTile {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IAtlasTile {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAtlasTile() = default;

    virtual uint getUserID() const = 0;

    virtual ::dragon::atlas::AtlasTileHandle getBackendID() const = 0;

    virtual bool isInitialized() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IAtlasTile {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
