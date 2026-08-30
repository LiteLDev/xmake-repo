#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"
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
        using ValueArray = std::array<std::variant<SharedTypes::Reference<(SharedTypes::AssetType)3>, uint>, 2>;

    public:
        // member variables
        // NOLINTBEGIN
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
        // NOLINTEND
    };

    struct WeightedBiomeNameVector {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeName>> mWeightedBiomeNames;
        // clang-format on
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND
    };

    struct WeightedTemperatureCategory {
    public:
        // WeightedTemperatureCategory inner types define
        using ValueArray = std::array<std::variant<BiomeTemperatureCategory, uint>, 2>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, std::array<std::variant<BiomeTemperatureCategory, uint>, 2>> mValues;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>> mHillsTransformation;
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>> mMutateTransformation;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedTemperatureCategory>>> mGenerateForClimates;
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>> mRiverTransformation;
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent::WeightedBiomeNameVector>> mShoreTransformation;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OverworldGenerationRulesBiomeJsonComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OverworldGenerationRulesBiomeJsonComponent(
        ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent const&
    );

    MCNAPI ::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent&&);
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
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_60::OverworldGenerationRulesBiomeJsonComponent const&);
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
