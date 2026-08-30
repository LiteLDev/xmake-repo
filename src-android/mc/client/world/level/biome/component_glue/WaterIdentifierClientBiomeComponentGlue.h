#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/level/biome/glue/IClientBiomeComponentGlue.h"

// auto generated forward declare list
// clang-format off
class Biome;
class FogDefinitionRegistry;
struct DeferredRenderingBiomeRegistry;
namespace SharedTypes::v1_21_40 { struct IClientBiomeJsonComponent; }
// clang-format on

struct WaterIdentifierClientBiomeComponentGlue : public ::IClientBiomeComponentGlue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mResolvedWaterIdentifier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WaterIdentifierClientBiomeComponentGlue();

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
