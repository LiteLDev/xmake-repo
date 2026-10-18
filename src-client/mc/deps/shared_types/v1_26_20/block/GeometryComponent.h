#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct GeometryComponent {
public:
    // GeometryComponent inner types declare
    // clang-format off
    struct NWayVisualRotationStateMapping;
    struct DetailedGeometry;
    class DetailedGeometryConstraint;
    // clang-format on

    // GeometryComponent inner types define
    struct NWayVisualRotationStateMapping {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mXStateName;
        ::ll::TypedStorage<8, 24, std::string> mYStateName;
        ::ll::TypedStorage<8, 24, std::string> mZStateName;
        // NOLINTEND
    };

    struct DetailedGeometry {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::string> mGeometryName;
        ::ll::TypedStorage<8, 24, std::string> mCullingName;
        ::ll::TypedStorage<8, 24, std::string> mCullingShapeName;
        ::ll::TypedStorage<8, 32, std::optional<std::string>> mCullingLayer;
        ::ll::TypedStorage<8, 24, std::map<std::string, SharedTypes::Legacy::ExpressionNode>> mBoneVisibilities;
        ::ll::TypedStorage<8, 32, std::variant<bool, std::vector<std::string>>> mUVsLocked;
        ::ll::TypedStorage<8, 80, std::optional<SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping>> mNWayVisualRotation;
        // clang-format on
        // NOLINTEND
    };

    class DetailedGeometryConstraint
    : public ::cereal::ConstraintHandle<
          SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometryConstraint> {};

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 248, std::variant<std::string, SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry>> mGeometry;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
