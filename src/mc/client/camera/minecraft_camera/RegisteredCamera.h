#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/camera/CameraDocument.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace MinecraftCamera {

#if defined(LL_PLAT_A) // @header-generator platform
struct RegisteredCamera {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>                        mFilename;
    ::ll::TypedStorage<8, 72, ::SharedTypes::v1_21_100::CameraDocument> mDocument;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredCamera& operator=(RegisteredCamera const&);
    RegisteredCamera();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RegisteredCamera();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct RegisteredCamera {};
#endif // @header-generator platform

} // namespace MinecraftCamera
