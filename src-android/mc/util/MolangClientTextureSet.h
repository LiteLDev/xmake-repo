#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/minecraft_renderer/resources/MERSTextureMode.h"
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"
#include "mc/deps/minecraft_renderer/resources/NormalTextureMode.h"

// auto generated forward declare list
// clang-format off
struct BedrockTextureData;
namespace mce { class TexturePtr; }
namespace mce { struct ClientTexture; }
// clang-format on

struct MolangClientTextureSet {
public:
    // MolangClientTextureSet inner types declare
    // clang-format off
    struct ExtraPBRData;
    // clang-format on

    // MolangClientTextureSet inner types define
    struct ExtraPBRData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::weak_ptr<const BedrockTextureData>> mMERSTextureDataWeakPtr;
        ::ll::TypedStorage<8, 16, std::weak_ptr<const BedrockTextureData>> mNormalTextureDataWeakPtr;
        ::ll::TypedStorage<4, 20, std::optional<MERSUniformData>>          mMERSUniforms;
        ::ll::TypedStorage<1, 1, ::MERSTextureMode>                        mMERSTextureMode;
        ::ll::TypedStorage<1, 1, ::NormalTextureMode>                      mNormalTextureMode;
        // NOLINTEND

    public:
        // prevent constructor by default
        ExtraPBRData& operator=(ExtraPBRData const&);
        ExtraPBRData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<const BedrockTextureData>>              mColorTextureDataWeakPtr;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MolangClientTextureSet::ExtraPBRData>> mPBRData;
    ::ll::TypedStorage<8, 40, ::HashedString>                                       mName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MolangClientTextureSet();

    MCNAPI explicit MolangClientTextureSet(::HashedString const&);

    MCNAPI MolangClientTextureSet(::MolangClientTextureSet const&);

    MCNAPI MolangClientTextureSet(::HashedString const&, ::mce::TexturePtr const, ::mce::TexturePtr const);

    MCNAPI MolangClientTextureSet(
        ::HashedString const&,
        ::mce::TexturePtr const,
        ::mce::TexturePtr const,
        ::mce::TexturePtr const
    );

    MCNAPI MolangClientTextureSet(
        ::HashedString const&,
        ::mce::TexturePtr const,
        ::mce::TexturePtr const,
        ::MERSTextureMode const,
        ::mce::TexturePtr const,
        ::NormalTextureMode const
    );

    MCNAPI MolangClientTextureSet(
        ::HashedString const&,
        ::mce::TexturePtr const,
        ::mce::TexturePtr const,
        ::MERSTextureMode const,
        ::mce::TexturePtr const,
        ::NormalTextureMode const,
        std::optional<MERSUniformData> const&
    );

    MCNAPI ::mce::ClientTexture const& getClientMERSTexture() const;

    MCNAPI ::MERSTextureMode getClientMERSTextureMode() const;

    MCNAPI ::mce::ClientTexture const& getClientNormalTexture() const;

    MCNAPI ::NormalTextureMode getClientNormalTextureMode() const;

    MCNAPI ::mce::ClientTexture const& getClientTexture() const;

    MCNAPI std::optional<MERSUniformData> getMERSUniforms() const;

    MCNAPI ~MolangClientTextureSet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::HashedString const&);

    MCNAPI void* $ctor(::MolangClientTextureSet const&);

    MCNAPI void* $ctor(::HashedString const&, ::mce::TexturePtr const, ::mce::TexturePtr const);

    MCNAPI void*
    $ctor(::HashedString const&, ::mce::TexturePtr const, ::mce::TexturePtr const, ::mce::TexturePtr const);

    MCNAPI void* $ctor(
        ::HashedString const&,
        ::mce::TexturePtr const,
        ::mce::TexturePtr const,
        ::MERSTextureMode const,
        ::mce::TexturePtr const,
        ::NormalTextureMode const
    );

    MCNAPI void* $ctor(
        ::HashedString const&,
        ::mce::TexturePtr const,
        ::mce::TexturePtr const,
        ::MERSTextureMode const,
        ::mce::TexturePtr const,
        ::NormalTextureMode const,
        std::optional<MERSUniformData> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
