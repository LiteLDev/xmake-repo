#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core_graphics/ImageBuffer.h"

class ScreenshotRecorder : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>               mEnabled;
    ::ll::TypedStorage<8, 48, ::cg::ImageBuffer> mLastBackBuffer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenshotRecorder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onFrameRendered();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
