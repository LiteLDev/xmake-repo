#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon::rendering::details { template<typename T0, typename T1> class BufferHandleTypeWrapper; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
struct SharedTextureHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>     mHandle;
    ::ll::TypedStorage<8, 8, ulong> mNativeHandle;
    // NOLINTEND
};
#else // @header-generator platform
struct SharedTextureHandle {};
#endif // @header-generator platform

} // namespace dragon::rendering
