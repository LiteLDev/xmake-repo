#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/deps/core_graphics/MipMapSupport.h"
#include "mc/deps/core_graphics/TextureAtlasTileUVs.h"
#include "mc/deps/core_graphics/TextureDescription.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class TintMapColor;
namespace cg { struct AtlasCreationTile; }
namespace mce { class Color; }
// clang-format on

namespace cg {

class TextureAtlas {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<cg::ImageBuffer>>         mAtlasMipStorage;
    ::ll::TypedStorage<8, 24, std::vector<cg::TextureAtlasTileUVs>> mTileUVs;
    ::ll::TypedStorage<4, 24, ::cg::TextureDescription>             mAtlasTextureDescription;
    ::ll::TypedStorage<4, 4, uint>                                  mPadSize;
    ::ll::TypedStorage<1, 1, bool>                                  mEnablePadding;
    ::ll::TypedStorage<4, 4, uint>                                  mReductionMips;
    ::ll::TypedStorage<8, 8, ulong>                                 mStorageAllocated;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlas& operator=(TextureAtlas const&);
    TextureAtlas(TextureAtlas const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void createAtlasForTiles(
        std::vector<cg::AtlasCreationTile> const&,
        uint,
        std::optional<uint>,
        ::cg::MipMapSupport const,
        uint const
    );

    MCNAPI ::cg::TextureDescription const& getAtlasTextureDescription() const;

    MCNAPI ::cg::TextureDescription const& getImageDescription() const;

    MCNAPI uint getPadSize() const;

    MCNAPI uint getReductionMips() const;

    MCNAPI ::cg::TextureAtlasTileUVs const& getUVsForTextureIndex(int) const;

    MCNAPI ulong getUsedMemory() const;

    MCNAPI bool isAtlasTextureValid() const;

    MCNAPI void updateTextureAtUVs(
        ::cg::TextureAtlasTileUVs const&,
        ::cg::ImageBuffer const* const,
        uint const,
        ::mce::Color const&,
        bool,
        bool,
        bool,
        ::cg::ImageBuffer const* const,
        bool,
        ::TintMapColor const&,
        ::TintMapColor const&,
        ::mce::Color const&,
        bool,
        ::mce::Color const&,
        bool,
        float,
        ::mce::Color const&,
        ::cg::TextureSetLayerType const
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _readTexture(
        ::glm::vec<4, uchar, (glm::qualifier)0>&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::cg::ImageBuffer const&,
        uint const,
        ::glm::vec<2, int, (glm::qualifier)0> const&
    );

    MCNAPI static bool _tryCreateUVs(
        std::vector<cg::AtlasCreationTile> const&,
        uint,
        uint,
        uint,
        std::vector<cg::TextureAtlasTileUVs>&,
        uint&,
        uint&
    );
    // NOLINTEND
};

} // namespace cg
