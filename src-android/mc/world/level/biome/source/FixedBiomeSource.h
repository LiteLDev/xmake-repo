#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/source/BiomeSource.h"
#include "mc/world/level/biome/source/BiomeSourceType.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BoundingBox;
class ChunkLocalNoiseCache;
class LevelChunk;
struct BiomeHashType;
struct BiomeIdType;
struct GetBiomeOptions;
// clang-format on

class FixedBiomeSource : public ::BiomeSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const&> mFixedBiome;
    // NOLINTEND

public:
    // prevent constructor by default
    FixedBiomeSource& operator=(FixedBiomeSource const&);
    FixedBiomeSource(FixedBiomeSource const&);
    FixedBiomeSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FixedBiomeSource();

    virtual void fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const;

    virtual bool containsOnly(int, int, int, int, ::gsl::span<const BiomeIdType>) const;

    virtual bool hasBiomeById(::BiomeIdType) const;

    virtual bool hasBiomeByNameHash(::BiomeHashType) const;

    virtual ::BiomeSourceType const getType() const;

    virtual ::Biome const* _getBiome(::GetBiomeOptions const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FixedBiomeSource(::Biome const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Biome const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const;

    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const;

    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const&, uint) const;

    MCNAPI bool $containsOnly(int, int, int, int, ::gsl::span<const BiomeIdType>) const;

    MCNAPI bool $hasBiomeById(::BiomeIdType) const;

    MCNAPI bool $hasBiomeByNameHash(::BiomeHashType) const;

    MCNAPI ::BiomeSourceType const $getType() const;

    MCNAPI ::Biome const* $_getBiome(::GetBiomeOptions const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
