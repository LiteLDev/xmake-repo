#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/world/Pos.h"
#include "mc/world/level/levelgen/density/DensityVolume.h"
#include "mc/world/level/levelgen/density/calculators/IDensityCalculator.h"

// auto generated forward declare list
// clang-format off
class DensityAllocator;
class DensityCalculators;
class DensityVolume;
// clang-format on

class CacheDensityCalculator : public ::IDensityCalculator {
public:
    // CacheDensityCalculator inner types declare
    // clang-format off
    struct CachedVolume;
    // clang-format on

    // CacheDensityCalculator inner types define
    struct CachedVolume {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Pos>              mPos;
        ::ll::TypedStorage<4, 12, ::Pos>              mStep;
        ::ll::UntypedStorage<2, 6>                    mDimensions;
        ::ll::TypedStorage<8, 24, std::vector<float>> mData;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mInput;
    ::ll::UntypedStorage<8, 112>     mLocalCachedVolume;
    // NOLINTEND

public:
    // prevent constructor by default
    CacheDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CacheDensityCalculator() = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const;
    // NOLINTEND
};
