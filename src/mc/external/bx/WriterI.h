#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
struct WriterI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WriterI() = 0;

    virtual int write(void const* _data, int _size, ::bx::Error* _err) = 0;
    // NOLINTEND
};
#else // @header-generator platform
struct WriterI {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
