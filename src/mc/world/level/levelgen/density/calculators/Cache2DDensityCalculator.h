#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/world/level/levelgen/density/calculators/IDensityCalculator.h"

// auto generated forward declare list
// clang-format off
class DensityAllocator;
class DensityCalculators;
class DensityVolume;
// clang-format on

class Cache2DDensityCalculator : public ::IDensityCalculator {
public:
    // Cache2DDensityCalculator inner types declare
    // clang-format off
    struct CachedVolume;
    // clang-format on

    // Cache2DDensityCalculator inner types define
    struct CachedVolume {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, int>                 mPosX;
        ::ll::TypedStorage<4, 4, int>                 mPosZ;
        ::ll::TypedStorage<4, 4, int>                 mStepX;
        ::ll::TypedStorage<4, 4, int>                 mStepZ;
        ::ll::TypedStorage<2, 2, ushort>              mDimensionsX;
        ::ll::TypedStorage<2, 2, ushort>              mDimensionsZ;
        ::ll::TypedStorage<8, 24, std::vector<float>> mData;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, int>                   mPosX;
        ::ll::TypedStorage<4, 4, int>                   mPosZ;
        ::ll::TypedStorage<4, 4, int>                   mStepX;
        ::ll::TypedStorage<4, 4, int>                   mStepZ;
        ::ll::TypedStorage<2, 2, ushort>                mDimensionsX;
        ::ll::TypedStorage<2, 2, ushort>                mDimensionsZ;
        ::ll::TypedStorage<8, 24, ::std::vector<float>> mData;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mInput;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 112>     mLocalCachedVolume;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        168,
        ::Bedrock::Threading::InstancedThreadLocal<
            ::std::optional<::Cache2DDensityCalculator::CachedVolume const>,
            ::std::allocator<::std::optional<::Cache2DDensityCalculator::CachedVolume const>>>>
        mLocalCachedVolume;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Cache2DDensityCalculator();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Cache2DDensityCalculator() = default;
#else // @header-generator platform
    virtual ~Cache2DDensityCalculator() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const;
#else // @header-generator platform
    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
