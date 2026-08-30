#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/TextureDescription.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
namespace mce { class Texture; }
// clang-format on

namespace mce {

class TextureBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::mce::TextureDescription> textureDescription;
    ::ll::TypedStorage<1, 1, bool>                       created;
    ::ll::TypedStorage<1, 1, bool>                       mOwnsResource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureBase();

    MCNAPI TextureBase(::mce::TextureBase&&);

    MCNAPI void createTexture(::mce::RenderContext&, ::mce::TextureDescription const&);

    MCNAPI void deleteTexture();

    MCNAPI bool isCreated() const;

    MCNAPI ::mce::TextureBase& operator=(::mce::TextureBase&&);

    MCNAPI ~TextureBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::TextureBase&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
