#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"
#endif // @header-generator platform
#include "mc/deps/shared_types/v1_21_100/biome/components/CappedSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/FrozenOceanSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/MesaSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/OverworldSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/SwampSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/TheEndSurfaceSettings.h"
#include "mc/deps/shared_types/v1_26_30/biome/components/NoiseGradientSurfaceSettings.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_26_30 { struct SurfaceBuilderBiomeJsonComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#if defined(LL_PLAT_A) // @header-generator platform
#ifndef LL_GENERATED_ANDROID_BASE_STUB_SHAREDTYPES__COMPREHENSIVE__IBIOMEJSONCOMPONENT
#define LL_GENERATED_ANDROID_BASE_STUB_SHAREDTYPES__COMPREHENSIVE__IBIOMEJSONCOMPONENT
namespace SharedTypes::Comprehensive { class IBiomeJsonComponent {}; }
#endif
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::Beta {

#if defined(LL_PLAT_A) // @header-generator platform
struct SurfaceBuilderBiomeJsonComponent : public ::SharedTypes::Comprehensive::IBiomeJsonComponent {
#else // @header-generator platform
struct SurfaceBuilderBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 480, std::variant<SharedTypes::v1_21_100::SurfaceBuilder::OverworldSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::FrozenOceanSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::SwampSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::TheEndSurfaceSettings, SharedTypes::v1_26_30::SurfaceBuilder::NoiseGradientSurfaceSettings>> mBuilder;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        696,
        ::std::variant<
            ::SharedTypes::v1_21_100::SurfaceBuilder::OverworldSurfaceSettings,
            ::SharedTypes::v1_21_100::SurfaceBuilder::FrozenOceanSurfaceSettings,
            ::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings,
            ::SharedTypes::v1_21_100::SurfaceBuilder::SwampSurfaceSettings,
            ::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings,
            ::SharedTypes::v1_21_100::SurfaceBuilder::TheEndSurfaceSettings,
            ::SharedTypes::v1_26_30::SurfaceBuilder::NoiseGradientSurfaceSettings>>
        mBuilder;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SurfaceBuilderBiomeJsonComponent();
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SUBSURFACE_BUILDER_SCHEMA_HELP();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SUBSURFACE_BUILDER_SCHEMA_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SUBSURFACE_BUILDER_SCHEMA_NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::Beta
