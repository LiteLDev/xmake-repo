#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bx/Whence.h"
#include "mc/external/bx/WriterSeekerI.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class SizerWriter : public ::bx::WriterSeekerI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> m_pos;
    ::ll::TypedStorage<8, 8, int64> m_top;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SizerWriter() /*override*/ = default;

    virtual int64 seek(int64, ::bx::Whence::Enum) /*override*/;

    virtual int write(void const*, int, ::bx::Error*) /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class SizerWriter {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
