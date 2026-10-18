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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    explicit FixedBiomeSource(Biome const& biome) : mFixedBiome(biome) {}

public:
#endif // @header-generator platform
    // prevent constructor by default
    FixedBiomeSource& operator=(FixedBiomeSource const&);
    FixedBiomeSource(FixedBiomeSource const&);
    FixedBiomeSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FixedBiomeSource();
#else // @header-generator platform
    virtual void fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const;
#else // @header-generator platform
    virtual bool containsOnly(int, int, int, int, ::gsl::span<::BiomeIdType const> allowed) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const;
#else // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const;
#else // @header-generator platform
    virtual ::BiomeArea
    getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const& getBiomeOptions) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool containsOnly(int, int, int, int, ::gsl::span<const BiomeIdType>) const;
#else // @header-generator platform
    virtual bool hasBiomeById(::BiomeIdType id) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBiomeById(::BiomeIdType) const;
#else // @header-generator platform
    virtual bool hasBiomeByNameHash(::BiomeHashType hash) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBiomeByNameHash(::BiomeHashType) const;
#else // @header-generator platform
    virtual ::BiomeSourceType const getType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::Biome const* _getBiome(::GetBiomeOptions const&) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fillBiomes(::LevelChunk&, ::ChunkLocalNoiseCache const*) const;
#else // @header-generator platform
    MCAPI void $fillBiomes(::LevelChunk& levelChunk, ::ChunkLocalNoiseCache const* chunkLocalNoiseCache) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const&, uint, ::GetBiomeOptions const&) const;
#else // @header-generator platform
    MCAPI bool $containsOnly(int, int, int, int, ::gsl::span<::BiomeIdType const> allowed) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeArea $getBiomeArea(::BoundingBox const&, uint) const;
#else // @header-generator platform
    MCAPI ::BiomeArea $getBiomeArea(::BoundingBox const& area, uint scale) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $containsOnly(int, int, int, int, ::gsl::span<const BiomeIdType>) const;
#else // @header-generator platform
    MCAPI ::BiomeArea
    $getBiomeArea(::BoundingBox const& area, uint scale, ::GetBiomeOptions const& getBiomeOptions) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasBiomeById(::BiomeIdType) const;
#else // @header-generator platform
    MCAPI bool $hasBiomeById(::BiomeIdType id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasBiomeByNameHash(::BiomeHashType) const;
#else // @header-generator platform
    MCAPI bool $hasBiomeByNameHash(::BiomeHashType hash) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeSourceType const $getType() const;
#else // @header-generator platform
    MCFOLD ::BiomeSourceType const $getType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Biome const* $_getBiome(::GetBiomeOptions const&) const;
#else // @header-generator platform
    MCFOLD ::Biome const* $_getBiome(::GetBiomeOptions const&) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
