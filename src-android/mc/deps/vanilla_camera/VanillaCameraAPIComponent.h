#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
