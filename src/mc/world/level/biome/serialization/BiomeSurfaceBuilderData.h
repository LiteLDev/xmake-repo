#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/biome/serialization/BiomeCappedSurfaceData.h"
#include "mc/world/level/biome/serialization/BiomeMesaSurfaceData.h"
#include "mc/world/level/biome/serialization/BiomeNoiseGradientSurfaceData.h"
#include "mc/world/level/biome/serialization/BiomeSurfaceMaterialData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeSurfaceBuilderData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 28, std::optional<BiomeSurfaceMaterialData>>       mSurfaceMaterials;
    ::ll::TypedStorage<1, 1, bool>                                           mHasDefaultOverworldSurface;
    ::ll::TypedStorage<1, 1, bool>                                           mHasSwampSurface;
    ::ll::TypedStorage<1, 1, bool>                                           mHasFrozenOceanSurface;
    ::ll::TypedStorage<1, 1, bool>                                           mHasTheEndSurface;
    ::ll::TypedStorage<4, 16, std::optional<BiomeMesaSurfaceData>>           mMesaSurface;
    ::ll::TypedStorage<8, 80, std::optional<BiomeCappedSurfaceData>>         mCappedSurface;
    ::ll::TypedStorage<8, 112, std::optional<BiomeNoiseGradientSurfaceData>> mNoiseGradientSurface;
#else // @header-generator platform
    ::ll::TypedStorage<4, 28, ::std::optional<::BiomeSurfaceMaterialData>>       mSurfaceMaterials;
    ::ll::TypedStorage<1, 1, bool>                                               mHasDefaultOverworldSurface;
    ::ll::TypedStorage<1, 1, bool>                                               mHasSwampSurface;
    ::ll::TypedStorage<1, 1, bool>                                               mHasFrozenOceanSurface;
    ::ll::TypedStorage<1, 1, bool>                                               mHasTheEndSurface;
    ::ll::TypedStorage<4, 16, ::std::optional<::BiomeMesaSurfaceData>>           mMesaSurface;
    ::ll::TypedStorage<8, 80, ::std::optional<::BiomeCappedSurfaceData>>         mCappedSurface;
    ::ll::TypedStorage<8, 120, ::std::optional<::BiomeNoiseGradientSurfaceData>> mNoiseGradientSurface;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::BiomeSurfaceBuilderData const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::BiomeSurfaceBuilderData const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void write(::BinaryStream&) const;

    MCNAPI ~BiomeSurfaceBuilderData();
#else // @header-generator platform
    MCAPI void write(::BinaryStream& stream) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<BiomeSurfaceBuilderData, std::error_code> read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Bedrock::Result<::BiomeSurfaceBuilderData> read(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform
    // NOLINTEND
};
