#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FileWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke7b55f;
    // NOLINTEND

public:
    // prevent constructor by default
    FileWrapper& operator=(FileWrapper const&);
    FileWrapper(FileWrapper const&);
    FileWrapper();
};

} // namespace webrtc
#endif // @header-generator platform
