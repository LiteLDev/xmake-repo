#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SerializedSkinRef;
namespace mce { struct Image; }
// clang-format on

struct ConnectionSkinInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::string const&>         skinId;
    ::ll::TypedStorage<8, 8, ::mce::Image const&>        skinImageData;
    ::ll::TypedStorage<8, 8, std::string const&>         capeId;
    ::ll::TypedStorage<8, 8, ::mce::Image const&>        capeImageData;
    ::ll::TypedStorage<8, 8, ::SerializedSkinRef const&> serializedSkin;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionSkinInfo& operator=(ConnectionSkinInfo const&);
    ConnectionSkinInfo(ConnectionSkinInfo const&);
    ConnectionSkinInfo();
};
