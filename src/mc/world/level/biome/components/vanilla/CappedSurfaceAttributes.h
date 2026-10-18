#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/levelgen/synth/PerlinNoise.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
class PerlinNoise;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct CappedSurfaceAttributes : public ::BiomeComponentBase {
public:
    // CappedSurfaceAttributes inner types declare
    // clang-format off
    struct MaterialLayer;
    // clang-format on

    // CappedSurfaceAttributes inner types define
    struct MaterialLayer {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Block const*>               block;
        ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>> noise;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Block const*>                   block;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>> noise;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        MaterialLayer& operator=(MaterialLayer const&);
        MaterialLayer(MaterialLayer const&);
        MaterialLayer();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<CappedSurfaceAttributes::MaterialLayer>> mFloorMaterials;
    ::ll::TypedStorage<8, 24, std::vector<CappedSurfaceAttributes::MaterialLayer>> mCeilingMaterials;
    ::ll::TypedStorage<8, 8, ::Block const*>                                       mSeaMaterial;
    ::ll::TypedStorage<8, 8, ::Block const*>                                       mFoundationMaterial;
    ::ll::TypedStorage<8, 8, ::Block const*>                                       mBeachMaterial;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CappedSurfaceAttributes();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::CappedSurfaceAttributes::MaterialLayer>> mFloorMaterials;
    ::ll::TypedStorage<8, 24, ::std::vector<::CappedSurfaceAttributes::MaterialLayer>> mCeilingMaterials;
    ::ll::TypedStorage<8, 8, ::Block const*>                                           mSeaMaterial;
    ::ll::TypedStorage<8, 8, ::Block const*>                                           mFoundationMaterial;
    ::ll::TypedStorage<8, 8, ::Block const*>                                           mBeachMaterial;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* getCeilingMaterial(::Vec3 const&) const;

    MCNAPI ::Block const* getFloorMaterial(::Vec3 const&) const;

    MCNAPI void initializeNoise(uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void initializeNoise(uint levelSeed);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
