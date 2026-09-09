#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/resources/MERSTextureMode.h"
#include "mc/deps/minecraft_renderer/resources/NormalTextureMode.h"

// auto generated forward declare list
// clang-format off
struct PBRTexturePtrs;
namespace mce { class TexturePtr; }
namespace mce { struct ClientTexture; }
// clang-format on

class ClientPBRTextureData {
public:
    // ClientPBRTextureData inner types declare
    // clang-format off
    struct ClientMERSTextureData;
    struct ClientNormalTextureData;
    // clang-format on

    // ClientPBRTextureData inner types define
    struct ClientMERSTextureData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::mce::ClientTexture const*> mTexture;
        ::ll::TypedStorage<1, 1, ::MERSTextureMode>           mMode;
        // NOLINTEND
    };

    struct ClientNormalTextureData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::mce::ClientTexture const*> mTexture;
        ::ll::TypedStorage<1, 1, ::NormalTextureMode>         mMode;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ClientTexture const*>                      mColor;
    ::ll::TypedStorage<8, 16, ::ClientPBRTextureData::ClientMERSTextureData>   mMERS;
    ::ll::TypedStorage<8, 16, ::ClientPBRTextureData::ClientNormalTextureData> mNormal;
    ::ll::TypedStorage<8, 8, ::mce::ClientTexture const*>                      mExtra1;
    ::ll::TypedStorage<8, 8, ::mce::ClientTexture const*>                      mExtra2;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientPBRTextureData(::PBRTexturePtrs const&, ::mce::TexturePtr const&, ::mce::TexturePtr const&);

    MCNAPI ClientPBRTextureData(
        ::mce::ClientTexture const*,
        ::mce::ClientTexture const*,
        ::MERSTextureMode const,
        ::mce::ClientTexture const*,
        ::NormalTextureMode const,
        ::mce::ClientTexture const*,
        ::mce::ClientTexture const*
    );

    MCNAPI ::mce::ClientTexture const* const getColorTexture() const;

    MCNAPI ::mce::ClientTexture const* const getExtra1Texture() const;

    MCNAPI ::mce::ClientTexture const* const getExtra2Texture() const;

    MCNAPI ::mce::ClientTexture const* const getMERSTexture() const;

    MCNAPI ::MERSTextureMode const& getMERSTextureMode() const;

    MCNAPI ::mce::ClientTexture const* const getNormalTexture() const;

    MCNAPI ::NormalTextureMode const& getNormalTextureMode() const;

    MCNAPI bool isColorTextureValid() const;

    MCNAPI bool isExtra1TextureValid() const;

    MCNAPI bool isExtra2TextureValid() const;

    MCNAPI bool isMERSTextureValid() const;

    MCNAPI bool isNormalTextureValid() const;

    MCNAPI void setColorTexture(::mce::ClientTexture const&);

    MCNAPI void setExtra2Texture(::mce::ClientTexture const&);

    MCNAPI void setGlintTexture(::mce::ClientTexture const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PBRTexturePtrs const&, ::mce::TexturePtr const&, ::mce::TexturePtr const&);

    MCNAPI void* $ctor(
        ::mce::ClientTexture const*,
        ::mce::ClientTexture const*,
        ::MERSTextureMode const,
        ::mce::ClientTexture const*,
        ::NormalTextureMode const,
        ::mce::ClientTexture const*,
        ::mce::ClientTexture const*
    );
    // NOLINTEND
};
