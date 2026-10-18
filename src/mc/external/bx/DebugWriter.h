#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bx/WriterI.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class DebugWriter : public ::bx::WriterI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int write(void const*, int, ::bx::Error*) /*override*/;

    virtual ~DebugWriter() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class DebugWriter {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
