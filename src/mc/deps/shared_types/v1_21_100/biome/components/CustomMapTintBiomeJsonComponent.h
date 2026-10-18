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
#if defined(LL_PLAT_A) // @header-generator platform
    struct GrassTint;
#else // @header-generator platform
#endif // @header-generator platform
    struct GrassNoise;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct GrassTint;
#endif // @header-generator platform
    // clang-format on

    // CustomMapTintBiomeJsonComponent inner types define
    enum class GrassType : int {
        Tint  = 0,
        Noise = 1,
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    struct GrassNoise {};
#endif // @header-generator platform

    struct GrassTint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mTint;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct GrassNoise {};
#else // @header-generator platform
    using Grass = ::std::variant<
        ::SharedTypes::v1_21_100::CustomMapTintBiomeJsonComponent::GrassTint,
        ::SharedTypes::v1_21_100::CustomMapTintBiomeJsonComponent::GrassNoise>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<
        4,
        24,
        ::std::optional<::std::variant<
            ::SharedTypes::v1_21_100::CustomMapTintBiomeJsonComponent::GrassTint,
            ::SharedTypes::v1_21_100::CustomMapTintBiomeJsonComponent::GrassNoise>>>
                                                                           mGrass;
    ::ll::TypedStorage<4, 20, ::std::optional<::SharedTypes::Color255RGB>> mFoliage;
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

} // namespace SharedTypes::v1_21_100
