#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
class ItemRegistryRef;
class ItemStackBase;
class ResourceLocation;
class TextureAtlasItem;
struct ResolvedItemIconInfo;
struct TextureUVCoordinateSet;
namespace cg { class TextureSetImageContainer; }
// clang-format on

class ItemIconManager {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void clearTextureTessellatorData();

    MCNAPI static ::cg::TextureSetImageContainer const* findTextureTessellatorData(::ResourceLocation const&);

    MCNAPI static ::TextureUVCoordinateSet const& getIcon(::ResolvedItemIconInfo const&, bool);

    MCNAPI static ::TextureUVCoordinateSet const& getIcon(::ItemStackBase const&, int, bool);

    MCNAPI static ::TextureUVCoordinateSet const& getTextureUVCoordinateSet(std::string const&, int);

    MCNAPI static void initTextureTessellatorData(
        ::ItemRegistryRef const,
        std::unordered_map<ResourceLocation, cg::TextureSetImageContainer>&&
    );

    MCNAPI static void setAtlasItemManager(std::shared_ptr<AtlasItemManager>);

    MCNAPI static void
    updateTextureTessellatorDataForHotReload(std::unordered_map<ResourceLocation, cg::TextureSetImageContainer>&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& DEFAULT_TEXTURE_VARIANT();

    MCNAPI static ::glm::vec<4, float, (glm::qualifier)0>& defaultMERS();

    MCNAPI static ::TextureUVCoordinateSet const& mInvalidTextureUVCoordinateSet();

    MCNAPI static std::weak_ptr<AtlasItemManager>& mItemTextureItems();

    MCNAPI static std::unordered_map<ResourceLocation, cg::TextureSetImageContainer>& mTextureTessellatorSourceData();

    MCNAPI static std::unordered_map<std::string, TextureUVCoordinateSet>& mUnstoredFrameSet();
    // NOLINTEND
};
