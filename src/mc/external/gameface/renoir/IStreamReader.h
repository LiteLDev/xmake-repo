#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_C) // @header-generator platform
class IStreamReader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStreamReader() = default;

    virtual uint GetSize() = 0;

    virtual uint Read(uint offset, uchar* buffer, uint count) = 0;

    virtual void Close() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IStreamReader {};
#endif // @header-generator platform

} // namespace renoir
#endif // @header-generator platform
