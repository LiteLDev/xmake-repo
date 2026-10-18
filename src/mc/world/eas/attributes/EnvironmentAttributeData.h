#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/world/eas/attributes/BoolAttributeData.h"
#include "mc/world/eas/attributes/ColorAttributeData.h"
#include "mc/world/eas/attributes/FloatAttributeData.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace EAS {

struct EnvironmentAttributeData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk483852;
    ::ll::UntypedStorage<4, 32> mUnk254b6b;
    ::ll::UntypedStorage<4, 28> mUnkaef95d;
    ::ll::UntypedStorage<4, 32> mUnk77394e;
    ::ll::UntypedStorage<4, 4>  mUnkc3d61b;
    ::ll::UntypedStorage<4, 4>  mUnkd4ed13;
    ::ll::UntypedStorage<4, 4>  mUnkb665ec;
    ::ll::UntypedStorage<4, 4>  mUnkf034fd;
    ::ll::UntypedStorage<1, 1>  mUnkb1783c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EnvironmentAttributeData& operator=(EnvironmentAttributeData const&);
    EnvironmentAttributeData(EnvironmentAttributeData const&);
    EnvironmentAttributeData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::EAS::EnvironmentAttributeData const&) const;
#else // @header-generator platform
    MCNAPI bool operator==(::EAS::EnvironmentAttributeData const& other) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace EAS
