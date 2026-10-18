#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class UnzipInternals {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, void*> mZipFile;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk8cf14c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    UnzipInternals& operator=(UnzipInternals const&);
    UnzipInternals(UnzipInternals const&);
#endif // @header-generator platform
    UnzipInternals();
};

} // namespace Core
