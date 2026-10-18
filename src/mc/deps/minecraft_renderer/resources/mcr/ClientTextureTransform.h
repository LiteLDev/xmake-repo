#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class Texture; }
namespace mce { struct ServerTexture; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mcr {

#if defined(LL_PLAT_A) // @header-generator platform
class ClientTextureTransform {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::Texture* getTransformedTexture(::mce::ServerTexture const&);
    // NOLINTEND
};
#else // @header-generator platform
class ClientTextureTransform {};
#endif // @header-generator platform

} // namespace mcr
