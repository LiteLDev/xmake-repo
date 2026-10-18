#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/BiomeIdType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BiomeIdType;
#endif // @header-generator platform
// clang-format on

class OceanMonumentFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                       mMonumentSpacing;
    ::ll::TypedStorage<4, 4, int>                       mMinMonumentSeparation;
    ::ll::TypedStorage<8, 24, std::vector<BiomeIdType>> allowedBiomes;
    ::ll::TypedStorage<8, 24, std::vector<BiomeIdType>> allowedSpawnBiomes;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                           mMonumentSpacing;
    ::ll::TypedStorage<4, 4, int>                           mMinMonumentSeparation;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeIdType>> allowedBiomes;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeIdType>> allowedSpawnBiomes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    OceanMonumentFeature();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~OceanMonumentFeature();
#else // @header-generator platform
    virtual ::gsl::span<::BiomeIdType const> getRequiredBiomes() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldAddHardcodedSpawnAreas() const;
#else // @header-generator platform
    virtual bool getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldPostProcessMobs() const;
#else // @header-generator platform
    virtual bool isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    pos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::span<const BiomeIdType> getRequiredBiomes() const;
#else // @header-generator platform
    virtual bool shouldAddHardcodedSpawnAreas() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getNearestGeneratedFeature(::Dimension&, ::BiomeSource const&, ::BlockPos const&, ::BlockPos&, ::IPreliminarySurfaceProvider const&, bool, std::optional<HashedString> const&);
#else // @header-generator platform
    virtual bool shouldPostProcessMobs() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isFeatureChunk(::BiomeSource const&, ::Random&, ::ChunkPos const&, uint, ::IPreliminarySurfaceProvider const&, ::Dimension const&);

    virtual std::unique_ptr<StructureStart> createStructureStart(::Dimension&, ::BiomeSource const&, ::Random&, ::ChunkPos const&, ::IPreliminarySurfaceProvider const&);
    // clang-format on
#else // @header-generator platform
    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension& generator,
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& lc,
        ::IPreliminarySurfaceProvider const&
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit OceanMonumentFeature(uint);
#else // @header-generator platform
    MCAPI explicit OceanMonumentFeature(uint seed);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(uint seed);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldAddHardcodedSpawnAreas() const;
#else // @header-generator platform
    MCFOLD ::gsl::span<::BiomeIdType const> $getRequiredBiomes() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI bool $getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isFeatureChunk(
        ::BiomeSource const&,
        ::Random&,
        ::ChunkPos const&,
        uint,
        ::IPreliminarySurfaceProvider const&,
#else // @header-generator platform
    MCAPI bool $isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    pos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
#endif // @header-generator platform
        ::Dimension const&
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<StructureStart> $createStructureStart(
        ::Dimension&,
#else // @header-generator platform
    MCFOLD bool $shouldAddHardcodedSpawnAreas() const;

    MCFOLD bool $shouldPostProcessMobs() const;

    MCAPI ::std::unique_ptr<::StructureStart> $createStructureStart(
        ::Dimension& generator,
#endif // @header-generator platform
        ::BiomeSource const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::Random&,
        ::ChunkPos const&,
#else // @header-generator platform
        ::Random&         random,
        ::ChunkPos const& lc,
#endif // @header-generator platform
        ::IPreliminarySurfaceProvider const&
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
