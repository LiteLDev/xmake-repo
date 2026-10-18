#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"

// auto generated forward declare list
// clang-format off
class AnimatedTextureContainer;
class IImageCache;
class PackAccessStrategy;
struct TextureUVCoordinateSet;
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace cg { class ImageBuffer; }
namespace cg { struct ImageDescription; }
namespace mce { class TextureGroup; }
namespace persona { struct TextureTint; }
namespace persona { struct TextureTintCollection; }
// clang-format on

class PersonaTextureComposer {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::cg::ImageBuffer const*
    _loadImage(::PackAccessStrategy const&, std::string const&, std::string const&, ::IImageCache&);

    MCNAPI static void _readTextureIntoAtlas(
        ::cg::ImageBuffer&,
        ::persona::TextureTint const&,
        ::cg::ImageBuffer const&,
        ::cg::ImageBuffer const*,
        ::cg::ImageBuffer const*,
        ::TextureUVCoordinateSet&,
        ::glm::vec<2, int, (glm::qualifier)0> const*
    );

    MCNAPI static bool _validateAnimatedTextureType(::persona::AnimatedTextureType, uint, uint, int);

    MCNAPI static std::shared_ptr<persona::TextureTint>
    buildAdditiveTexture(std::string const&, ::mce::TextureGroup&, ::persona::TextureTintCollection const&);

    MCNAPI static std::vector<AnimatedTextureContainer>
    buildAnimatedTexture(std::string const&, std::vector<persona::TextureTintCollection*> const&, ::IImageCache&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/player/persona/AnimatedTextureType.h"

// auto generated forward declare list
// clang-format off
class AnimatedTextureContainer;
class IImageCache;
class PackAccessStrategy;
struct TextureUVCoordinateSet;
namespace cg { class ImageBuffer; }
namespace mce { class TextureGroup; }
namespace persona { struct TextureTint; }
namespace persona { struct TextureTintCollection; }
// clang-format on

class PersonaTextureComposer {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::cg::ImageBuffer const* _loadImage(
        ::PackAccessStrategy const& strategy,
        ::std::string const&        path,
        ::std::string const&        uniquePath,
        ::IImageCache&              textureGroup
    );

    MCNAPI static void _readTextureIntoAtlas(
        ::cg::ImageBuffer&            atlasImage,
        ::persona::TextureTint const& textureTint,
        ::cg::ImageBuffer const&      sourceImage,
        ::cg::ImageBuffer const*      srcTintMapImage,
        ::cg::ImageBuffer const*      srcClothingLayerMapImage,
        ::TextureUVCoordinateSet&     uvs,
        ::glm::ivec2 const*           maxDimensionsSlice
    );

    MCNAPI static bool
    _validateAnimatedTextureType(::persona::AnimatedTextureType type, uint width, uint height, int frames);

    MCNAPI static ::std::shared_ptr<::persona::TextureTint> buildAdditiveTexture(
        ::std::string const&                    characterName,
        ::mce::TextureGroup&                    textureGroup,
        ::persona::TextureTintCollection const& textureTintCollection
    );

    MCNAPI static ::std::vector<::AnimatedTextureContainer> buildAnimatedTexture(
        ::std::string const&                                    skinName,
        ::std::vector<::persona::TextureTintCollection*> const& textureCollections,
        ::IImageCache&                                          imageCache
    );
    // NOLINTEND
};
#else // @header-generator platform
class PersonaTextureComposer {};
#endif // @header-generator platform
#endif // @header-generator platform
