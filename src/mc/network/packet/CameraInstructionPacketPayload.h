#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/CameraInstruction.h"

struct CameraInstructionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 328, ::CameraInstruction> mCameraInstruction;
#else // @header-generator platform
    ::ll::TypedStorage<8, 336, ::CameraInstruction> mCameraInstruction;
#endif // @header-generator platform
    // NOLINTEND
};
