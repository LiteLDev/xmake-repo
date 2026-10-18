#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/camera_instruction_options/SplineInstruction.h"

struct CameraSplineInstructionEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 104, ::CameraInstructionOptions::SplineInstruction> mCameraSplineInstruction;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraSplineInstructionEvent& operator=(CameraSplineInstructionEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CameraSplineInstructionEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 112, ::CameraInstructionOptions::SplineInstruction> mCameraSplineInstruction;
#endif // @header-generator platform
    // NOLINTEND
};
