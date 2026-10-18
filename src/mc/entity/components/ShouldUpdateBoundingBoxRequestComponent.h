#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ShouldUpdateBoundingBoxRequestComponent {
public:
    // ShouldUpdateBoundingBoxRequestComponent inner types declare
    // clang-format off
    struct UpdateFromDefinition;
    struct UpdateFromValue;
    // clang-format on

    // ShouldUpdateBoundingBoxRequestComponent inner types define
    struct UpdateFromDefinition {};

    struct UpdateFromValue {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 8, ::Vec2> mValue;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 8> mUnk5dc410;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        UpdateFromValue& operator=(UpdateFromValue const&);
        UpdateFromValue(UpdateFromValue const&);
        UpdateFromValue();
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 12, std::variant<ShouldUpdateBoundingBoxRequestComponent::UpdateFromDefinition, ShouldUpdateBoundingBoxRequestComponent::UpdateFromValue>> mUpdate;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        4,
        12,
        ::std::variant<
            ::ShouldUpdateBoundingBoxRequestComponent::UpdateFromDefinition,
            ::ShouldUpdateBoundingBoxRequestComponent::UpdateFromValue>>
        mUpdate;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ShouldUpdateBoundingBoxRequestComponent& operator=(ShouldUpdateBoundingBoxRequestComponent const&);
    ShouldUpdateBoundingBoxRequestComponent(ShouldUpdateBoundingBoxRequestComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
