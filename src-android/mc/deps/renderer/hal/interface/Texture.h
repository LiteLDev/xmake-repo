#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
namespace mce { struct TextureDescription; }
namespace mce { struct TextureFactory; }
// clang-format on

namespace mce {

class Texture : public ::mce::TextureImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                     mDragonTextureLifetime;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> mRenderDragonTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    Texture& operator=(Texture const&);
    Texture(Texture const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Texture();

    MCNAPI Texture(::mce::Texture&&);

    MCNAPI void bindTexture(::mce::RenderContext&, uint const, uint const) const;

    MCNAPI void createTexture(::mce::RenderContext&, ::mce::TextureDescription const&);

    MCNAPI void deleteTexture();

    MCNAPI ::mce::TextureDescription const& getDescription() const;

    MCNAPI bool isCreated() const;

    MCNAPI ::mce::Texture& operator=(::mce::Texture&&);

    MCNAPI void resolveTexture(::mce::RenderContext&, ::mce::Texture*);

    MCNAPI void safelyDeleteTexture();

    MCNAPI void transitionToNonPixelShaderResourceState() const;

    MCNAPI void transitionToPixelShaderResourceState() const;

    MCNAPI void unbindTexture(::mce::RenderContext&, uint const) const;

    MCNAPI ~Texture();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::Texture&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
