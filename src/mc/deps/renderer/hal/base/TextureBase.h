#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/TextureDescription.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
namespace mce { class Texture; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TextureBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> mUnkd1377d;
    ::ll::UntypedStorage<1, 1>  mUnkf4c59a;
    ::ll::UntypedStorage<1, 1>  mUnkef408d;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureBase& operator=(TextureBase const&);
    TextureBase(TextureBase const&);
    TextureBase();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureBase(::mce::TextureBase&& other);

    MCNAPI ~TextureBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::TextureBase&& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class TextureBase {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
