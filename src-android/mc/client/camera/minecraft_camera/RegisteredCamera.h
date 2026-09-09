#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/camera/CameraDocument.h"

namespace MinecraftCamera {

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

} // namespace MinecraftCamera
