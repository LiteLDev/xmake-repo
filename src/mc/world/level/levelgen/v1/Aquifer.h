#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AquiferNoises;
class Block;
class ChunkPos;
class SurfaceLevelCache;
struct OverworldNoises3d;
// clang-format on

class Aquifer {
public:
    // Aquifer inner types declare
    // clang-format off
    struct FluidSample;
    struct LocalRegistry;
    // clang-format on

    // Aquifer inner types define
    struct FluidSample {
    public:
        // FluidSample inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        enum class FluidType : uchar {
            WATER = 0,
            LAVA  = 1,
            NONE  = 2,
#else // @header-generator platform
        enum class FluidType : schar {
            Water = 0,
            Lava  = 1,
            None  = 2,
#endif // @header-generator platform
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos>                       pos;
        ::ll::TypedStorage<4, 4, int>                               blockLevel;
        ::ll::TypedStorage<1, 1, ::Aquifer::FluidSample::FluidType> fluidType;
        // NOLINTEND
    };

    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const&> mWater;
        ::ll::TypedStorage<8, 8, ::Block const&> mLava;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalRegistry& operator=(LocalRegistry const&);
        LocalRegistry(LocalRegistry const&);
        LocalRegistry();
    };

    using AquifierGridPos = ::BlockPos;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::AquiferNoises const&>             mAquiferNoises;
    ::ll::TypedStorage<8, 8, ::OverworldNoises3d const&>         mTerrainNoises;
    ::ll::TypedStorage<8, 8, ::SurfaceLevelCache const&>         mSurfaceLevelCache;
    ::ll::TypedStorage<4, 4, int>                                mSeaLevel;
    ::ll::TypedStorage<4, 4, int>                                mLastFluidLevel;
    ::ll::TypedStorage<4, 4, float>                              mLastBarrierDensity;
    ::ll::TypedStorage<1, 1, ::Aquifer::FluidSample::FluidType>  mLastFluidType;
    ::ll::TypedStorage<1, 1, bool>                               mShouldScheduleFluidUpdate;
    ::ll::TypedStorage<4, 12, ::BlockPos>                        mMinGrid;
    ::ll::TypedStorage<4, 12, ::BlockPos>                        mGridSize;
    ::ll::TypedStorage<8, 24, std::vector<Aquifer::FluidSample>> mFluidLevelCache;
    ::ll::TypedStorage<8, 16, ::Aquifer::LocalRegistry>          mLocalRegistry;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::AquiferNoises const&>                 mAquiferNoises;
    ::ll::TypedStorage<8, 8, ::OverworldNoises3d const&>             mTerrainNoises;
    ::ll::TypedStorage<8, 8, ::SurfaceLevelCache const&>             mSurfaceLevelCache;
    ::ll::TypedStorage<4, 4, int>                                    mSeaLevel;
    ::ll::TypedStorage<4, 4, int>                                    mLastFluidLevel;
    ::ll::TypedStorage<4, 4, float>                                  mLastBarrierDensity;
    ::ll::TypedStorage<1, 1, ::Aquifer::FluidSample::FluidType>      mLastFluidType;
    ::ll::TypedStorage<1, 1, bool>                                   mShouldScheduleFluidUpdate;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mMinGrid;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mGridSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::Aquifer::FluidSample>> mFluidLevelCache;
    ::ll::TypedStorage<8, 16, ::Aquifer::LocalRegistry>              mLocalRegistry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Aquifer& operator=(Aquifer const&);
    Aquifer(Aquifer const&);
    Aquifer();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Aquifer(
        ::ChunkPos const&,
        ::AquiferNoises const&,
        ::OverworldNoises3d const&,
        ::SurfaceLevelCache const&,
        int const,
        int const,
        int const
#else // @header-generator platform
    MCAPI Aquifer(
        ::ChunkPos const&          chunkPos,
        ::AquiferNoises const&     aquiferNoises,
        ::OverworldNoises3d const& terrainNoises,
        ::SurfaceLevelCache const& surfaceLevelCache,
        int                        dimensionMinHeight,
        int                        levelGenHeight,
        int                        seaLevel
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Aquifer::FluidSample _computeAquifer(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::Aquifer::FluidSample _computeAquifer(::BlockPos const& cellCenter) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void computeAt(::BlockPos const&);

    MCNAPI float getLastBarrier() const;

    MCNAPI ::Block const* getLastFluidBlockType() const;

    MCNAPI int getLastFluidLevel() const;

    MCNAPI bool shouldScheduleFluidUpdate() const;
#else // @header-generator platform
    MCAPI void computeAt(::BlockPos const& worldPos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<std::pair<int, int>, 13> const& chunkOffset();
#else // @header-generator platform
    MCAPI static ::std::array<::std::pair<int, int>, 13> const& chunkOffset();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ChunkPos const&,
        ::AquiferNoises const&,
        ::OverworldNoises3d const&,
        ::SurfaceLevelCache const&,
        int const,
        int const,
        int const
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ChunkPos const&          chunkPos,
        ::AquiferNoises const&     aquiferNoises,
        ::OverworldNoises3d const& terrainNoises,
        ::SurfaceLevelCache const& surfaceLevelCache,
        int                        dimensionMinHeight,
        int                        levelGenHeight,
        int                        seaLevel
#endif // @header-generator platform
    );
    // NOLINTEND
};
