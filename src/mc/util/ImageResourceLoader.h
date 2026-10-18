#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/deps/core/math/AlphaUsage.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/external/render_dragon/texture_streaming/texture_cache/TextureCache.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace cg { class ImageResource; }
namespace dragon::texturestreaming { struct DragonTextureCacheContext; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace dragon::texturestreaming { template<typename T0> class TextureCache; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace mce {

class ImageResourceLoader {
public:
    // ImageResourceLoader inner types define
    enum class LoadError : int {
        TextureConversionError = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8>  loadErrorCategory;
    ::ll::UntypedStorage<8, 16> mTextureCache;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk5447ee;
    ::ll::UntypedStorage<8, 16> mUnk9cf0a7;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ImageResourceLoader& operator=(ImageResourceLoader const&);
    ImageResourceLoader(ImageResourceLoader const&);
    ImageResourceLoader();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::nonstd::expected<std::shared_ptr<cg::ImageResource>, std::error_condition>
    loadImageResourceFromMemory(::ResourceLocation const&, std::string const&, bool, ::mce::AlphaUsage);

    MCNAPI ::nonstd::expected<std::shared_ptr<cg::ImageResource>, std::error_condition> loadImageWithoutExtension(
        ::ResourceLocation const&,
        bool,
        ::mce::AlphaUsage,
        std::optional<mce::ImageFormat> const,
        bool
    );

    MCNAPI void setTextureCache(
        std::shared_ptr<dragon::texturestreaming::TextureCache<dragon::texturestreaming::DragonTextureCacheContext>>
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::nonstd::expected<::std::shared_ptr<::cg::ImageResource>, ::std::error_condition>
    loadImageResourceFromMemory(
        ::ResourceLocation const& resourceLocation,
        ::std::string const&      fileContents,
        bool                      tryStreamed,
        ::mce::AlphaUsage         alphaUsage
    );

    MCNAPI ::nonstd::expected<::std::shared_ptr<::cg::ImageResource>, ::std::error_condition> loadImageWithoutExtension(
        ::ResourceLocation const&           resourceLocation,
        bool                                tryStreamed,
        ::mce::AlphaUsage                   alphaUsage,
        ::std::optional<::mce::ImageFormat> desiredImageFormat,
        bool                                splitAsArray
    );

    MCNAPI void setTextureCache(
        ::std::shared_ptr<
            ::dragon::texturestreaming::TextureCache<::dragon::texturestreaming::DragonTextureCacheContext>>
            textureCache
    );
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace mce
