#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ICameraAPI;
// clang-format on

struct CameraAPIComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ICameraAPI>> mApi;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ICameraAPI>> mApi;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CameraAPIComponent& operator=(CameraAPIComponent const&);
    CameraAPIComponent(CameraAPIComponent const&);
    CameraAPIComponent();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ICameraAPI& get();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::ICameraAPI& get();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
