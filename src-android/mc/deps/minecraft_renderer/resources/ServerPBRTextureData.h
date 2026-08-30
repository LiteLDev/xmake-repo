#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/resources/MERSTextureMode.h"
#include "mc/deps/minecraft_renderer/resources/NormalTextureMode.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

struct ServerPBRTextureData {
public:
    // ServerPBRTextureData inner types declare
    // clang-format off
    struct ServerMERSTextureData;
    struct ServerNormalTextureData;
    // clang-format on

    // ServerPBRTextureData inner types define
    struct ServerMERSTextureData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                 mTexture;
        ::ll::TypedStorage<1, 1, ::MERSTextureMode> mMode;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerMERSTextureData& operator=(ServerMERSTextureData const&);
        ServerMERSTextureData(ServerMERSTextureData const&);
    };

    struct ServerNormalTextureData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                   mTexture;
        ::ll::TypedStorage<1, 1, ::NormalTextureMode> mMode;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerNormalTextureData& operator=(ServerNormalTextureData const&);
        ServerNormalTextureData(ServerNormalTextureData const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                mColor;
    ::ll::TypedStorage<8, 32, ::ServerPBRTextureData::ServerMERSTextureData>   mMERS;
    ::ll::TypedStorage<8, 32, ::ServerPBRTextureData::ServerNormalTextureData> mNormal;
    ::ll::UntypedStorage<8, 24>                                                mExtra1;
    ::ll::UntypedStorage<8, 24>                                                mExtra2;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ServerPBRTextureData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
