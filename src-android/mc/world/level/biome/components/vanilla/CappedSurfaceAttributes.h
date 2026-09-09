#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class PerlinNoise;
class Vec3;
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
        ::ll::TypedStorage<8, 8, ::Block const*>               block;
        ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>> noise;
        // NOLINTEND

    public:
        // prevent constructor by default
        MaterialLayer& operator=(MaterialLayer const&);
        MaterialLayer(MaterialLayer const&);
        MaterialLayer();
    };

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Block const* getCeilingMaterial(::Vec3 const&) const;

    MCNAPI ::Block const* getFloorMaterial(::Vec3 const&) const;

    MCNAPI void initializeNoise(uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
