#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IHitResultContainer;
// clang-format on

class HitResultComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<IHitResultContainer>> mHitResults;
    // NOLINTEND

public:
    // prevent constructor by default
    HitResultComponent& operator=(HitResultComponent const&);
    HitResultComponent(HitResultComponent const&);
    HitResultComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HitResultComponent(std::unique_ptr<IHitResultContainer>);

    MCNAPI ::IHitResultContainer& get();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<IHitResultContainer>);
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IHitResultContainer>> mHitResults;
#endif // @header-generator platform
    // NOLINTEND
};
