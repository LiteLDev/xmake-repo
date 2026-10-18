#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/resources/MERSTextureMode.h"
#include "mc/deps/minecraft_renderer/resources/NormalTextureMode.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ServerPBRTextureData {
public:
    // ServerPBRTextureData inner types declare
    // clang-format off
    struct ServerMERSTextureData;
    struct ServerNormalTextureData;
    // clang-format on

    // ServerPBRTextureData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ServerMERSTextureData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                 mTexture;
        ::ll::TypedStorage<1, 1, ::MERSTextureMode> mMode;
        // NOLINTEND
#else // @header-generator platform
    struct ServerMERSTextureData {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    struct ServerNormalTextureData {};
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfc1c4a;
    ::ll::UntypedStorage<8, 32> mUnk2030c1;
    ::ll::UntypedStorage<8, 32> mUnkcaa17b;
    ::ll::UntypedStorage<8, 24> mUnk947d91;
    ::ll::UntypedStorage<8, 24> mUnk921702;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPBRTextureData& operator=(ServerPBRTextureData const&);
    ServerPBRTextureData(ServerPBRTextureData const&);
    ServerPBRTextureData();

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
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
