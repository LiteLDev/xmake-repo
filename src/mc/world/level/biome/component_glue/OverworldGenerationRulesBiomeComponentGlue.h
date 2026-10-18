#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/glue/IBiomeComponentGlue.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
// clang-format on

struct OverworldGenerationRulesBiomeComponentGlue : public ::IBiomeComponentGlue {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<const Biome*>>> mHillsTransformationBiomes;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<const Biome*>>> mMutateTransformationBiomes;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<const Biome*>>> mRiverTransformationBiomes;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<const Biome*>>> mShoreTransformationBiomes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::Biome const*>>> mHillsTransformationBiomes;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::Biome const*>>> mMutateTransformationBiomes;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::Biome const*>>> mRiverTransformationBiomes;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::Biome const*>>> mShoreTransformationBiomes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~OverworldGenerationRulesBiomeComponentGlue();
#else // @header-generator platform
    virtual bool
    resolveAndValidate(::entt::meta_any const& biomeJsonComponent, ::BiomeRegistry const& biomeRegistry) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&);

    virtual void applyToBiome(::Biome&, ::entt::meta_any const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void applyToBiome(::Biome& biome, ::entt::meta_any const& biomeJsonComponent) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&);
#else // @header-generator platform
    MCAPI bool $resolveAndValidate(::entt::meta_any const& biomeJsonComponent, ::BiomeRegistry const& biomeRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyToBiome(::Biome&, ::entt::meta_any const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $applyToBiome(::Biome& biome, ::entt::meta_any const& biomeJsonComponent) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
