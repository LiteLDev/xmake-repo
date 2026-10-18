#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/block/TextureItem.h"
#include "mc/client/renderer/texture/IsotropicFaceData.h"
#include "mc/common/WeakPtr.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockShape.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class Experiments;
class HashedString;
class LoadedResourceData;
class ResourcePackManager;
class SemVersion;
class TextureAtlasItem;
class Vec3;
struct TextureUVCoordinateSet;
namespace BlockGeometry { struct Model; }
namespace BlockTessellationFallbackUtils { struct TessellationConfigInfo; }
namespace ClientBlockPipeline { struct TextureUVs; }
namespace Json { class Value; }
namespace Json { class ValueIterator; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/texture/IsotropicFaceData.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockShape.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class HashedString;
class LoadedResourceData;
class ResourcePackManager;
class TextureAtlasItem;
class Vec3;
struct TextureItem;
struct TextureUVCoordinateSet;
namespace Bedrock::Threading { class Mutex; }
namespace BlockGeometry { struct Model; }
namespace BlockTessellationFallbackUtils { struct TessellationConfigInfo; }
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class BlockGraphics {
public:
    // BlockGraphics inner types declare
    // clang-format off
    struct ConstructorToken;
    // clang-format on

    // BlockGraphics inner types define
    struct ConstructorToken {};
#if defined(LL_PLAT_A) // @header-generator platform

    using BlockDataValuesMap = std::unordered_map<HashedString, std::vector<Json::Value>>;

    using BlockTessellationInfoMap =
        std::unordered_map<HashedString, BlockTessellationFallbackUtils::TessellationConfigInfo>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*>              mBlock;
    ::ll::TypedStorage<4, 4, ::BlockShape>                mBlockShape;
    ::ll::TypedStorage<4, 4, float>                       mAmbientOcclusionExponent;
    ::ll::TypedStorage<1, 1, bool>                        mFancy;
    ::ll::TypedStorage<1, 1, bool>                        mAllowSame;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer>          mRenderLayer;
    ::ll::UntypedStorage<1, 0>                            mIsotropicFaceData;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mSoundType;
    ::ll::TypedStorage<4, 24, ::AABB>                     mVisualShape;
    ::ll::TypedStorage<8, 24, std::vector<TextureItem>>   mTextureItems;
    ::ll::TypedStorage<8, 8, ulong>                       mIconTextureIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockGraphics();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockGraphics();

    virtual int getColor(::BlockSource&, ::BlockPos const&) const;

    virtual int getColor(int) const;

    virtual bool isSeasonTinted(::BlockSource&, ::BlockPos const&) const;

    virtual void onGraphicsModeChanged(bool, bool);

    virtual ::BlockRenderLayer getRenderLayer(::BlockSource&, ::BlockPos const&) const;

    virtual int getExtraRenderLayers();

    virtual ::TextureUVCoordinateSet const& getCarriedTexture(ulong, int) const;

    virtual void setVisualShape(::Vec3 const&, ::Vec3 const&);

    virtual void setVisualShape(::AABB const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _logBlockTextureError(::fmt::v11::fstring<const char*> const&) const;

    MCNAPI float getAmbientOcclusionExponent() const;

    MCNAPI ::TextureAtlasItem const& getAtlasItem(ulong) const;

    MCNAPI ::Block const* getBlock() const;

    MCNAPI ::BlockShape getBlockShape() const;

    MCNAPI std::string const getDefaultTextureName(ulong) const;

    MCNAPI ::TextureUVCoordinateSet const& getIconTexture(int) const;

    MCNAPI ::BlockRenderLayer getRenderLayer() const;

    MCNAPI std::optional<std::string> const& getSoundType() const;

    MCNAPI ::TextureUVCoordinateSet const& getTexture(ulong, int) const;

    MCNAPI ::TextureUVCoordinateSet const& getTexture(::BlockPos const&, ulong, int) const;

    MCNAPI std::vector<TextureUVCoordinateSet> const& getTextureCarriedVariations(ulong, int) const;

    MCNAPI std::vector<TextureUVCoordinateSet> const& getTextureDefaultVariations(ulong, int) const;

    MCNAPI bool isFull() const;

    MCNAPI bool isFullAndOpaque() const;

    MCNAPI bool isValid() const;

    MCNAPI ::BlockGraphics& setCarriedTextureItem(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI void setDefaultCarriedTextures();

    MCNAPI ::BlockGraphics& setTextureItem(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI ulong texturePaletteSize() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TextureUVCoordinateSet const&
    chooseRandomTexture(float, std::vector<TextureUVCoordinateSet> const&);

    MCNAPI static ulong chooseRandomTextureIndex(float, std::vector<ClientBlockPipeline::TextureUVs> const&);

    MCNAPI static ::BlockGraphics* createBlockGraphics(::HashedString const&, ::BlockShape);

    MCNAPI static void disableBlockType(::BlockType const&);

    MCNAPI static void extractBlockDataValuesFromFileContents(
        ::Experiments const&,
        std::vector<LoadedResourceData> const&,
        std::unordered_map<HashedString, std::vector<Json::Value>>&,
        std::unordered_map<HashedString, BlockTessellationFallbackUtils::TessellationConfigInfo>&
    );

    MCNAPI static std::unordered_map<uint, BlockGraphics*> const& getBlocks();

    MCNAPI static ::BlockGraphics const* getForBlock(uint const);

    MCNAPI static ::BlockGraphics const* getForBlock(::Block const&);

    MCNAPI static ::BlockGraphics const* getForBlock(::BlockType const&);

    MCNAPI static ::TextureAtlasItem const& getTextureItem(
        std::string const&,
        std::weak_ptr<AtlasItemManager>,
        std::unordered_map<std::string, TextureAtlasItem>&
    );

    MCNAPI static ::TextureUVCoordinateSet getTextureUVCoordinateSet(std::string const&, int, int);

    MCNAPI static bool hasOldTessellationFallback(::Block const&);

    MCNAPI static void initBlocks(::ResourcePackManager&, ::Experiments const&);

    MCNAPI static bool isFullAndOpaque(::Block const&);

    MCNAPI static bool isInitialized();

    MCNAPI static ::BlockGraphics& registerBlockGraphics(
        std::unordered_map<HashedString, std::vector<Json::Value>>&,
        ::HashedString const&,
        ::BlockShape
    );

    MCNAPI static void setAtlasItemManager(std::shared_ptr<AtlasItemManager>);

    MCNAPI static void teardownBlocks();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& SIZE_OFFSET();

    MCNAPI static std::unordered_map<std::string, BlockGraphics*>& mBlockLookupMap();

    MCNAPI static std::mutex& mBlockModelAccess();

    MCNAPI static std::unordered_map<uint, BlockGraphics*>& mBlocks();

    MCNAPI static std::unique_ptr<BlockGraphics>& mDummyBlock();

    MCNAPI static bool& mInitialized();

    MCNAPI static std::map<std::string, std::unique_ptr<BlockGeometry::Model>>& mModels();

    MCNAPI static std::vector<std::unique_ptr<BlockGraphics>>& mOwnedBlocks();

    MCNAPI static std::weak_ptr<AtlasItemManager>& mTerrainTextureAtlas();

    MCNAPI static std::unordered_set<uint>& mVanillaBlocksWithFallbackToOldTessellation();

    MCNAPI static std::unordered_map<std::string, TextureAtlasItem>& sComplexTextureItems();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getColor(::BlockSource&, ::BlockPos const&) const;

    MCNAPI int $getColor(int) const;

    MCNAPI bool $isSeasonTinted(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void $onGraphicsModeChanged(bool, bool);

    MCNAPI ::BlockRenderLayer $getRenderLayer(::BlockSource&, ::BlockPos const&) const;

    MCNAPI int $getExtraRenderLayers();

    MCNAPI ::TextureUVCoordinateSet const& $getCarriedTexture(ulong, int) const;

    MCNAPI void $setVisualShape(::Vec3 const&, ::Vec3 const&);

    MCNAPI void $setVisualShape(::AABB const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

    using BlockDataValuesMap = ::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>;

    using BlockTessellationInfoMap =
        ::std::unordered_map<::HashedString, ::BlockTessellationFallbackUtils::TessellationConfigInfo>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*>                  mBlock;
    ::ll::TypedStorage<4, 4, ::BlockShape>                    mBlockShape;
    ::ll::TypedStorage<4, 4, float>                           mAmbientOcclusionExponent;
    ::ll::TypedStorage<1, 1, bool>                            mFancy;
    ::ll::TypedStorage<1, 1, bool>                            mAllowSame;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer>              mRenderLayer;
    ::ll::TypedStorage<1, 1, ::IsotropicFaceData>             mIsotropicFaceData;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSoundType;
    ::ll::TypedStorage<4, 24, ::AABB>                         mVisualShape;
    ::ll::TypedStorage<8, 24, ::std::vector<::TextureItem>>   mTextureItems;
    ::ll::TypedStorage<8, 8, uint64>                          mIconTextureIndex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockGraphics() = default;

    virtual ::BlockRenderLayer getRenderLayer(::BlockSource& region, ::BlockPos const& pos) const;

    virtual int getColor(int auxData) const;

    virtual int getColor(::BlockSource& region, ::BlockPos const& pos) const;

    virtual bool isSeasonTinted(::BlockSource& region, ::BlockPos const& p) const;

    virtual void onGraphicsModeChanged(bool fancy, bool fancyBubbles);

    virtual int getExtraRenderLayers();

    virtual ::TextureUVCoordinateSet const& getCarriedTexture(uint64 textureSlot, int blockVariant) const;

    virtual void setVisualShape(::AABB const& shape);

    virtual void setVisualShape(::Vec3 const& min, ::Vec3 const& max);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _logBlockTextureError(::fmt::v11::fstring<char const*> const& error) const;

    MCAPI ::std::string const getDefaultTextureName(uint64 textureSlot) const;

    MCAPI ::TextureUVCoordinateSet const& getTexture(uint64 textureSlot, int blockVariant) const;

    MCAPI ::TextureUVCoordinateSet const& getTexture(::BlockPos const& p, uint64 textureSlot, int blockVariant) const;

    MCAPI bool isFullAndOpaque() const;

    MCAPI ::BlockGraphics& setCarriedTextureItem(
        ::std::string const& nameUp,
        ::std::string const& nameDown,
        ::std::string const& nameNorth,
        ::std::string const& nameSouth,
        ::std::string const& nameWest,
        ::std::string const& nameEast
    );

    MCAPI void setDefaultCarriedTextures();

    MCAPI ::BlockGraphics& setTextureItem(
        ::std::string const& nameUp,
        ::std::string const& nameDown,
        ::std::string const& nameNorth,
        ::std::string const& nameSouth,
        ::std::string const& nameWest,
        ::std::string const& nameEast
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _initBlockModels(::ResourcePackManager& packManager);

    MCAPI static ::BlockGraphics* createBlockGraphics(::HashedString const& name, ::BlockShape defaultBlockShape);

    MCAPI static void extractBlockDataValuesFromFileContents(
        ::Experiments const&                                                experiments,
        ::std::vector<::LoadedResourceData> const&                          contents,
        ::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>& blockDataValuesMap,
        ::std::unordered_map<::HashedString, ::BlockTessellationFallbackUtils::TessellationConfigInfo>&
            blockTessellationInfoMap
    );

    MCAPI static ::BlockGraphics const* getForBlock(::Block const& block);

    MCAPI static ::TextureAtlasItem const& getTextureItem(
        ::std::string const&                                     name,
        ::std::weak_ptr<::AtlasItemManager>                      terrainTextureAtlas,
        ::std::unordered_map<::std::string, ::TextureAtlasItem>& complexTextureItems
    );

    MCAPI static ::TextureUVCoordinateSet
    getTextureUVCoordinateSet(::std::string const& name, int blockVariant, int textureVariant);

    MCAPI static void initBlocks(::ResourcePackManager& packManager, ::Experiments const& experiments);

    MCAPI static bool isFullAndOpaque(::Block const& block);

    MCAPI static ::BlockGraphics& registerBlockGraphics(
        ::std::unordered_map<::HashedString, ::std::vector<::Json::Value>>& blockDataValuesMap,
        ::HashedString const&                                               name,
        ::BlockShape                                                        defaultBlockShape
    );

    MCAPI static void teardownBlocks();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::BlockGraphics*>& mBlockLookupMap();

    MCAPI static ::Bedrock::Threading::Mutex& mBlockModelAccess();

    MCAPI static ::std::unordered_map<uint, ::BlockGraphics*>& mBlocks();

    MCAPI static ::std::unique_ptr<::BlockGraphics>& mDummyBlock();

    MCAPI static bool& mInitialized();

    MCAPI static ::std::map<::std::string, ::std::unique_ptr<::BlockGeometry::Model>>& mModels();

    MCAPI static ::std::vector<::std::unique_ptr<::BlockGraphics>>& mOwnedBlocks();

    MCAPI static ::std::weak_ptr<::AtlasItemManager>& mTerrainTextureAtlas();

    MCAPI static ::std::unordered_set<uint>& mVanillaBlocksWithFallbackToOldTessellation();

    MCAPI static ::std::unordered_map<::std::string, ::TextureAtlasItem>& sComplexTextureItems();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockRenderLayer $getRenderLayer(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD int $getColor(int auxData) const;

    MCFOLD int $getColor(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isSeasonTinted(::BlockSource& region, ::BlockPos const& p) const;

    MCAPI void $onGraphicsModeChanged(bool fancy, bool fancyBubbles);

    MCFOLD int $getExtraRenderLayers();

    MCAPI ::TextureUVCoordinateSet const& $getCarriedTexture(uint64 textureSlot, int blockVariant) const;

    MCAPI void $setVisualShape(::AABB const& shape);

    MCAPI void $setVisualShape(::Vec3 const& min, ::Vec3 const& max);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
