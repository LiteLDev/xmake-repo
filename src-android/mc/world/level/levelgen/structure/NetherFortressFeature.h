#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/levelgen/structure/StructureFeature.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BiomeSource;
class ChunkPos;
class Dimension;
class IPreliminarySurfaceProvider;
class Random;
class StructureStart;
// clang-format on

class NetherFortressFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BiomeIdType>> mAllowedBiomes;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherFortressFeature& operator=(NetherFortressFeature const&);
    NetherFortressFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~NetherFortressFeature();

    virtual bool shouldAddHardcodedSpawnAreas() const;

    virtual ::gsl::span<const BiomeIdType> getRequiredBiomes() const;

    virtual bool isFeatureChunk(::BiomeSource const&, ::Random&, ::ChunkPos const&, uint, ::IPreliminarySurfaceProvider const&, ::Dimension const&);

    virtual std::unique_ptr<StructureStart> createStructureStart(::Dimension&, ::BiomeSource const&, ::Random&, ::ChunkPos const&, ::IPreliminarySurfaceProvider const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherFortressFeature(uint&, ::BaseGameVersion const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint&, ::BaseGameVersion const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $shouldAddHardcodedSpawnAreas() const;

    MCNAPI ::gsl::span<const BiomeIdType> $getRequiredBiomes() const;

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
