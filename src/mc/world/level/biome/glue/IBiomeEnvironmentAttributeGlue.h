#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

struct IBiomeEnvironmentAttributeGlue {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBiomeEnvironmentAttributeGlue() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applyToBiome(::Biome&, std::string const&, ::entt::meta_any const&) const = 0;
#else // @header-generator platform
    virtual void applyToBiome(::Biome&, ::std::string const&, ::entt::meta_any const&) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
