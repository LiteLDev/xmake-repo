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
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<const Biome*>>> mHillsTransformationBiomes;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<const Biome*>>> mMutateTransformationBiomes;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<const Biome*>>> mRiverTransformationBiomes;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<const Biome*>>> mShoreTransformationBiomes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OverworldGenerationRulesBiomeComponentGlue();

    virtual bool resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&);

    virtual void applyToBiome(::Biome&, ::entt::meta_any const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $resolveAndValidate(::entt::meta_any const&, ::BiomeRegistry const&);

    MCNAPI void $applyToBiome(::Biome&, ::entt::meta_any const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
