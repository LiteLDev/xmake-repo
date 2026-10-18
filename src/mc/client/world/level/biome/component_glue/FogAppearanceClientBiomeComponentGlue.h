#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/biome/glue/IClientBiomeComponentGlue.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class Biome;
class FogDefinitionRegistry;
struct DeferredRenderingBiomeRegistry;
struct FogDefinition;
namespace SharedTypes::v1_21_40 { struct IClientBiomeJsonComponent; }
// clang-format on

struct FogAppearanceClientBiomeComponentGlue : public ::IClientBiomeComponentGlue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16> mResolvedFogDefinition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FogAppearanceClientBiomeComponentGlue();

    virtual bool resolveAndValidate(::SharedTypes::v1_21_40::IClientBiomeJsonComponent const&, ::FogDefinitionRegistry const&, ::DeferredRenderingBiomeRegistry const&);

    virtual void applyToBiome(::Biome&, ::SharedTypes::v1_21_40::IClientBiomeJsonComponent const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $resolveAndValidate(
        ::SharedTypes::v1_21_40::IClientBiomeJsonComponent const&,
        ::FogDefinitionRegistry const&,
        ::DeferredRenderingBiomeRegistry const&
    );

    MCNAPI void $applyToBiome(::Biome&, ::SharedTypes::v1_21_40::IClientBiomeJsonComponent const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
struct FogAppearanceClientBiomeComponentGlue {};
#endif // @header-generator platform
