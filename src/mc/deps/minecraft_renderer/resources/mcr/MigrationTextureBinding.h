#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class TexturePtr; }
namespace mce { struct ClientTexture; }
namespace mce { struct ServerTexture; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mcr {

#if defined(LL_PLAT_A) // @header-generator platform
struct MigrationTextureBinding {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::ServerTexture operator()(::mce::TexturePtr const&) const;

    MCNAPI ::mce::ServerTexture operator()(::mce::ClientTexture const&) const;

    MCNAPI ::mce::ServerTexture operator()(::mce::ServerTexture const&) const;

    MCNAPI ::mce::ServerTexture operator()(std::monostate) const;
    // NOLINTEND
};
#else // @header-generator platform
struct MigrationTextureBinding {};
#endif // @header-generator platform

} // namespace mcr
