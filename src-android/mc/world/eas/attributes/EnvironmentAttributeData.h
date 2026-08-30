#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/world/eas/attributes/BoolAttributeData.h"
#include "mc/world/eas/attributes/ColorAttributeData.h"
#include "mc/world/eas/attributes/FloatAttributeData.h"

namespace EAS {

struct EnvironmentAttributeData {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<4, 32, std::optional<std::variant<EAS::BoolAttributeData, EAS::FloatAttributeData, EAS::ColorAttributeData>>> mFromAttribute;
    ::ll::TypedStorage<4, 28, std::variant<EAS::BoolAttributeData, EAS::FloatAttributeData, EAS::ColorAttributeData>> mAttribute;
    ::ll::TypedStorage<4, 32, std::optional<std::variant<EAS::BoolAttributeData, EAS::FloatAttributeData, EAS::ColorAttributeData>>> mToAttribute;
    ::ll::TypedStorage<4, 4, uint> mCurrentTransitionTicks;
    ::ll::TypedStorage<4, 4, uint> mTotalTransitionTicks;
    ::ll::TypedStorage<4, 4, ::EasingType> mEasing;
    ::ll::TypedStorage<4, 4, uint> mLocalTransitionTicks;
    ::ll::TypedStorage<1, 1, bool> mNoiseTransition;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::EAS::EnvironmentAttributeData const&) const;
    // NOLINTEND
};

} // namespace EAS
