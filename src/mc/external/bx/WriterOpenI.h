#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
namespace bx { class FilePath; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
struct WriterOpenI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WriterOpenI() = 0;

    virtual bool open(::bx::FilePath const& _filePath, bool _append, ::bx::Error* _err) = 0;
    // NOLINTEND
};
#else // @header-generator platform
struct WriterOpenI {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
