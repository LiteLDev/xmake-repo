#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/texture/IImageCache.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace cg { class ImageBuffer; }
namespace mce { class TextureGroup; }
// clang-format on

class TextureGroupImageCache : public ::IImageCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::TextureGroup&> mGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureGroupImageCache& operator=(TextureGroupImageCache const&);
    TextureGroupImageCache(TextureGroupImageCache const&);
    TextureGroupImageCache();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureGroupImageCache();

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
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/texture/IImageCache.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace cg { class ImageBuffer; }
// clang-format on

class TextureGroupImageCache : public ::IImageCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk11a07a;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureGroupImageCache& operator=(TextureGroupImageCache const&);
    TextureGroupImageCache(TextureGroupImageCache const&);
    TextureGroupImageCache();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureGroupImageCache() /*override*/ = default;

    virtual ::cg::ImageBuffer* getCachedImage(::ResourceLocation const& resourceLocation) /*override*/;

    virtual ::cg::ImageBuffer*
    insertImageIntoCache(::ResourceLocation const& resourceLocation, ::cg::ImageBuffer&& imageBuffer) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cg::ImageBuffer* $getCachedImage(::ResourceLocation const& resourceLocation);

    MCNAPI ::cg::ImageBuffer*
    $insertImageIntoCache(::ResourceLocation const& resourceLocation, ::cg::ImageBuffer&& imageBuffer);
    // NOLINTEND
};
#else // @header-generator platform
class TextureGroupImageCache {};
#endif // @header-generator platform
#endif // @header-generator platform
