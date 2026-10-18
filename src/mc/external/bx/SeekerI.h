#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bx/Whence.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
struct SeekerI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SeekerI() = 0;

    virtual int64 seek(int64 _offset, ::bx::Whence::Enum _whence) = 0;
    // NOLINTEND
};
#else // @header-generator platform
struct SeekerI {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
