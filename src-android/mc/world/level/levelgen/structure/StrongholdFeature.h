#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/structure/StructureFeature.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
class Dimension;
class HashedString;
class IPreliminarySurfaceProvider;
class Random;
class StructureStart;
class VillageFeature;
struct GridPos;
// clang-format on

class StrongholdFeature : public ::StructureFeature {
public:
    // StrongholdFeature inner types declare
    // clang-format off
    struct StrongholdResult;
    // clang-format on

    // StrongholdFeature inner types define
    struct StrongholdResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>       success;
        ::ll::TypedStorage<8, 8, ::ChunkPos> location;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                   mIsSpotSelected;
    ::ll::TypedStorage<8, 24, std::vector<ChunkPos>> mSelectedChunks;
    ::ll::TypedStorage<8, 8, ::VillageFeature*>      mVillages;
    ::ll::TypedStorage<4, 40, std::mutex>            mPositionMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    StrongholdFeature& operator=(StrongholdFeature const&);
    StrongholdFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StrongholdFeature();

    virtual bool getNearestGeneratedFeature(::Dimension&, ::BiomeSource const&, ::BlockPos const&, ::BlockPos&, ::IPreliminarySurfaceProvider const&, bool, std::optional<HashedString> const&);

    virtual bool isFeatureChunk(::BiomeSource const&, ::Random&, ::ChunkPos const&, uint, ::IPreliminarySurfaceProvider const&, ::Dimension const&);

    virtual std::unique_ptr<StructureStart> createStructureStart(::Dimension&, ::BiomeSource const&, ::Random&, ::ChunkPos const&, ::IPreliminarySurfaceProvider const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StrongholdFeature(::VillageFeature*, uint);

    MCNAPI void
    generatePositions(::Random&, ::BiomeSource const&, uint, ::IPreliminarySurfaceProvider const&, ::Dimension const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BlockPos const& START_OFFSET();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::VillageFeature*, uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $getNearestGeneratedFeature(
        ::Dimension&,
        ::BiomeSource const&,
        ::BlockPos const&,
        ::BlockPos&,
        ::IPreliminarySurfaceProvider const&,
        bool,
        std::optional<HashedString> const&
    );

    MCNAPI bool $isFeatureChunk(
        ::BiomeSource const&,
        ::Random&,
        ::ChunkPos const&,
        uint,
        ::IPreliminarySurfaceProvider const&,
        ::Dimension const&
    );

    MCNAPI std::unique_ptr<StructureStart> $createStructureStart(
        ::Dimension&,
        ::BiomeSource const&,
        ::Random&,
        ::ChunkPos const&,
        ::IPreliminarySurfaceProvider const&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
