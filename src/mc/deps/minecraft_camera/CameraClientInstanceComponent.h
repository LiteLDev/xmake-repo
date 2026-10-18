#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ICameraClientInstance;
// clang-format on

struct CameraClientInstanceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ICameraClientInstance>> mClientInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraClientInstanceComponent& operator=(CameraClientInstanceComponent const&);
    CameraClientInstanceComponent(CameraClientInstanceComponent const&);
    CameraClientInstanceComponent();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ICameraClientInstance;
// clang-format on

struct CameraClientInstanceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ICameraClientInstance>> mClientInstance;
    // NOLINTEND
};
#else // @header-generator platform
struct CameraClientInstanceComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
