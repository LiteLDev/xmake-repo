#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

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
        ::ll::TypedStorage<4, 8, ::Vec2> mValue;
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
    // clang-format off
    ::ll::TypedStorage<4, 12, std::variant<ShouldUpdateBoundingBoxRequestComponent::UpdateFromDefinition, ShouldUpdateBoundingBoxRequestComponent::UpdateFromValue>> mUpdate;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ShouldUpdateBoundingBoxRequestComponent& operator=(ShouldUpdateBoundingBoxRequestComponent const&);
    ShouldUpdateBoundingBoxRequestComponent(ShouldUpdateBoundingBoxRequestComponent const&);
};
