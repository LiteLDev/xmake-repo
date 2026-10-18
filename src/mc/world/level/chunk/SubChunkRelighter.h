#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/SubChunkBrightnessStorage.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/chunk/SubChunkLightIndex.h"
#include "mc/world/level/chunk/SubtractiveLightInfo.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockSource;
class LevelChunk;
class Pos;
struct Brightness;
struct SubChunk;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SubChunkLightIndex;
#endif // @header-generator platform
struct SubChunkLightUpdate;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SubtractiveLightInfo;
#endif // @header-generator platform
// clang-format on

class SubChunkRelighter {
public:
    // SubChunkRelighter inner types define
    enum class AbsorptionBehavior : int {
        Default              = 0,
        SkyLightIgnoresWater = 1,
    };

    enum class SubChunkToDoBitsClearMode : int {
        AllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits = 0,
        SetOuterEdgeOfComputationBits                            = 1,
    };

    using LightPair = ::SubChunkBrightnessStorage::LightPair;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                    mNeedToResetToDoBits;
    ::ll::TypedStorage<8, 24576, std::bitset<196608>>                 mToDo;
    ::ll::TypedStorage<1, 4096, std::array<uchar, 4096>>              mOldAbsorption;
    ::ll::UntypedStorage<8, 768>                                      mAdditiveBlocksToProcess;
    ::ll::TypedStorage<8, 384, std::vector<SubChunkLightIndex>[16]>   mEdgeBlocksToProcess;
    ::ll::TypedStorage<8, 384, std::vector<SubChunkLightIndex>[16]>   mBlocksToProcess;
    ::ll::TypedStorage<8, 24, std::vector<SubChunkLightIndex>>        mAbsorptionBlocksToProcess;
    ::ll::TypedStorage<8, 48, std::vector<SubtractiveLightInfo>[2]>   mSubtractiveBlocks;
    ::ll::UntypedStorage<8, 384>                                      mSubChunkPtrArray;
    ::ll::UntypedStorage<1, 48>                                       mSubChunkTouched;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                              mCenterChunkPos;
    ::ll::TypedStorage<8, 8, ulong>                                   mCenterSubChunkIndex;
    ::ll::TypedStorage<1, 1, bool>                                    mOriginalLighting;
    ::ll::TypedStorage<4, 4, ::SubChunkRelighter::AbsorptionBehavior> mAbsorptionBehavior;
    ::ll::UntypedStorage<1, 1>                                        mDefaultLightPair;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                         mNeedToResetToDoBits;
    ::ll::TypedStorage<8, 24576, ::std::bitset<196608>>                    mToDo;
    ::ll::TypedStorage<1, 4096, ::std::array<uchar, 4096>>                 mOldAbsorption;
    ::ll::TypedStorage<8, 768, ::std::vector<::SubChunkLightIndex>[2][16]> mAdditiveBlocksToProcess;
    ::ll::TypedStorage<8, 384, ::std::vector<::SubChunkLightIndex>[16]>    mEdgeBlocksToProcess;
    ::ll::TypedStorage<8, 384, ::std::vector<::SubChunkLightIndex>[16]>    mBlocksToProcess;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkLightIndex>>         mAbsorptionBlocksToProcess;
    ::ll::TypedStorage<8, 48, ::std::vector<::SubtractiveLightInfo>[2]>    mSubtractiveBlocks;
    ::ll::TypedStorage<8, 384, ::SubChunk* [3][4][4]>                      mSubChunkPtrArray;
    ::ll::TypedStorage<1, 48, bool[3][4][4]>                               mSubChunkTouched;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                   mCenterChunkPos;
    ::ll::TypedStorage<8, 8, uint64>                                       mCenterSubChunkIndex;
    ::ll::TypedStorage<1, 1, bool>                                         mOriginalLighting;
    ::ll::TypedStorage<4, 4, ::SubChunkRelighter::AbsorptionBehavior>      mAbsorptionBehavior;
    ::ll::TypedStorage<1, 1, ::SubChunkBrightnessStorage::LightPair>       mDefaultLightPair;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkRelighter();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    SubChunkRelighter(::IBlockSource&, ulong, ::ChunkPos const&, ::SubChunkRelighter::AbsorptionBehavior, bool, bool);

    MCNAPI void _checkEdgeForSubtractiveBlockLightProcessing(::SubChunkLightIndex const&);

    MCNAPI void _checkEdgeForSubtractiveSkyLightProcessing(::SubChunkLightIndex const&);

    MCNAPI ::SubChunk* _getBlock(::SubChunkLightIndex const, ::Block const*&, ::Block const*&) const;

    MCNAPI ::SubChunk* _getBlock(::SubChunkLightIndex const, ::Block const*&, ::Block const*&, uint&) const;

    MCNAPI void _propagateBlockLight();

    MCNAPI void _propagateBlockLight(::SubChunkLightIndex, uchar);

    MCNAPI void _propagateSkyLight();

    MCNAPI void _propagateSubtractiveBlockLight();

    MCNAPI void _propagateSubtractiveSkyLight();

    MCNAPI void _setLightHelper(
        ::SubChunkLightIndex const,
        ::Brightness const,
        ::Brightness const,
        ::Brightness const,
        ::Brightness const,
        uint,
        uint
#else // @header-generator platform
    MCAPI SubChunkRelighter(
        ::IBlockSource&                         source,
        uint64                                  centerSubChunkIndex,
        ::ChunkPos const&                       centerChunkPos,
        ::SubChunkRelighter::AbsorptionBehavior absorptionBehavior,
        bool                                    originalLighting,
        bool                                    useFullyDarkSubchunk
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setPropagatedBlockLightValue(::SubChunkLightIndex, uchar);
#else // @header-generator platform
    MCAPI void _checkEdgeForSubtractiveBlockLightProcessing(::SubChunkLightIndex const& coordIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setPropagatedSkyLightValue(::SubChunkLightIndex, uchar);
#else // @header-generator platform
    MCAPI void _checkEdgeForSubtractiveSkyLightProcessing(::SubChunkLightIndex const& coordIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setSkyLight(
        ::SubChunkLightIndex const,
        ::Brightness const,
        ::Brightness const,
        ::Brightness const,
        ::Brightness const
#else // @header-generator platform
    MCAPI ::SubChunk* _dirtySubChunk(::SubChunkLightIndex const coordIndex, uint& subChunkIndex);

    MCAPI ::SubChunk*
    _getBlock(::SubChunkLightIndex coordIndex, ::Block const*& block, ::Block const*& extraBlock) const;

    MCAPI ::SubChunk* _getBlock(
        ::SubChunkLightIndex const coordIndex,
        ::Block const*&            block,
        ::Block const*&            extraBlock,
        uint&                      subChunkIndex
    ) const;

    MCAPI void _propagateBlockLight();

    MCAPI void _propagateSkyLight();

    MCAPI void _propagateSubtractiveBlockLight();

    MCAPI void _propagateSubtractiveSkyLight();

    MCAPI void _setLightHelper(
        ::SubChunkLightIndex coordIndex,
        ::Brightness         oldBrightness,
        ::Brightness         newBrightness,
        ::Brightness         oldAbsorption,
        ::Brightness         newAbsorption,
        uint                 lightType,
        uint                 subChunkIndex
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void getBlock(::Pos const&, ::Block const*&, ::Block const*&);
#else // @header-generator platform
    MCAPI void _setPropagatedBlockLightValue(::SubChunkLightIndex coordIndex, uchar brightness);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Pos getCentralSubchunkOrigin();
#else // @header-generator platform
    MCAPI void _setPropagatedSkyLightValue(::SubChunkLightIndex coordIndex, uchar brightness);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SubChunkBrightnessStorage::LightPair getLightPair(::Pos const&) const;
#else // @header-generator platform
    MCAPI void _setSkyLight(
        ::SubChunkLightIndex coordIndex,
        ::Brightness         oldBrightness,
        ::Brightness         newBrightness,
        ::Brightness         oldAbsorption,
        ::Brightness         newAbsorption
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SubChunkBrightnessStorage::LightPair
    getLightPairWithPlaceholderCheck(::Pos const&, ::SubChunkBrightnessStorage::LightPair const&) const;
#else // @header-generator platform
    MCAPI ::SubChunkBrightnessStorage::LightPair getLightPair(::Pos const& coord) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void relightSubChunk(::LevelChunk const&, std::vector<SubChunkLightUpdate> const&, std::vector<BlockPos>&);
#else // @header-generator platform
    MCAPI ::SubChunkBrightnessStorage::LightPair getLightPairWithPlaceholderCheck(
        ::Pos const&                                  coord,
        ::SubChunkBrightnessStorage::LightPair const& defaultLightPairIfPlaceholderSubChunk
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    setBlockLight(::Pos const&, ::Brightness const, ::Brightness const, ::Brightness const, ::Brightness const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void relightSubChunk(
        ::LevelChunk const&                         levelChunk,
        ::std::vector<::SubChunkLightUpdate> const& alteredBlockList,
        ::std::vector<::BlockPos>&                  brightnessChangedList
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    setSkyLight(::Pos const&, ::Brightness const, ::Brightness const, ::Brightness const, ::Brightness const);

    MCNAPI void update();

    MCNAPI ~SubChunkRelighter();
#else // @header-generator platform
    MCAPI ~SubChunkRelighter();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initializeStatics();
#else // @header-generator platform
    MCAPI static void initializeStatics();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void shutdownStatics();
#else // @header-generator platform
    MCAPI static void shutdownStatics();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::bitset<196608>& mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();
#else // @header-generator platform
    MCAPI static ::std::bitset<196608>& mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::bitset<196608>& mOuterEdgeOfComputationBits();
#else // @header-generator platform
    MCAPI static ::std::bitset<196608>& mOuterEdgeOfComputationBits();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<SubChunk>& sFullyDarkSubChunk();
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::SubChunk>& sFullyDarkSubChunk();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<SubChunk>& sFullyLitSubChunk();
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::SubChunk>& sFullyLitSubChunk();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::IBlockSource&, ulong, ::ChunkPos const&, ::SubChunkRelighter::AbsorptionBehavior, bool, bool);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::IBlockSource&                         source,
        uint64                                  centerSubChunkIndex,
        ::ChunkPos const&                       centerChunkPos,
        ::SubChunkRelighter::AbsorptionBehavior absorptionBehavior,
        bool                                    originalLighting,
        bool                                    useFullyDarkSubchunk
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
