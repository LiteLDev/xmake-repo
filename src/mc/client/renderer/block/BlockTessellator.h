#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/block/BakedBlockLightType.h"
#include "mc/client/renderer/block/BlockTessellatorBlockInWorld.h"
#include "mc/client/renderer/block/BlockTessellatorCache.h"
#include "mc/client/renderer/block/block_geo_type/GeoTypeResolver.h"
#include "mc/client/renderer/block/block_geometry/Axis.h"
#include "mc/client/renderer/block/block_tessellator_custom_extra_data/Map.h"
#include "mc/client/renderer/texture/TextureUVCoordinateSet.h"
#include "mc/client/world/level/biome/BiomeTintCache.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/minecraft_renderer/framebuilder/FrameLightingModelCapabilities.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/legacy/facing/Name.h"
#include "mc/legacy/facing/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/AnvilPart.h"
#include "mc/world/level/block/BigDripleafTilt.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockShape.h"
#include "mc/world/level/block/BrightnessPair.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class AmbientOcclusionCalculator;
class Block;
class BlockGraphics;
class BlockOccluder;
class BlockSource;
class BlockType;
class LightTexture;
class Material;
class Matrix;
class ScreenContext;
class Tessellator;
class Vec2;
class Vec3;
struct AirAndSimpleBlockBits;
struct Brightness;
struct OffscreenCaptureDescription;
namespace mce { class TexturePtr; }
namespace mce { struct Radian; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/block/BakedBlockLightType.h"
#include "mc/client/renderer/block/BlockTessellatorBlockInWorld.h"
#include "mc/client/renderer/block/BlockTessellatorCache.h"
#include "mc/client/renderer/block/block_geo_type/GeoTypeResolver.h"
#include "mc/client/renderer/block/block_tessellator_custom_extra_data/Map.h"
#include "mc/client/renderer/texture/TextureUVCoordinateSet.h"
#include "mc/client/world/level/biome/BiomeTintCache.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/minecraft_renderer/framebuilder/FrameLightingModelCapabilities.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/legacy/facing/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/AnvilPart.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockShape.h"
#include "mc/world/level/block/BrightnessPair.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockGraphics;
class BlockOccluder;
class BlockSource;
class BlockType;
class LightTexture;
class Material;
class Matrix;
class ScreenContext;
class Tessellator;
class Vec2;
class Vec3;
struct AirAndSimpleBlockBits;
struct OffscreenCaptureDescription;
namespace mce { class Mesh; }
namespace mce { class TexturePtr; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class BlockTessellator {
public:
    // BlockTessellator inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct UVOverride;
#else // @header-generator platform
#endif // @header-generator platform
    struct LocalRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct UVOverride;
#endif // @header-generator platform
    // clang-format on

    // BlockTessellator inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class CrossTextureReverseSideMapping : uchar {
        Mirrored = 0,
        Normal   = 1,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class CrossTextureWidth : uchar {
        Normal = 0,
        Wide   = 1,
    };
#else // @header-generator platform
    enum class CrossTextureWidth : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class CrossTextureWidth : uchar {
        Normal = 0,
        Wide   = 1,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class CrossTextureReverseSideMapping : uchar {
        Mirrored = 0,
        Normal   = 1,
    };
#else // @header-generator platform
    enum class CrossTextureReverseSideMapping : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class BambooFenceSlatPieceType : int {
        LeftSidePiece  = 0,
        CenterPiece    = 1,
        RightSidePiece = 2,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class BambooFenceSlatPieceType : int {
        LeftSidePiece  = 0,
        CenterPiece    = 1,
        RightSidePiece = 2,
    };
#else // @header-generator platform
    enum class BambooFenceSlatPieceType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class FenceGatePieceType : int {
        Post                 = 0,
        ClosedInnerLeftPost  = 1,
        ClosedInnerRightPost = 2,
        Slat                 = 3,
        OpenedInnerLeftPost  = 4,
        OpenedInnerRightPost = 5,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class FenceGatePieceType : int {
        Post                 = 0,
        ClosedInnerLeftPost  = 1,
        ClosedInnerRightPost = 2,
        Slat                 = 3,
        OpenedInnerLeftPost  = 4,
        OpenedInnerRightPost = 5,
    };
#else // @header-generator platform
    enum class FenceGatePieceType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct UVOverride {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> pbrTextureDataHandle;
        ::ll::TypedStorage<4, 4, float>  u0;
        ::ll::TypedStorage<4, 4, float>  u1;
        ::ll::TypedStorage<4, 4, float>  v0;
        ::ll::TypedStorage<4, 4, float>  v1;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockType const*> mFire;
        ::ll::TypedStorage<8, 8, ::Block const*>     mRedstoneTorch;
        ::ll::TypedStorage<8, 8, ::Block const*>     mUnlitRedstoneTorch;
        ::ll::TypedStorage<8, 8, ::Block const*>     mObsidian;
        // NOLINTEND
    };
#else // @header-generator platform
    struct LocalRegistry {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockType const*> mFire;
        ::ll::TypedStorage<8, 8, ::Block const*>     mRedstoneTorch;
        ::ll::TypedStorage<8, 8, ::Block const*>     mUnlitRedstoneTorch;
        ::ll::TypedStorage<8, 8, ::Block const*>     mObsidian;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                         mRenderingExtra;
    ::ll::TypedStorage<1, 1, bool>                                                         mUseNormals;
    ::ll::TypedStorage<1, 1, bool>                                                         mTextureShiftEnabled;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                               mRegion;
    ::ll::TypedStorage<4, 8, ::mce::framebuilder::FrameLightingModelCapabilities>          mLightingModelCapabilities;
    ::ll::TypedStorage<8, 88, ::TextureUVCoordinateSet>                                    mFixedTexture;
    ::ll::TypedStorage<1, 1, bool>                                                         mSupportsNewVertexFormat;
    ::ll::TypedStorage<1, 1, bool>                                                         mUseFixedTexture;
    ::ll::TypedStorage<1, 1, bool>                                                         mUseOccluder;
    ::ll::TypedStorage<1, 1, bool>                                                         _tmpUseRegion;
    ::ll::TypedStorage<1, 1, bool>                                                         mXFlipTexture;
    ::ll::TypedStorage<4, 4, int>                                                          mRenderingLayer;
    ::ll::TypedStorage<1, 1, bool>                                                         mRenderingGUI;
    ::ll::TypedStorage<1, 1, bool>                                                         mVersionPreTrailsAndTales;
    ::ll::TypedStorage<1, 1, bool>                                                         mUseFixedColor;
    ::ll::TypedStorage<4, 96, std::array<mce::Color, 6>>                                   mFixedColors;
    ::ll::TypedStorage<1, 1, bool>                                                         mApplyAmbientOcclusion;
    ::ll::TypedStorage<4, 4, ::BakedBlockLightType>                                        mBakedLighting;
    ::ll::TypedStorage<1, 1, bool>                                                         mForExport;
    ::ll::TypedStorage<1, 1, bool>                                                         mUseCachedCalculation;
    ::ll::TypedStorage<4, 128, ::mce::Color[8]>                                            mAoColors;
    ::ll::TypedStorage<1, 8, ::BrightnessPair[4]>                                          mTc;
    ::ll::TypedStorage<1, 6, std::array<Flip, 6>>                                          mFlipFace;
    ::ll::TypedStorage<4, 120, std::array<BlockTessellator::UVOverride, 6>>                mTextureOverride;
    ::ll::TypedStorage<8, 1000, ::Block const* [125]>                                      mAmbientOcclusionCacheBlocks;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                          mItemMat;
    ::ll::TypedStorage<4, 24, ::AABB>                                                      mCurrentShapeBB;
    ::ll::TypedStorage<1, 1, bool>                                                         mCurrentShapeSet;
    ::ll::TypedStorage<8, 8, ::Block const*>                                               mCurrentShapeBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                  mCurrentShapeBlockPos;
    ::ll::TypedStorage<4, 4, float>                                                        mCurrentScale;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, mce::Mesh>>                         mBlockMeshes;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockTessellatorBlockInWorld, mce::Mesh>> mInWorldBlockMeshes;
    ::ll::UntypedStorage<8, 272040>                                                        mBlockCache;
    ::ll::UntypedStorage<8, 48>                                                            mCachedGetBlock;
    ::ll::TypedStorage<8, 19288, ::BiomeTintCache>                                         mBiomeWeights;
    ::ll::TypedStorage<4, 20, std::optional<mce::Color>>                                   mColorOverride;
    ::ll::TypedStorage<1, 1, bool>                                                         mForceOpaque;
    ::ll::TypedStorage<8, 80, ::BlockTessellatorCustomExtraData::Map>                      mBlockExtraDataMap;
    ::ll::TypedStorage<8, 32, ::BlockTessellator::LocalRegistry>                           mLocalRegistry;
    ::ll::UntypedStorage<8, 48>                                                            mGeoTypeResolver;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTessellator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockTessellator(::BlockSource*);

    MCNAPI void _flipAllFaces(::Facing::Rotation);

    MCNAPI ::TextureUVCoordinateSet const& _getMappedTexture(::Block const&, uchar) const;

    MCNAPI ::TextureUVCoordinateSet const&
    _getTexture(::BlockPos const&, ::Block const&, uchar, int, ::BlockGraphics const*) const;

    MCNAPI void _modifyCurrentShapeAccordingToAttachmentDirection(::Direction::Type);

    MCNAPI void _preparePolyCross(::Tessellator&, ::BlockPos const&, ::Block const&);

    MCNAPI void _rotateVertsAroundPoint(std::array<Vec3, 4>&, ::Vec3 const&, ::BlockGeometry::Axis, ::mce::Radian);

    MCNAPI void _setBambooFencePostTexture(::TextureUVCoordinateSet const&);

    MCNAPI void
    _setBambooFenceSlatTextureGui(::TextureUVCoordinateSet const&, ::BlockTessellator::BambooFenceSlatPieceType);

    MCNAPI void _tessellateAllFaces(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void
    _tessellateBambooFenceGui(::Tessellator&, ::Block const&, ::BlockPos const&, bool, float, float, float, float);

    MCNAPI void _tessellateBambooFenceSlatsInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, uchar);

    MCNAPI bool _tessellateBlockInWorldFlat(
        ::Tessellator&,
        ::Block const&,
        ::BlockPos const&,
        ::mce::Color const&,
        ::BlockOccluder*,
        std::bitset<6> const,
        int
    );

    MCNAPI bool _tessellateBlockInWorldWithAmbienceOcclusion(
        ::Tessellator&,
        ::Block const&,
        ::BlockPos,
        ::mce::Color const&,
        ::BlockOccluder*,
        std::bitset<6> const,
        int
    );

    MCNAPI void
    _tessellateCalibratedSculkSensorAmethystCrystalInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void
    _tessellateFenceGateGui(::Tessellator&, ::Block const&, ::BlockPos const&, bool, float, float, float, float);

    MCNAPI void _tessellateForInventory(::Tessellator&, ::Block const&, ::BlockPos const&, float, float, float, float);

    MCNAPI void _tessellateSculkSensorTendrilsInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, uchar);

    MCNAPI void _tex1(::Tessellator&, ::Vec2 const&);

    MCNAPI void _trySetFenceGateTexture(::Block const&, ::BlockPos const&, ::BlockTessellator::FenceGatePieceType);

    MCNAPI void appendTessellatedBlock(::Tessellator&, ::Block const&);

    MCNAPI void buildBiomeWeights(::BlockPos const&);

    MCNAPI void clearBlockCache();

    MCNAPI ::BiomeTintCache& getBiomeTintCache();

    MCNAPI ::AABB const& getCurrentShape();

    MCNAPI ::BrightnessPair getLightColor(::BlockPos const&);

    MCNAPI ::mce::Mesh& getMeshForBlock(::Tessellator&, ::Block const&);

    MCNAPI ::mce::Mesh& getMeshForBlockInWorld(
        ::Tessellator&,
        ::Block const&,
        ::BlockPos&,
        ::BlockRenderLayer,
        void const*,
        bool,
        bool,
        ::LightTexture const&
    );

    MCNAPI ::BlockSource& getRegion() const;

    MCNAPI float getWaterHeight(::BlockPos const&, ::Material const&, ::BlockPos const&);

    MCNAPI void moveCurrentShape(::Vec3 const&);

    MCNAPI void renderGuiBlock(
        ::ScreenContext&,
        ::Block const&,
        ::BlockGraphics const&,
        ::mce::TexturePtr const&,
        float,
        float,
        ::OffscreenCaptureDescription const&
    );

    MCNAPI void resetCache(::BlockPos const&);

    MCNAPI void resetCacheToAir(::BlockPos const&);

    MCNAPI void resetRegion();

    MCNAPI bool rotateCommandBlockFaces(::Block const&);

    MCNAPI void setBakedLighting(::BakedBlockLightType);

    MCNAPI void setBlockExtraDataMap(::BlockTessellatorCustomExtraData::Map);

    MCNAPI void setForceOpaque(bool);

    MCNAPI void setLightingModelCapabilities(::mce::framebuilder::FrameLightingModelCapabilities const&);

    MCNAPI void setRegion(::BlockSource&);

    MCNAPI void setRenderLayer(int);

    MCNAPI void setTextureShiftsEnabled(bool);

    MCNAPI void tessellateAll(::Tessellator&, ::Block const&, ::Vec3 const&, ::TextureUVCoordinateSet const&);

    MCNAPI bool tessellateAmethystCluster(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateAnvilInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI float tessellateAnvilPiece(
        ::Tessellator&,
        ::Block const&,
        ::BlockPos const&,
        ::AnvilPart,
        float,
        float,
        float,
        float,
        bool,
        bool,
        ::buffer_span<Flip>
    );

    MCNAPI bool tessellateAzaleaBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI bool tessellateBambooBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateBambooSaplingBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateBambooStalkBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI void tessellateBambooStemInWorld(
        ::Tessellator&,
        ::Block const&,
        ::BlockPos const&,
        ::BlockGraphics const&,
        float const,
        float const,
        float const
    );

    MCNAPI bool tessellateBeaconInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateBellBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void tessellateBellBlockStandingLegInWorld(
        ::Tessellator&,
        ::Block const&,
        ::BlockPos const&,
        ::BlockGraphics const&,
        bool const
    );

    MCNAPI bool tessellateBigDripleafBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateBlockInWorld(
        ::Tessellator&,
        ::Block const&,
        ::BlockPos const&,
        std::bitset<6> const,
        ::AirAndSimpleBlockBits const*
    );

    MCNAPI bool tessellateBrewingStandInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateBubbleColumnInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateCactusInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateCalibratedSculkSensorBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateCameraFacingSpriteInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateCampfireBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateCandleCakeInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateCandleInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateCauldronInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateCaveVinesInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateChainInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateChemistryTableInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateChiseledBookshelfBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateChorusFlowerInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI bool tessellateChorusPlantInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateCocoaInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateCommandBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateComparatorInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateComposterBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void tessellateCompoundCreatorFace(
        ::Tessellator&,
        ::Block const&,
        ::Vec3 const&,
        ::TextureUVCoordinateSet const&,
        ::Vec2,
        ::Vec2,
        int const,
        bool,
        ::Matrix*
    );

    MCNAPI bool tessellateCoralFanHangInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateCoralFanInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateCrossInWorld(
        ::Tessellator&,
        ::Block const&,
        ::BlockPos const&,
        bool const,
        ::BlockTessellator::CrossTextureReverseSideMapping,
        float,
        ::BlockTessellator::CrossTextureWidth
    );

    MCNAPI void tessellateCrossTexture(
        ::Tessellator&,
        ::TextureUVCoordinateSet const&,
        ::TextureUVCoordinateSet const&,
        ::Vec3 const&,
        ::Block const&,
        float,
        ::BlockTessellator::CrossTextureWidth,
        ::BlockTessellator::CrossTextureReverseSideMapping,
        bool const
    );

    MCNAPI void tessellateCrossTextureUp(
        ::Tessellator&,
        ::TextureUVCoordinateSet const&,
        ::TextureUVCoordinateSet const&,
        ::Vec3 const&,
        bool const,
        ::Block const&,
        float,
        ::BlockTessellator::CrossTextureWidth,
        ::BlockTessellator::CrossTextureReverseSideMapping
    );

    MCNAPI bool tessellateDiodeInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateDoorInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateDoublePlantInWorld(
        ::Tessellator&,
        ::Block const&,
        ::BlockShape const,
        ::BlockPos const&,
        bool const,
        ::Vec3,
        bool,
        ::BlockTessellator::CrossTextureReverseSideMapping,
        ::BlockTessellator::CrossTextureWidth
    );

    MCNAPI bool tessellateDoubleThinFenceInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI bool tessellateDragonEgg(::Tessellator&, ::Block const&, ::BlockPos const&, bool, int);

    MCNAPI bool tessellateDriedGhastInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateDriedKelpBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateDustInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void tessellateEast(::Tessellator&, ::Block const&, ::Vec3 const&, ::TextureUVCoordinateSet const&);

    MCNAPI bool tessellateEndGatewayInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateEndPortalFrameInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateEndPortalInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void tessellateEndRodAppended(::Tessellator&, ::Block const&, ::BlockGraphics const&);

    MCNAPI void tessellateEndRodGui(::Tessellator&, ::Block const&, ::BlockGraphics const&);

    MCNAPI bool tessellateEndRodInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateEyeblossomInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void tessellateFaceDown(::Tessellator&, ::Block const&, ::Vec3 const&, ::TextureUVCoordinateSet const&);

    MCNAPI void tessellateFaceUp(::Tessellator&, ::Block const&, ::Vec3 const&, ::TextureUVCoordinateSet const&);

    MCNAPI void tessellateFaceWithUVs(
        ::Tessellator&,
        ::Block const&,
        ::Vec3 const&,
        ::TextureUVCoordinateSet const&,
        float const,
        float const,
        float const,
        float const,
        int const
    );

    MCNAPI bool tessellateFacingBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateFenceGateInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateFenceInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateFireInWorld(::Tessellator&, ::Block const&, ::BlockPos);

    MCNAPI bool tessellateFireflyBushInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, ::BlockGraphics const&);

    MCNAPI bool tessellateFlowerBedBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateFlowerPotInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateFrogSpawnInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateGrindstoneBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void
    tessellateGrindstoneLegInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, bool, bool, ::Direction::Type);

    MCNAPI bool tessellateHoneyBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateHopperInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateHopperInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI bool tessellateInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI void tessellateInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, ::TextureUVCoordinateSet const&);

    MCNAPI bool
    tessellateIndividualCandleInWorld(::Tessellator&, ::Block const&, ::Vec3 const&, float const, ::Vec3 const);

    MCNAPI bool
    tessellateIndividualSeaPickleInWorld(::Tessellator&, ::Block const&, ::Vec3 const&, double const, ::Vec3 const);

    MCNAPI bool tessellateIndividualTurtleEggInWorld(
        ::Tessellator&,
        ::Block const&,
        ::Vec3 const&,
        ::Vec3 const,
        ::Vec3 const,
        int const
    );

    MCNAPI bool tessellateItemFrameInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, bool const);

    MCNAPI bool tessellateKelpInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateLadderInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateLanternBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateLecternBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateLeverInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void tessellateLightningRodGui(::Tessellator&, ::Block const&, ::BlockGraphics const&);

    MCNAPI bool tessellateLightningRodInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateLilypadInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateLiquidInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateMangrovePropaguleHangingInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateMangrovePropaguleInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, bool);

    MCNAPI bool tessellateMangroveRootInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateMultiFaceBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void tessellateNorth(::Tessellator&, ::Block const&, ::Vec3 const&, ::TextureUVCoordinateSet const&);

    MCNAPI bool tessellatePaleMossCarpetInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellatePistonInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellatePitcherCropInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellatePitcherPlantInWorld(::Tessellator&, ::Block const&, ::BlockShape const&, ::BlockPos const&);

    MCNAPI bool tessellatePointedDripstoneInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateRailInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateRepeaterInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateRowInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, bool const);

    MCNAPI void tessellateRowTexture(
        ::Tessellator&,
        ::Block const&,
        ::BlockPos const&,
        ::TextureUVCoordinateSet const&,
        float,
        float,
        float,
        bool const
    );

    MCNAPI void tessellateRowTexture(
        ::Tessellator&,
        ::TextureUVCoordinateSet const&,
        ::TextureUVCoordinateSet const&,
        ::TextureUVCoordinateSet const&,
        ::TextureUVCoordinateSet const&,
        float,
        float,
        float
    );

    MCNAPI bool tessellateScaffoldingBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void tessellateScaffoldingHorizontalPoleInWorld(
        ::Tessellator&,
        ::Block const&,
        ::TextureUVCoordinateSet const&,
        ::TextureUVCoordinateSet const&,
        ::BlockPos const&,
        ::Flip,
        ::Vec3 const&,
        bool const
    );

    MCNAPI bool tessellateSculkSensorBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateSculkShriekerInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateSeaPickleInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateSeagrassInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateShelfBlockInGui(::Tessellator&, ::Block const&);

    MCNAPI bool tessellateShelfBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void
    tessellateSimpleBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&, ::AirAndSimpleBlockBits const&);

    MCNAPI bool tessellateSlimeBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateSmallDripleafBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void tessellateSouth(::Tessellator&, ::Block const&, ::Vec3 const&, ::TextureUVCoordinateSet const&);

    MCNAPI bool tessellateSporeBlossomInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateStairsInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateStemInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void tessellateStemTexture(::Tessellator&, ::TextureUVCoordinateSet const&, float, float, float, float);

    MCNAPI bool tessellateStoneCutterBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateStructureVoidInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateSweetBerryBushBlockInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateTerracottaInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateTopSnowInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void tessellateTorch(::Tessellator&, ::Block const&, ::Vec3 const&, float, float, float);

    MCNAPI bool tessellateTorchInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateTrapdoorInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateTreeInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateTripwireHookInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateTripwireInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateTurtleEggInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateTwistingVinesInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateVaultInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateVineInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateWallInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI bool tessellateWeepingVinesInWorld(::Tessellator&, ::Block const&, ::BlockPos const&);

    MCNAPI void tessellateWest(::Tessellator&, ::Block const&, ::Vec3 const&, ::TextureUVCoordinateSet const&);

    MCNAPI void updateCache(::Block const&, ::BlockPos const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canRender(::BlockShape);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& TEXTURE_OFFSET();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource*);
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct UVOverride {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> pbrTextureDataHandle;
        ::ll::TypedStorage<4, 4, float>  u0;
        ::ll::TypedStorage<4, 4, float>  u1;
        ::ll::TypedStorage<4, 4, float>  v0;
        ::ll::TypedStorage<4, 4, float>  v1;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mRenderingExtra;
    ::ll::TypedStorage<1, 1, bool>                                                mUseNormals;
    ::ll::TypedStorage<1, 1, bool>                                                mTextureShiftEnabled;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                      mRegion;
    ::ll::TypedStorage<4, 8, ::mce::framebuilder::FrameLightingModelCapabilities> mLightingModelCapabilities;
    ::ll::TypedStorage<8, 96, ::TextureUVCoordinateSet>                           mFixedTexture;
    ::ll::TypedStorage<1, 1, bool>                                                mSupportsNewVertexFormat;
    ::ll::TypedStorage<1, 1, bool>                                                mUseFixedTexture;
    ::ll::TypedStorage<1, 1, bool>                                                mUseOccluder;
    ::ll::TypedStorage<1, 1, bool>                                                _tmpUseRegion;
    ::ll::TypedStorage<1, 1, bool>                                                mXFlipTexture;
    ::ll::TypedStorage<4, 4, int>                                                 mRenderingLayer;
    ::ll::TypedStorage<1, 1, bool>                                                mRenderingGUI;
    ::ll::TypedStorage<1, 1, bool>                                                mVersionPreTrailsAndTales;
    ::ll::TypedStorage<1, 1, bool>                                                mUseFixedColor;
    ::ll::TypedStorage<4, 96, ::std::array<::mce::Color, 6>>                      mFixedColors;
    ::ll::TypedStorage<1, 1, bool>                                                mApplyAmbientOcclusion;
    ::ll::TypedStorage<4, 4, ::BakedBlockLightType>                               mBakedLighting;
    ::ll::TypedStorage<1, 1, bool>                                                mForExport;
    ::ll::TypedStorage<1, 1, bool>                                                mUseCachedCalculation;
    ::ll::TypedStorage<4, 128, ::mce::Color[8]>                                   mAoColors;
    ::ll::TypedStorage<1, 8, ::BrightnessPair[4]>                                 mTc;
    ::ll::TypedStorage<1, 6, ::std::array<::Flip, 6>>                             mFlipFace;
    ::ll::TypedStorage<4, 120, ::std::array<::BlockTessellator::UVOverride, 6>>   mTextureOverride;
    ::ll::TypedStorage<8, 1000, ::Block const* [125]>                             mAmbientOcclusionCacheBlocks;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                 mItemMat;
    ::ll::TypedStorage<4, 24, ::AABB>                                             mCurrentShapeBB;
    ::ll::TypedStorage<1, 1, bool>                                                mCurrentShapeSet;
    ::ll::TypedStorage<8, 8, ::Block const*>                                      mCurrentShapeBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                         mCurrentShapeBlockPos;
    ::ll::TypedStorage<4, 4, float>                                               mCurrentScale;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::mce::Mesh>>            mBlockMeshes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockTessellatorBlockInWorld, ::mce::Mesh>> mInWorldBlockMeshes;
    ::ll::TypedStorage<8, 272032, ::BlockTessellatorCache>                                       mBlockCache;
    ::ll::TypedStorage<8, 64, ::std::function<::Block const&(::BlockPos const&)>>                mCachedGetBlock;
    ::ll::TypedStorage<8, 19288, ::BiomeTintCache>                                               mBiomeWeights;
    ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>>                                     mColorOverride;
    ::ll::TypedStorage<1, 1, bool>                                                               mForceOpaque;
    ::ll::TypedStorage<8, 128, ::BlockTessellatorCustomExtraData::Map>                           mBlockExtraDataMap;
    ::ll::TypedStorage<8, 32, ::BlockTessellator::LocalRegistry>                                 mLocalRegistry;
    ::ll::TypedStorage<8, 64, ::BlockGeoType::GeoTypeResolver>                                   mGeoTypeResolver;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTessellator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockTessellator(::BlockSource* level);

    MCAPI void _flipAllFaces(::Facing::Rotation rotation);

    MCAPI ::TextureUVCoordinateSet const& _getTexture(
        ::BlockPos const&      pos,
        ::Block const&         block,
        uchar                  face,
        int                    forcedVariant,
        ::BlockGraphics const* graphicsHint
    ) const;

    MCAPI void _modifyCurrentShapeAccordingToAttachmentDirection(::Direction::Type attachmentDir);

    MCAPI void _preparePolyCross(::Tessellator& tessellator, ::BlockPos const& p, ::Block const& block);

    MCAPI void _setBambooFencePostTexture(::TextureUVCoordinateSet const& bambooFenceTex);

    MCAPI void _setBambooFenceSlatTextureGui(
        ::TextureUVCoordinateSet const&              bambooFenceTex,
        ::BlockTessellator::BambooFenceSlatPieceType type
    );

    MCAPI void _tessellateAllFaces(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void _tessellateBambooFenceGui(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        bool              isInventoryIcon,
        float             lightMultiplier,
        float             alphaMultiplier,
        float             c10,
        float             c2
    );

    MCAPI void _tessellateBambooFenceSlatsInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        uchar             facing
    );

    MCAPI bool _tessellateBlockInWorldFlat(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      pos,
        ::mce::Color const&    base,
        ::BlockOccluder*       occluder,
        ::std::bitset<6> const faces,
        int                    forcedVariant
    );

    MCAPI bool _tessellateBlockInWorldWithAmbienceOcclusion(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos             p,
        ::mce::Color const&    base,
        ::BlockOccluder*       occluder,
        ::std::bitset<6> const faces,
        int                    forcedVariant
    );

    MCAPI void _tessellateCalibratedSculkSensorAmethystCrystalInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p
    );

    MCAPI void _tessellateFenceGateGui(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        bool              isInventoryIcon,
        float             lightMultiplier,
        float             alphaMultiplier,
        float             c10,
        float             c2
    );

    MCAPI void _tessellateForInventory(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        float             lightMultiplier,
        float             alphaMultiplier,
        float             c10,
        float             c2
    );

    MCAPI void _tessellateSculkSensorTendrilsInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        uchar             tessellationType
    );

    MCAPI void _tex1(::Tessellator& tessellator, ::Vec2 const& uv);

    MCAPI void
    _trySetFenceGateTexture(::Block const& block, ::BlockPos const& p, ::BlockTessellator::FenceGatePieceType type);

    MCAPI void appendTessellatedBlock(::Tessellator& tessellator, ::Block const& block);

    MCAPI void clearBlockCache();

    MCAPI ::AABB const& getCurrentShape();

    MCAPI ::mce::Mesh& getMeshForBlock(::Tessellator& tessellator, ::Block const& block);

    MCAPI ::mce::Mesh& getMeshForBlockInWorld(
        ::Tessellator&        tessellator,
        ::Block const&        block,
        ::BlockPos&           blockPos,
        ::BlockRenderLayer    layer,
        void const*           owner,
        bool                  useOccluder,
        bool                  useRegion,
        ::LightTexture const& lightTexture
    );

    MCAPI float getWaterHeight(::BlockPos const& pos, ::Material const& material, ::BlockPos const& originalBlockPos);

    MCAPI void moveCurrentShape(::Vec3 const& offset);

    MCAPI void renderGuiBlock(
        ::ScreenContext&                     screenContext,
        ::Block const&                       block,
        ::BlockGraphics const&               blockGraphics,
        ::mce::TexturePtr const&             texture,
        float                                lightMultiplier,
        float                                alphaMultiplier,
        ::OffscreenCaptureDescription const& capture
    );

    MCAPI bool rotateCommandBlockFaces(::Block const& block);

    MCAPI void setRegion(::BlockSource& region);

    MCAPI void tessellateAll(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& tex
    );

    MCAPI bool tessellateAmethystCluster(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool
    tessellateAnvilInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos, bool render);

    MCAPI float tessellateAnvilPiece(
        ::Tessellator&        tessellator,
        ::Block const&        block,
        ::BlockPos const&     p,
        ::AnvilPart           part,
        float                 bottom,
        float                 width,
        float                 height,
        float                 length,
        bool                  rotate,
        bool                  render,
        ::buffer_span<::Flip> faces
    );

    MCAPI bool tessellateAzaleaBlockInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool              forFlowerPot
    );

    MCAPI bool tessellateBambooBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool
    tessellateBambooSaplingBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateBambooStalkBlockInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool              forFlowerPot
    );

    MCAPI void tessellateBambooStemInWorld(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      pos,
        ::BlockGraphics const& blockGraphics,
        float const            diameter,
        float const            sideVariantOffset,
        float const            verticalPortion
    );

    MCAPI bool tessellateBeaconInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateBellBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void tessellateBellBlockStandingLegInWorld(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      pos,
        ::BlockGraphics const& blockGraphics,
        bool const             rotate
    );

    MCAPI bool tessellateBigDripleafBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateBlockInWorld(
        ::Tessellator&                 tessellator,
        ::Block const&                 block,
        ::BlockPos const&              pos,
        ::std::bitset<6> const         faces,
        ::AirAndSimpleBlockBits const* airAndSimpleBlocks
    );

    MCAPI bool tessellateBrewingStandInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateBubbleColumnInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateCactusInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool
    tessellateCalibratedSculkSensorBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool
    tessellateCameraFacingSpriteInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateCampfireBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateCandleCakeInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateCandleInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateCauldronInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateCaveVinesInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateChainInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateChemistryTableInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool
    tessellateChiseledBookshelfBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool
    tessellateChorusFlowerInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos, bool render);

    MCAPI bool tessellateChorusPlantInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateCocoaInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateCommandBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateComparatorInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateComposterBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void tessellateCompoundCreatorFace(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& tex,
        ::Vec2                          uv0,
        ::Vec2                          uv1,
        int const                       face,
        bool                            inward,
        ::Matrix*                       mat
    );

    MCAPI bool tessellateCoralFanHangInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateCoralFanInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateCrossInWorld(
        ::Tessellator&                                     tessellator,
        ::Block const&                                     block,
        ::BlockPos const&                                  p,
        bool const                                         forceDoubleSide,
        ::BlockTessellator::CrossTextureReverseSideMapping reverseSideMapping,
        float                                              scale,
        ::BlockTessellator::CrossTextureWidth              width
    );

    MCAPI void tessellateCrossTexture(
        ::Tessellator&                                     tessellator,
        ::TextureUVCoordinateSet const&                    tex1,
        ::TextureUVCoordinateSet const&                    tex2,
        ::Vec3 const&                                      pos,
        ::Block const&                                     block,
        float                                              scale,
        ::BlockTessellator::CrossTextureWidth              width,
        ::BlockTessellator::CrossTextureReverseSideMapping reverseSideMapping,
        bool const                                         forceDoubleSided
    );

    MCAPI void tessellateCrossTextureUp(
        ::Tessellator&                                     tessellator,
        ::TextureUVCoordinateSet const&                    tex1,
        ::TextureUVCoordinateSet const&                    tex2,
        ::Vec3 const&                                      pos,
        bool const                                         renderBothSides,
        ::Block const&                                     block,
        float                                              scale,
        ::BlockTessellator::CrossTextureWidth              width,
        ::BlockTessellator::CrossTextureReverseSideMapping reverseSideMapping
    );

    MCAPI bool tessellateDiodeInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateDoorInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateDoublePlantInWorld(
        ::Tessellator&                                     tessellator,
        ::Block const&                                     block,
        ::BlockShape const                                 blockShape,
        ::BlockPos const&                                  p,
        bool const                                         forceDoubleSided,
        ::Vec3                                             offset,
        bool                                               applyAmbientOcclusion,
        ::BlockTessellator::CrossTextureReverseSideMapping reverseSideMapping,
        ::BlockTessellator::CrossTextureWidth              width
    );

    MCAPI bool tessellateDoubleThinFenceInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        bool              singleSide
    );

    MCAPI bool
    tessellateDriedGhastInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& position);

    MCAPI bool tessellateDriedKelpBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateDustInWorld(::Tessellator& tessellator, ::Block const& b, ::BlockPos const& p);

    MCAPI void tessellateEast(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCAPI bool tessellateEndGatewayInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateEndPortalFrameInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateEndPortalInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void
    tessellateEndRodAppended(::Tessellator& tessellator, ::Block const& block, ::BlockGraphics const& blockGraphics);

    MCAPI void
    tessellateEndRodGui(::Tessellator& tessellator, ::Block const& block, ::BlockGraphics const& blockGraphics);

    MCAPI bool tessellateEndRodInWorld(::Tessellator& tessellator, ::Block const& b, ::BlockPos const& p);

    MCAPI bool tessellateEyeblossomInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateFaceDown(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCAPI void tessellateFaceUp(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCAPI void tessellateFaceWithUVs(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& tex,
        float const                     u0,
        float const                     v0,
        float const                     u1,
        float const                     v1,
        int const                       face
    );

    MCAPI bool tessellateFacingBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateFenceGateInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateFenceInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateFireInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos p);

    MCAPI bool tessellateFireflyBushInWorld(
        ::Tessellator&         tessellator,
        ::Block const&         block,
        ::BlockPos const&      pos,
        ::BlockGraphics const& blockGraphics
    );

    MCAPI bool tessellateFlowerBedBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateFlowerPotInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateFrogSpawnInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool
    tessellateGrindstoneBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void tessellateGrindstoneLegInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool              attached,
        bool              rotate,
        ::Direction::Type attachmentDir
    );

    MCAPI bool tessellateHoneyBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateHopperInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool
    tessellateHopperInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos, bool render);

    MCAPI bool
    tessellateInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos, bool useCalcWithCache);

    MCAPI bool tessellateIndividualCandleInWorld(
        ::Tessellator& tessellator,
        ::Block const& block,
        ::Vec3 const&  p,
        float const    height,
        ::Vec3 const   offset
    );

    MCAPI bool tessellateIndividualSeaPickleInWorld(
        ::Tessellator& tessellator,
        ::Block const& block,
        ::Vec3 const&  p,
        double const   height,
        ::Vec3 const   offset
    );

    MCAPI bool tessellateIndividualTurtleEggInWorld(
        ::Tessellator& tessellator,
        ::Block const& block,
        ::Vec3 const&  p,
        ::Vec3 const   from,
        ::Vec3 const   to,
        int const      eggNum
    );

    MCAPI bool tessellateItemFrameInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& pos,
        bool const        ignoreLighting
    );

    MCAPI bool tessellateKelpInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateLadderInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateLanternBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateLecternBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateLeverInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void
    tessellateLightningRodGui(::Tessellator& tessellator, ::Block const& block, ::BlockGraphics const& blockGraphics);

    MCAPI bool tessellateLightningRodInWorld(::Tessellator& tessellator, ::Block const& b, ::BlockPos const& p);

    MCAPI bool tessellateLilypadInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateLiquidInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool
    tessellateMangrovePropaguleHangingInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateMangrovePropaguleInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        bool              forFlowerPot
    );

    MCAPI bool tessellateMangroveRootInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateMultiFaceBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateNorth(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCAPI bool tessellatePaleMossCarpetInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellatePistonInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellatePitcherCropInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellatePitcherPlantInWorld(
        ::Tessellator&      tessellator,
        ::Block const&      block,
        ::BlockShape const& blockShape,
        ::BlockPos const&   p
    );

    MCAPI bool tessellatePointedDripstoneInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateRailInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateRepeaterInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateRowInWorld(
        ::Tessellator&    tessellator,
        ::Block const&    block,
        ::BlockPos const& p,
        bool const        forceDoubleSide
    );

    MCAPI void tessellateRowTexture(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::BlockPos const&               p,
        ::TextureUVCoordinateSet const& tex,
        float                           x,
        float                           y,
        float                           z,
        bool const                      forceDoubleSide
    );

    MCAPI void tessellateRowTexture(
        ::Tessellator&                  tessellator,
        ::TextureUVCoordinateSet const& tex1,
        ::TextureUVCoordinateSet const& tex2,
        ::TextureUVCoordinateSet const& tex3,
        ::TextureUVCoordinateSet const& tex4,
        float                           x,
        float                           y,
        float                           z
    );

    MCAPI bool
    tessellateScaffoldingBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI void tessellateScaffoldingHorizontalPoleInWorld(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::TextureUVCoordinateSet const& side,
        ::TextureUVCoordinateSet const& bottom,
        ::BlockPos const&               blockPos,
        ::Flip                          faceFlip,
        ::Vec3 const&                   offset,
        bool const                      isSupportPole
    );

    MCAPI void tessellateScaffoldingVerticalPoleInWorld(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::TextureUVCoordinateSet const& tex,
        ::BlockPos const&               pos,
        ::Flip const                    flip
    );

    MCAPI bool tessellateSculkSensorBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateSculkShriekerInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateSeaPickleInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateSeagrassInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateShelfBlockInGui(::Tessellator& tessellator, ::Block const& block);

    MCAPI bool tessellateShelfBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateSimpleBlockInWorld(
        ::Tessellator&                 tessellator,
        ::Block const&                 block,
        ::BlockPos const&              pos,
        ::AirAndSimpleBlockBits const& airAndSimpleBlocks
    );

    MCAPI bool tessellateSlimeBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool
    tessellateSmallDripleafBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateSouth(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCAPI bool tessellateSporeBlossomInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateStairsInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateStemInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateStemTexture(
        ::Tessellator&                  tessellator,
        ::TextureUVCoordinateSet const& tex,
        float                           h,
        float                           x,
        float                           y,
        float                           z
    );

    MCAPI bool
    tessellateStoneCutterBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateStructureVoidInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool
    tessellateSweetBerryBushBlockInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateTerracottaInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateTopSnowInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateTorch(
        ::Tessellator& tessellator,
        ::Block const& block,
        ::Vec3 const&  pos,
        float          xxa,
        float          zza,
        float          floorHeight
    );

    MCAPI bool tessellateTorchInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateTrapdoorInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateTreeInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateTripwireHookInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateTripwireInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateTurtleEggInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateTwistingVinesInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateVaultInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& pos);

    MCAPI bool tessellateVineInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateWallInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI bool tessellateWeepingVinesInWorld(::Tessellator& tessellator, ::Block const& block, ::BlockPos const& p);

    MCAPI void tessellateWest(
        ::Tessellator&                  tessellator,
        ::Block const&                  block,
        ::Vec3 const&                   p,
        ::TextureUVCoordinateSet const& intex
    );

    MCAPI ~BlockTessellator();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TextureUVCoordinateSet const& _getMappedTexture(::Block const& block, uchar face);

    MCAPI static bool canRender(::BlockShape blockShape);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockSource* level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct UVOverride {};
#endif // @header-generator platform
#endif // @header-generator platform
};
