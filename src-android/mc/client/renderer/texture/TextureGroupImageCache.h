#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
