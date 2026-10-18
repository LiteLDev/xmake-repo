#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/CappedSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/FrozenOceanSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/MesaSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/OverworldSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/SwampSurfaceSettings.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/TheEndSurfaceSettings.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct SurfaceBuilderBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 472, std::variant<SharedTypes::v1_21_100::SurfaceBuilder::OverworldSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::FrozenOceanSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::SwampSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings, SharedTypes::v1_21_100::SurfaceBuilder::TheEndSurfaceSettings>> mBuilder;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SurfaceBuilderBiomeJsonComponent();
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
            ::SharedTypes::v1_21_100::SurfaceBuilder::TheEndSurfaceSettings>>
        mBuilder;
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
