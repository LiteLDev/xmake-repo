#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedImageResource; }
// clang-format on

struct OffscreenCaptureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mWidth;
    ::ll::TypedStorage<4, 4, uint> mHeight;
    ::ll::UntypedStorage<8, 24>    mCaptureImage;
    // NOLINTEND

public:
    // prevent constructor by default
    OffscreenCaptureData();
};
