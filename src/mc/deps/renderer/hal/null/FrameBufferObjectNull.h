#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/base/FrameBufferObjectBase.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class FrameBufferObjectNull : public ::mce::FrameBufferObjectBase {
public:
    // prevent constructor by default
    FrameBufferObjectNull& operator=(FrameBufferObjectNull const&);
    FrameBufferObjectNull(FrameBufferObjectNull const&);
};
#else // @header-generator platform
class FrameBufferObjectNull {};
#endif // @header-generator platform

} // namespace mce
