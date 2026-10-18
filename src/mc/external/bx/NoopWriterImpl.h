#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bx/FileWriterI.h"
#include "mc/external/bx/Whence.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
namespace bx { class FilePath; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
class NoopWriterImpl : public ::bx::FileWriterI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NoopWriterImpl() /*override*/ = default;

    virtual bool open(::bx::FilePath const&, bool, ::bx::Error*) /*override*/;

    virtual void close() /*override*/;

    virtual int64 seek(int64, ::bx::Whence::Enum) /*override*/;

    virtual int write(void const*, int, ::bx::Error*) /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class NoopWriterImpl {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
