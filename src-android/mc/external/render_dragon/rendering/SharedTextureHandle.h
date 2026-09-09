#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::rendering::details { template<typename T0, typename T1> class BufferHandleTypeWrapper; }
// clang-format on

namespace dragon::rendering {

struct SharedTextureHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>     mHandle;
    ::ll::TypedStorage<8, 8, ulong> mNativeHandle;
    // NOLINTEND
};

} // namespace dragon::rendering
