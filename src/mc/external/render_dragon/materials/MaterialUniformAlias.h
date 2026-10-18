#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/materials/MaterialIdentifier.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
struct MaterialUniformAlias
: public ::dragon::materials::MaterialIdentifier<dragon::materials::MaterialUniformAliasContext> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void MaterialIdentifier(std::string const&);
    // NOLINTEND
};
#else // @header-generator platform
struct MaterialUniformAlias {};
#endif // @header-generator platform

} // namespace dragon::materials
