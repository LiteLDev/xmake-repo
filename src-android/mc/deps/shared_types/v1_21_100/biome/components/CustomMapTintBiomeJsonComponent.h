#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CustomMapTintBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // CustomMapTintBiomeJsonComponent inner types declare
    // clang-format off
    struct GrassTint;
    struct GrassNoise;
    // clang-format on

    // CustomMapTintBiomeJsonComponent inner types define
    enum class GrassType : int {
        Tint  = 0,
        Noise = 1,
    };

    struct GrassTint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mTint;
        // NOLINTEND
    };

    struct GrassNoise {};

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 24, std::optional<std::variant<SharedTypes::v1_21_100::CustomMapTintBiomeJsonComponent::GrassTint, SharedTypes::v1_21_100::CustomMapTintBiomeJsonComponent::GrassNoise>>> mGrass;
    ::ll::TypedStorage<4, 20, std::optional<SharedTypes::Color255RGB>> mFoliage;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CustomMapTintBiomeJsonComponent& operator=(CustomMapTintBiomeJsonComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomMapTintBiomeJsonComponent();
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

} // namespace SharedTypes::v1_21_100
