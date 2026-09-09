#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class TexturePtr; }
namespace mce { struct ClientTexture; }
namespace mce { struct ServerTexture; }
// clang-format on

namespace mcr {

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

} // namespace mcr
