#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace cg { class ImageBuffer; }
// clang-format on

class IImageCache {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IImageCache();

    virtual ::cg::ImageBuffer* getCachedImage(::ResourceLocation const&) = 0;

    virtual ::cg::ImageBuffer* insertImageIntoCache(::ResourceLocation const&, ::cg::ImageBuffer&&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace cg { class ImageBuffer; }
// clang-format on

class IImageCache {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IImageCache() = default;

    virtual ::cg::ImageBuffer* getCachedImage(::ResourceLocation const& resourceLocation) = 0;

    virtual ::cg::ImageBuffer*
    insertImageIntoCache(::ResourceLocation const& resourceLocation, ::cg::ImageBuffer&& imageBuffer) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IImageCache {};
#endif // @header-generator platform
#endif // @header-generator platform
