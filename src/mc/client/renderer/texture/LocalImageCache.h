#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/texture/IImageCache.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core_graphics/ImageBuffer.h"

class LocalImageCache : public ::IImageCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ResourceLocation, cg::ImageBuffer>> mResources;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalImageCache();

    virtual ::cg::ImageBuffer* getCachedImage(::ResourceLocation const&);

    virtual ::cg::ImageBuffer* insertImageIntoCache(::ResourceLocation const&, ::cg::ImageBuffer&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cg::ImageBuffer* $getCachedImage(::ResourceLocation const&);

    MCNAPI ::cg::ImageBuffer* $insertImageIntoCache(::ResourceLocation const&, ::cg::ImageBuffer&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class LocalImageCache {};
#endif // @header-generator platform
