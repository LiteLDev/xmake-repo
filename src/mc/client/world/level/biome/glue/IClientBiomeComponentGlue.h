#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Biome;
class FogDefinitionRegistry;
struct DeferredRenderingBiomeRegistry;
namespace SharedTypes::v1_21_40 { struct IClientBiomeJsonComponent; }
// clang-format on

struct IClientBiomeComponentGlue {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IClientBiomeComponentGlue() = default;

    virtual bool resolveAndValidate(::SharedTypes::v1_21_40::IClientBiomeJsonComponent const&, ::FogDefinitionRegistry const&, ::DeferredRenderingBiomeRegistry const&) = 0;

    virtual void applyToBiome(::Biome&, ::SharedTypes::v1_21_40::IClientBiomeJsonComponent const&) const = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
struct IClientBiomeComponentGlue {};
#endif // @header-generator platform
