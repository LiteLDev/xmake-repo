#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"
#include "mc/world/level/biome/BiomeTemperatureCategory.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct OverworldGenerationRulesBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // OverworldGenerationRulesBiomeJsonComponent inner types declare
    // clang-format off
    struct WeightedBiomeName;
    struct WeightedBiomeNameVector;
    struct WeightedTemperatureCategory;
    // clang-format on

    // OverworldGenerationRulesBiomeJsonComponent inner types define
    struct WeightedBiomeName {
    public:
        // WeightedBiomeName inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        using ValueArray = std::array<std::variant<SharedTypes::Reference<(SharedTypes::AssetType)3>, uint>, 2>;
#else // @header-generator platform
        using ValueArray = ::std::array<::std::variant<::SharedTypes::Reference<3>, uint>, 2>;

        using ValueArrayEntry = ::std::variant<::SharedTypes::Reference<3>, uint>;
#endif // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 64> mValues;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~WeightedBiomeName();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 80, ::std::array<::std::variant<::SharedTypes::Reference<3>, uint>, 2>> mValues;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct WeightedBiomeNameVector {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeName>> mWeightedBiomeNames;
        // clang-format on
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
        ::ll::TypedStorage<
            8,
            24,
            ::std::vector<::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeName>>
            mWeightedBiomeNames;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct WeightedTemperatureCategory {
    public:
        // WeightedTemperatureCategory inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        using ValueArray = std::array<std::variant<BiomeTemperatureCategory, uint>, 2>;
#else // @header-generator platform
        using ValueArray = ::std::array<::std::variant<::BiomeTemperatureCategory, uint>, 2>;

        using ValueArrayEntry = ::std::variant<::BiomeTemperatureCategory, uint>;
#endif // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 16, std::array<std::variant<BiomeTemperatureCategory, uint>, 2>> mValues;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
        ::ll::TypedStorage<4, 16, ::std::array<::std::variant<::BiomeTemperatureCategory, uint>, 2>> mValues;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>> mHillsTransformation;
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>> mMutateTransformation;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedTemperatureCategory>>> mGenerateForClimates;
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>> mRiverTransformation;
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>> mShoreTransformation;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>>
        mHillsTransformation;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>>
        mMutateTransformation;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<
            ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedTemperatureCategory>>>
        mGenerateForClimates;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>>
        mRiverTransformation;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>>
        mShoreTransformation;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    OverworldGenerationRulesBiomeJsonComponent();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~OverworldGenerationRulesBiomeJsonComponent();
#else // @header-generator platform
    virtual ~OverworldGenerationRulesBiomeJsonComponent() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI OverworldGenerationRulesBiomeJsonComponent(
#else // @header-generator platform
    MCAPI OverworldGenerationRulesBiomeJsonComponent(
#endif // @header-generator platform
        ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent const&
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent&&);
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent const&);

    MCAPI bool operator==(::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent const&) const;
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
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent const&);
#endif // @header-generator platform
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
