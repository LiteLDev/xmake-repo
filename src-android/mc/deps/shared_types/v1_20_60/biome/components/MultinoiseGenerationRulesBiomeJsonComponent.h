#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct MultinoiseGenerationRulesBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<float>> mTargetTemperature;
    ::ll::TypedStorage<4, 8, std::optional<float>> mTargetHumidity;
    ::ll::TypedStorage<4, 8, std::optional<float>> mTargetAltitude;
    ::ll::TypedStorage<4, 8, std::optional<float>> mTargetWeirdness;
    ::ll::TypedStorage<4, 8, std::optional<float>> mWeight;
    // NOLINTEND

public:
    // prevent constructor by default
    MultinoiseGenerationRulesBiomeJsonComponent& operator=(MultinoiseGenerationRulesBiomeJsonComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultinoiseGenerationRulesBiomeJsonComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_20_60::MultinoiseGenerationRulesBiomeJsonComponent const&) const;
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
