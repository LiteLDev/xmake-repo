#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class RuinedPortalFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mNether;
    ::ll::TypedStorage<4, 4, int const>  mOverworldSpacing;
    ::ll::TypedStorage<4, 4, int const>  mOverworldMinSeparation;
    ::ll::TypedStorage<4, 4, int const>  mNetherSpacing;
    ::ll::TypedStorage<4, 4, int const>  mNetherMinSeparation;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    RuinedPortalFeature();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~RuinedPortalFeature();
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
    virtual bool getNearestGeneratedFeature(::Dimension&, ::BiomeSource const&, ::BlockPos const&, ::BlockPos&, ::IPreliminarySurfaceProvider const&, bool, std::optional<HashedString> const&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension&         dimension,
        ::BiomeSource const& biomeSource,
        ::Random&,
        ::ChunkPos const&                    cp,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isFeatureChunk(::BiomeSource const&, ::Random&, ::ChunkPos const&, uint, ::IPreliminarySurfaceProvider const&, ::Dimension const&);

    virtual std::unique_ptr<StructureStart> createStructureStart(::Dimension&, ::BiomeSource const&, ::Random&, ::ChunkPos const&, ::IPreliminarySurfaceProvider const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RuinedPortalFeature(uint const, bool const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint const, bool const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool isFeatureChunk(
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& pos,
        uint              levelSeed,
        ::IPreliminarySurfaceProvider const&,
        ::Dimension const&
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::StructureStart> $createStructureStart(
        ::Dimension&         dimension,
        ::BiomeSource const& biomeSource,
#endif // @header-generator platform
        ::Random&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::ChunkPos const&,
        uint,
#else // @header-generator platform
        ::ChunkPos const&                    cp,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

    MCAPI bool $isFeatureChunk(
        ::BiomeSource const&,
        ::Random&         random,
        ::ChunkPos const& pos,
        uint              levelSeed,
#endif // @header-generator platform
        ::IPreliminarySurfaceProvider const&,
        ::Dimension const&
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<StructureStart> $createStructureStart(
        ::Dimension&,
        ::BiomeSource const&,
        ::Random&,
        ::ChunkPos const&,
        ::IPreliminarySurfaceProvider const&
    );
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
