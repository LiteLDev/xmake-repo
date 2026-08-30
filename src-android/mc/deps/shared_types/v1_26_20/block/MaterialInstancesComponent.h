#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_26_20/block/BlockRenderLayer.h"
#include "mc/deps/shared_types/v1_26_20/block/TintMethod.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct MaterialInstancesComponent {
public:
    // MaterialInstancesComponent inner types declare
    // clang-format off
    struct MaterialInstance;
    class MaterialInstanceConstraint;
    // clang-format on

    // MaterialInstancesComponent inner types define
    struct MaterialInstance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                                         mTextureName;
        ::ll::TypedStorage<4, 4, float>                                     mAmbientOcclusion;
        ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::BlockRenderLayer> mRenderLayer;
        ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::TintMethod>       mTintMethod;
        ::ll::TypedStorage<1, 1, bool>                                      mFaceDimming;
        ::ll::TypedStorage<1, 1, bool>                                      mRandomizeUVRotation;
        ::ll::TypedStorage<1, 1, bool>                                      mAlphaMaskedTint;
        ::ll::TypedStorage<1, 1, bool>                                      mDithering;
        // NOLINTEND
    };

    class MaterialInstanceConstraint
    : public ::cereal::ConstraintHandle<
          SharedTypes::v1_26_20::BlockDefinition::MaterialInstancesComponent::MaterialInstanceConstraint> {};

    using MaterialInstancesDataType = std::unordered_map<
        std::string,
        std::
            variant<std::string, SharedTypes::v1_26_20::BlockDefinition::MaterialInstancesComponent::MaterialInstance>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SharedTypes::v1_26_20::BlockDefinition::MaterialInstancesComponent::MaterialInstance>> mMaterials;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mMaterialMappings;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
