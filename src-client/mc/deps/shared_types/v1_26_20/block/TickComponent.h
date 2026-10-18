#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct TickComponent {
public:
    // TickComponent inner types declare
    // clang-format off
    class FirstSmallerConstraint;
    // clang-format on

    // TickComponent inner types define
    enum class MinMaxIndex : uchar {
        Min = 0,
        Max = 1,
    };

    class FirstSmallerConstraint
    : public ::cereal::ConstraintHandle<SharedTypes::v1_26_20::BlockDefinition::TickComponent::FirstSmallerConstraint> {
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::array<uint, 2>> mDelayIntervalRange;
    ::ll::TypedStorage<1, 1, bool>                mLooping;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
