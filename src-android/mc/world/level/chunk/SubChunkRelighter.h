#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/SubChunkBrightnessStorage.h"
#include "mc/world/level/chunk/SubChunkLightIndex.h"
#include "mc/world/level/chunk/SubtractiveLightInfo.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockSource;
class LevelChunk;
class Pos;
struct Brightness;
struct SubChunk;
struct SubChunkLightUpdate;
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
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkRelighter();

public:
    // member functions
    // NOLINTBEGIN
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
    );

    MCNAPI void _setPropagatedBlockLightValue(::SubChunkLightIndex, uchar);

    MCNAPI void _setPropagatedSkyLightValue(::SubChunkLightIndex, uchar);

    MCNAPI void _setSkyLight(
        ::SubChunkLightIndex const,
        ::Brightness const,
        ::Brightness const,
        ::Brightness const,
        ::Brightness const
    );

    MCNAPI void getBlock(::Pos const&, ::Block const*&, ::Block const*&);

    MCNAPI ::Pos getCentralSubchunkOrigin();

    MCNAPI ::SubChunkBrightnessStorage::LightPair getLightPair(::Pos const&) const;

    MCNAPI ::SubChunkBrightnessStorage::LightPair
    getLightPairWithPlaceholderCheck(::Pos const&, ::SubChunkBrightnessStorage::LightPair const&) const;

    MCNAPI void relightSubChunk(::LevelChunk const&, std::vector<SubChunkLightUpdate> const&, std::vector<BlockPos>&);

    MCNAPI void
    setBlockLight(::Pos const&, ::Brightness const, ::Brightness const, ::Brightness const, ::Brightness const);

    MCNAPI void
    setSkyLight(::Pos const&, ::Brightness const, ::Brightness const, ::Brightness const, ::Brightness const);

    MCNAPI void update();

    MCNAPI ~SubChunkRelighter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void initializeStatics();

    MCNAPI static void shutdownStatics();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::bitset<196608>& mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();

    MCNAPI static std::bitset<196608>& mOuterEdgeOfComputationBits();

    MCNAPI static std::unique_ptr<SubChunk>& sFullyDarkSubChunk();

    MCNAPI static std::unique_ptr<SubChunk>& sFullyLitSubChunk();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IBlockSource&, ulong, ::ChunkPos const&, ::SubChunkRelighter::AbsorptionBehavior, bool, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
