#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/SurfaceMaterialBlocks.h"

struct SurfaceMaterialAdjustmentEvaluated {
public:
    // SurfaceMaterialAdjustmentEvaluated inner types declare
    // clang-format off
    struct Element;
    // clang-format on

    // SurfaceMaterialAdjustmentEvaluated inner types define
    struct Element {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                      mHeightMin;
        ::ll::TypedStorage<4, 4, int>                      mHeightMax;
        ::ll::TypedStorage<8, 48, ::SurfaceMaterialBlocks> mSurfaceMaterialBlocks;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SurfaceMaterialAdjustmentEvaluated::Element>> mAdjustments;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SurfaceMaterialAdjustmentEvaluated::Element>> mAdjustments;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SurfaceMaterialAdjustmentEvaluated& operator=(SurfaceMaterialAdjustmentEvaluated const&);
    SurfaceMaterialAdjustmentEvaluated(SurfaceMaterialAdjustmentEvaluated const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool empty() const;
#else // @header-generator platform
    MCAPI ~SurfaceMaterialAdjustmentEvaluated();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void makeAdjustments(::SurfaceMaterialBlocks&, int) const;
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
