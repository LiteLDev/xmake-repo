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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 72, std::optional<SharedTypes::v1_20_60::BlockSpecifier>> mTopMaterial;
        ::ll::TypedStorage<8, 72, std::optional<SharedTypes::v1_20_60::BlockSpecifier>> mMidMaterial;
        ::ll::TypedStorage<8, 72, std::optional<SharedTypes::v1_20_60::BlockSpecifier>> mSeaFloorMaterial;
        ::ll::TypedStorage<8, 72, std::optional<SharedTypes::v1_20_60::BlockSpecifier>> mFoundationMaterial;
        ::ll::TypedStorage<8, 72, std::optional<SharedTypes::v1_20_60::BlockSpecifier>> mSeaMaterial;
#else // @header-generator platform
        ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::v1_20_60::BlockSpecifier>> mTopMaterial;
        ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::v1_20_60::BlockSpecifier>> mMidMaterial;
        ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::v1_20_60::BlockSpecifier>> mSeaFloorMaterial;
        ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::v1_20_60::BlockSpecifier>> mFoundationMaterial;
        ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::v1_20_60::BlockSpecifier>> mSeaMaterial;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
        SurfaceMaterialAdjustmentMaterials(SurfaceMaterialAdjustmentMaterials const&);
#else // @header-generator platform
        SurfaceMaterialAdjustmentMaterials();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI SurfaceMaterialAdjustmentMaterials(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustmentMaterials&&
#else // @header-generator platform
        MCAPI SurfaceMaterialAdjustmentMaterials(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                SurfaceMaterialAdjustmentMaterials const&
#endif // @header-generator platform
        );

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
            SurfaceMaterialAdjustmentMaterials&
            operator=(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                          SurfaceMaterialAdjustmentMaterials&&);
#else // @header-generator platform
        MCAPI ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustmentMaterials&
        operator=(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                      SurfaceMaterialAdjustmentMaterials const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool operator==(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                                   SurfaceMaterialAdjustmentMaterials const&) const;
#else // @header-generator platform
        MCAPI bool operator==(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                                  SurfaceMaterialAdjustmentMaterials const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~SurfaceMaterialAdjustmentMaterials();
#else // @header-generator platform
        MCAPI ~SurfaceMaterialAdjustmentMaterials();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustmentMaterials&&
#else // @header-generator platform
        MCAPI void* $ctor(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                SurfaceMaterialAdjustmentMaterials const&
#endif // @header-generator platform
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

    struct SurfaceMaterialAdjustment {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<
            8,
            520,
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustmentMaterials>
                                                                           mMaterials;
        ::ll::TypedStorage<4, 12, ::std::optional<::std::array<float, 2>>> mNoiseRange;
        ::ll::TypedStorage<8, 88, ::std::optional<::std::array<::SharedTypes::Util::MolangJsonContainer, 2>>>
                                                         mHeightRange;
        ::ll::TypedStorage<4, 8, ::std::optional<float>> mNoiseFrequencyScale;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment>>> mAdjustments;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SurfaceMaterialAdjustmentsBiomeJsonComponent();
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment>>>
        mAdjustments;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
