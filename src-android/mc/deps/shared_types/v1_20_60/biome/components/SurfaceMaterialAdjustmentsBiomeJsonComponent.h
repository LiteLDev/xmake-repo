#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/MolangJsonContainer.h"
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct SurfaceMaterialAdjustmentsBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // SurfaceMaterialAdjustmentsBiomeJsonComponent inner types declare
    // clang-format off
    struct SurfaceMaterialAdjustmentMaterials;
    struct SurfaceMaterialAdjustment;
    // clang-format on

    // SurfaceMaterialAdjustmentsBiomeJsonComponent inner types define
    struct SurfaceMaterialAdjustmentMaterials {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 72, std::optional<SharedTypes::v1_20_60::BlockSpecifier>> mTopMaterial;
        ::ll::TypedStorage<8, 72, std::optional<SharedTypes::v1_20_60::BlockSpecifier>> mMidMaterial;
        ::ll::TypedStorage<8, 72, std::optional<SharedTypes::v1_20_60::BlockSpecifier>> mSeaFloorMaterial;
        ::ll::TypedStorage<8, 72, std::optional<SharedTypes::v1_20_60::BlockSpecifier>> mFoundationMaterial;
        ::ll::TypedStorage<8, 72, std::optional<SharedTypes::v1_20_60::BlockSpecifier>> mSeaMaterial;
        // NOLINTEND

    public:
        // prevent constructor by default
        SurfaceMaterialAdjustmentMaterials(SurfaceMaterialAdjustmentMaterials const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI SurfaceMaterialAdjustmentMaterials(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustmentMaterials&&
        );

        MCNAPI ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
            SurfaceMaterialAdjustmentMaterials&
            operator=(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                          SurfaceMaterialAdjustmentMaterials&&);

        MCNAPI bool operator==(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                                   SurfaceMaterialAdjustmentMaterials const&) const;

        MCNAPI ~SurfaceMaterialAdjustmentMaterials();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustmentMaterials&&
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct SurfaceMaterialAdjustment {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 360, ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustmentMaterials> mMaterials;
        ::ll::TypedStorage<4, 12, std::optional<std::array<float, 2>>> mNoiseRange;
        ::ll::TypedStorage<8, 72, std::optional<std::array<SharedTypes::Util::MolangJsonContainer, 2>>> mHeightRange;
        ::ll::TypedStorage<4, 8, std::optional<float>> mNoiseFrequencyScale;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment const&
        ) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment>>> mAdjustments;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SurfaceMaterialAdjustmentsBiomeJsonComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
