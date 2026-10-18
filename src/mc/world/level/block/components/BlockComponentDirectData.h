#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Brightness.h"
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/shared_types/legacy/Facing.h"
#include "mc/deps/shared_types/v1_26_0/block/DetectionRule.h"
#include "mc/deps/shared_types/v1_26_20/block/LavaFlammable.h"
#include "mc/deps/voxel_shapes/RegistryHandle.h"
#include "mc/world/level/block/BurnOdds.h"
#include "mc/world/level/block/FlameOdds.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockTransformationComponent;
struct BlockCollisionBoxComponent;
struct BlockDestructibleByMiningComponent;
struct BlockGeometryComponent;
struct BlockRedstoneComponent;
struct BlockSelectionBoxComponent;
// clang-format on

struct BlockComponentDirectData {
public:
    // BlockComponentDirectData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum LayerBitMask : uint {
        NONE      = 0,
        INIT      = 1,
        RENDERING = 2,
#else // @header-generator platform
    enum class LayerBitMask : int {
        None      = 0,
        Init      = 1,
        Rendering = 2,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using FaceShapeHandles =
        ::Bedrock::DenseEnumMap<SharedTypes::Facing, VoxelShapes::RegistryHandle, (SharedTypes::Facing)6>;
#else // @header-generator platform
    using FaceShapeHandles = ::Bedrock::DenseEnumMap<::SharedTypes::Facing, ::VoxelShapes::RegistryHandle, 6>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockTransformationComponent const*>       mBlockTransformationComponent;
    ::ll::TypedStorage<8, 8, ::BlockCollisionBoxComponent const*>         mBlockCollisionBoxComponent;
    ::ll::TypedStorage<8, 8, ::BlockSelectionBoxComponent const*>         mBlockSelectionBoxComponent;
    ::ll::TypedStorage<8, 8, ::BlockRedstoneComponent const*>             mBlockRedstoneComponent;
    ::ll::TypedStorage<8, 8, ::BlockGeometryComponent const*>             mBlockGeometryComponent;
    ::ll::TypedStorage<1, 1, bool>                                        mIsFullBlock;
    ::ll::TypedStorage<1, 1, bool>                                        mUseNewTessellation;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedsLegacyTopRotation;
    ::ll::TypedStorage<1, 1, bool>                                        mIsOpaqueFullBlock;
    ::ll::TypedStorage<1, 1, ::Brightness>                                mLightEmission;
    ::ll::TypedStorage<1, 1, ::Brightness>                                mLight;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::LavaFlammable>      mLavaFlammable;
    ::ll::TypedStorage<2, 2, ::FlameOdds>                                 mFlameOdds;
    ::ll::TypedStorage<2, 2, ::BurnOdds>                                  mBurnOdds;
    ::ll::TypedStorage<4, 4, float>                                       mExplosionResistance;
    ::ll::TypedStorage<4, 4, float>                                       mFriction;
    ::ll::TypedStorage<4, 4, float>                                       mDestroySpeed;
    ::ll::TypedStorage<1, 5, ::SharedTypes::v1_26_0::DetectionRule>       mWaterDetectionRule;
    ::ll::TypedStorage<2, 2, ::VoxelShapes::RegistryHandle>               mOcclusionShapeHandle;
    ::ll::UntypedStorage<2, 12>                                           mOcclusionShapeHandlesByFace;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockTransformationComponent const*>  mBlockTransformationComponent;
    ::ll::TypedStorage<8, 8, ::BlockCollisionBoxComponent const*>    mBlockCollisionBoxComponent;
    ::ll::TypedStorage<8, 8, ::BlockSelectionBoxComponent const*>    mBlockSelectionBoxComponent;
    ::ll::TypedStorage<8, 8, ::BlockRedstoneComponent const*>        mBlockRedstoneComponent;
    ::ll::TypedStorage<8, 8, ::BlockGeometryComponent const*>        mBlockGeometryComponent;
    ::ll::TypedStorage<1, 1, bool>                                   mIsFullBlock;
    ::ll::TypedStorage<1, 1, bool>                                   mUseNewTessellation;
    ::ll::TypedStorage<1, 1, bool>                                   mNeedsLegacyTopRotation;
    ::ll::TypedStorage<1, 1, bool>                                   mIsOpaqueFullBlock;
    ::ll::TypedStorage<1, 1, ::Brightness>                           mLightEmission;
    ::ll::TypedStorage<1, 1, ::Brightness>                           mLight;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::LavaFlammable> mLavaFlammable;
    ::ll::TypedStorage<2, 2, ::FlameOdds>                            mFlameOdds;
    ::ll::TypedStorage<2, 2, ::BurnOdds>                             mBurnOdds;
    ::ll::TypedStorage<4, 4, float>                                  mExplosionResistance;
    ::ll::TypedStorage<4, 4, float>                                  mFriction;
    ::ll::TypedStorage<4, 4, float>                                  mDestroySpeed;
    ::ll::TypedStorage<1, 5, ::SharedTypes::v1_26_0::DetectionRule>  mWaterDetectionRule;
    ::ll::TypedStorage<2, 2, ::VoxelShapes::RegistryHandle>          mOcclusionShapeHandle;
    ::ll::TypedStorage<2, 12, ::Bedrock::DenseEnumMap<::SharedTypes::Facing, ::VoxelShapes::RegistryHandle, 6>>
                                                                          mOcclusionShapeHandlesByFace;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::BlockComponentDirectData::LayerBitMask>    mFinalized;
    ::ll::TypedStorage<8, 8, ::BlockDestructibleByMiningComponent const*> mDestructibleByMiningComponent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _finalizeInit(::Block const&);

    MCNAPI bool _useNewTessellationInternal() const;

    MCNAPI ::BlockCollisionBoxComponent const* blockCollisionBoxComponent() const;

    MCNAPI ::BlockGeometryComponent const* blockGeometryComponent() const;

    MCNAPI ::BlockRedstoneComponent const* blockRedstoneComponent() const;

    MCNAPI ::BlockSelectionBoxComponent const* blockSelectionBoxComponent() const;

    MCNAPI ::BlockTransformationComponent const* blockTransformationComponent() const;

    MCNAPI ::BlockDestructibleByMiningComponent const* destructibleByMiningComponent() const;

    MCNAPI void finalize(::Block const&, ::BlockComponentDirectData::LayerBitMask);

    MCNAPI int getBurnOdds() const;

    MCNAPI float getDestroySpeed() const;

    MCNAPI float getExplosionResistance() const;

    MCNAPI int getFlameOdds() const;

    MCNAPI float getFriction() const;

    MCNAPI ::VoxelShapes::RegistryHandle getOcclusionFaceShapeHandle(uchar const) const;

    MCNAPI ::VoxelShapes::RegistryHandle getOcclusionShapeHandle() const;

    MCNAPI ::SharedTypes::v1_26_0::DetectionRule getWaterDetectionRule() const;

    MCNAPI bool isFinalized(::BlockComponentDirectData::LayerBitMask) const;

    MCNAPI bool isFullBlockGeometry() const;

    MCNAPI bool isLavaFlammable() const;

    MCNAPI bool isOpaqueFullBlock() const;

    MCNAPI ::Brightness light() const;

    MCNAPI ::Brightness lightEmission() const;

    MCNAPI void setUseNewTessellation(bool);
#else // @header-generator platform
    MCAPI void _finalizeInit(::Block const& block);
#endif // @header-generator platform
    // NOLINTEND
};
