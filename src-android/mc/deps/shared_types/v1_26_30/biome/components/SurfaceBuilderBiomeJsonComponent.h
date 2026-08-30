#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/biome/components/CappedSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/FrozenOceanSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/MesaSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/OverworldSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/SwampSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/TheEndSurfaceSettings.h"
#include "mc/deps/shared_types/v1_26_30/biome/components/NoiseGradientSurfaceSettings.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_100 { struct SurfaceBuilderBiomeJsonComponent; }
namespace cereal { struct ReflectionCtx; }
#ifndef LL_GENERATED_ANDROID_BASE_STUB_SHAREDTYPES__COMPREHENSIVE__IBIOMEJSONCOMPONENT
#define LL_GENERATED_ANDROID_BASE_STUB_SHAREDTYPES__COMPREHENSIVE__IBIOMEJSONCOMPONENT
namespace SharedTypes::Comprehensive { class IBiomeJsonComponent {}; }
#endif
// clang-format on

namespace SharedTypes::v1_26_30 {

struct SurfaceBuilderBiomeJsonComponent : public ::SharedTypes::Comprehensive::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 480, std::variant<SharedTypes::v1_21_100::SurfaceBuilder::OverworldSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::FrozenOceanSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::SwampSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::TheEndSurfaceSettings, SharedTypes::v1_26_30::SurfaceBuilder::NoiseGradientSurfaceSettings>> mBuilder;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SurfaceBuilderBiomeJsonComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static void upgrade(
        ::SharedTypes::v1_21_100::SurfaceBuilderBiomeJsonComponent const&,
        ::SharedTypes::v1_26_30::SurfaceBuilderBiomeJsonComponent&
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SUBSURFACE_BUILDER_SCHEMA_HELP();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SUBSURFACE_BUILDER_SCHEMA_NAME();
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

} // namespace SharedTypes::v1_26_30
