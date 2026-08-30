#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/deps/core/math/AlphaUsage.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace cg { class ImageResource; }
namespace dragon::texturestreaming { struct DragonTextureCacheContext; }
namespace dragon::texturestreaming { template<typename T0> class TextureCache; }
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
    ::ll::UntypedStorage<8, 8>  loadErrorCategory;
    ::ll::UntypedStorage<8, 16> mTextureCache;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND
};

} // namespace mce
