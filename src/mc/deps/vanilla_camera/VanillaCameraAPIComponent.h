#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IVanillaCameraAPI;
// clang-format on

struct VanillaCameraAPIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<IVanillaCameraAPI>> mApi;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaCameraAPIComponent& operator=(VanillaCameraAPIComponent const&);
    VanillaCameraAPIComponent(VanillaCameraAPIComponent const&);
    VanillaCameraAPIComponent();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IVanillaCameraAPI;
// clang-format on

struct VanillaCameraAPIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IVanillaCameraAPI>> mApi;
    // NOLINTEND
};
#else // @header-generator platform
struct VanillaCameraAPIComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
