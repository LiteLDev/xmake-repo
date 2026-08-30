#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/levelgen/structure/StructureFeature.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
class ChunkPos;
class Dimension;
class HashedString;
class IPreliminarySurfaceProvider;
class Random;
class StructureStart;
// clang-format on

class WoodlandMansionFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                       mFeatureSpacing;
    ::ll::TypedStorage<4, 4, int>                       mMinFeatureSeparation;
    ::ll::TypedStorage<8, 24, std::vector<BiomeIdType>> mAllowedBiomes;
    // NOLINTEND

public:
    // prevent constructor by default
    WoodlandMansionFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WoodlandMansionFeature();

    virtual bool shouldPostProcessMobs() const;

    virtual ::gsl::span<const BiomeIdType> getRequiredBiomes() const;

    virtual bool getNearestGeneratedFeature(::Dimension&, ::BiomeSource const&, ::BlockPos const&, ::BlockPos&, ::IPreliminarySurfaceProvider const&, bool, std::optional<HashedString> const&);

    virtual bool isFeatureChunk(::BiomeSource const&, ::Random&, ::ChunkPos const&, uint, ::IPreliminarySurfaceProvider const&, ::Dimension const&);

    virtual std::unique_ptr<StructureStart> createStructureStart(::Dimension&, ::BiomeSource const&, ::Random&, ::ChunkPos const&, ::IPreliminarySurfaceProvider const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WoodlandMansionFeature(uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $shouldPostProcessMobs() const;

    MCNAPI ::gsl::span<const BiomeIdType> $getRequiredBiomes() const;

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
