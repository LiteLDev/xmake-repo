#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/SampleDescription.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct TextureDescription; }
// clang-format on

namespace mce {

class FrameBufferDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::SampleDescription> mSampleDescription;
    ::ll::TypedStorage<4, 4, uint>                      mWidth;
    ::ll::TypedStorage<4, 4, uint>                      mHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameBufferDescription& operator=(FrameBufferDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FrameBufferDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace mce
