#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class GeometryAtlasCapture {
public:
    // GeometryAtlasCapture inner types define
    using Images = std::vector<mce::Image>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<const std::vector<mce::Image>>> mImages;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class GeometryAtlasCapture {
public:
    // GeometryAtlasCapture inner types define
    using Images = ::std::vector<::mce::Image>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::vector<::mce::Image> const>> mImages;
    // NOLINTEND
};
#else // @header-generator platform
class GeometryAtlasCapture {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
