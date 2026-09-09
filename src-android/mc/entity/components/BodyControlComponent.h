#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BodyControl;
// clang-format on

class BodyControlComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<BodyControl>> mBodyControl;
    // NOLINTEND

public:
    // prevent constructor by default
    BodyControlComponent& operator=(BodyControlComponent const&);
    BodyControlComponent(BodyControlComponent const&);
};
