#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/MaterialDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct MaterialDescription : public ::cg::MaterialDescription {
public:
    // prevent constructor by default
    MaterialDescription& operator=(MaterialDescription const&);
    MaterialDescription(MaterialDescription const&);
    MaterialDescription();
};
#else // @header-generator platform
struct MaterialDescription {};
#endif // @header-generator platform

} // namespace dragon
