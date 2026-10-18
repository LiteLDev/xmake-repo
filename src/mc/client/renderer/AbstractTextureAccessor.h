#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct BedrockTextureData;
namespace cg { class ImageBuffer; }
namespace mce { struct TextureDescription; }
// clang-format on

class AbstractTextureAccessor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AbstractTextureAccessor() = default;

    virtual ::cg::ImageBuffer* insertImageIntoCache(::ResourceLocation const&, ::cg::ImageBuffer&&) = 0;

    virtual ::cg::ImageBuffer* getCachedImageOrLoadSync(::ResourceLocation const&, bool const) = 0;

    virtual ::cg::ImageBuffer* getCachedImage(::ResourceLocation const&) const = 0;

    virtual void setTextureMetadata(::ResourceLocation const&, ::mce::TextureDescription const&) = 0;

    virtual ::BedrockTextureData const* getBedrockTextureData(::ResourceLocation const&) const = 0;

    virtual bool isLoaded(::ResourceLocation const&, bool, ::cg::TextureSetLayerType const) const = 0;

    virtual ::cg::ImageBuffer const& getMissingImageBuffer() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct BedrockTextureData;
namespace cg { class ImageBuffer; }
namespace mce { struct TextureDescription; }
// clang-format on

class AbstractTextureAccessor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AbstractTextureAccessor() = default;

    virtual ::cg::ImageBuffer*
    insertImageIntoCache(::ResourceLocation const& resourceLocation, ::cg::ImageBuffer&& imageBuffer) = 0;

    virtual ::cg::ImageBuffer*
    getCachedImageOrLoadSync(::ResourceLocation const& resourceLocation, bool const forceReload) = 0;

    virtual ::cg::ImageBuffer* getCachedImage(::ResourceLocation const& resourceLocation) const = 0;

    virtual void setTextureMetadata(
        ::ResourceLocation const&        resourceLocation,
        ::mce::TextureDescription const& textureDescription
    ) = 0;

    virtual ::BedrockTextureData const* getBedrockTextureData(::ResourceLocation const& resourceLocation) const = 0;

    virtual bool isLoaded(
        ::ResourceLocation const&       resourceLocation,
        bool                            ignoreCreation,
        ::cg::TextureSetLayerType const textureType
    ) const = 0;

    virtual ::cg::ImageBuffer const& getMissingImageBuffer() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class AbstractTextureAccessor {};
#endif // @header-generator platform
#endif // @header-generator platform
