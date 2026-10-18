#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class SerializedSkinRef;
namespace mce { struct Image; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ConnectionSkinInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::string const&>         skinId;
    ::ll::TypedStorage<8, 8, ::mce::Image const&>        skinImageData;
    ::ll::TypedStorage<8, 8, std::string const&>         capeId;
    ::ll::TypedStorage<8, 8, ::mce::Image const&>        capeImageData;
    ::ll::TypedStorage<8, 8, ::SerializedSkinRef const&> serializedSkin;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk351606;
    ::ll::UntypedStorage<8, 8> mUnkde5c2e;
    ::ll::UntypedStorage<8, 8> mUnk5248e5;
    ::ll::UntypedStorage<8, 8> mUnke7edb7;
    ::ll::UntypedStorage<8, 8> mUnkb8f2ad;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionSkinInfo& operator=(ConnectionSkinInfo const&);
    ConnectionSkinInfo(ConnectionSkinInfo const&);
    ConnectionSkinInfo();
};
