#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MovementAttributeEntry;
struct MovementAttributesComponent;
// clang-format on

struct SlimMovementAttributeEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::optional<float> MovementAttributesComponent::*> mMovementAttribute;
    ::ll::TypedStorage<4, 4, uint>                                                mAttributeID;
    // NOLINTEND

public:
    // prevent constructor by default
    SlimMovementAttributeEntry();
};
