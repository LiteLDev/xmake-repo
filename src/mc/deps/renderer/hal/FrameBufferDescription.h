#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/SampleDescription.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct TextureDescription; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class FrameBufferDescription {};
#endif // @header-generator platform

} // namespace mce
