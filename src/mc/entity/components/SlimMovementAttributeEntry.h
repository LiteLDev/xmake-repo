#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct MovementAttributeEntry;
#else // @header-generator platform
#endif // @header-generator platform
struct MovementAttributesComponent;
// clang-format on

struct SlimMovementAttributeEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::optional<float> MovementAttributesComponent::*> mMovementAttribute;
    ::ll::TypedStorage<4, 4, uint>                                                mAttributeID;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::optional<float> MovementAttributesComponent::*> mMovementAttribute;
    ::ll::TypedStorage<4, 4, uint>                                                  mAttributeID;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SlimMovementAttributeEntry();
#else // @header-generator platform
#endif // @header-generator platform
};
