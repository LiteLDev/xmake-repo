#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bx/CloserI.h"
#include "mc/external/bx/WriterOpenI.h"
#include "mc/external/bx/WriterSeekerI.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
struct FileWriterI : public ::bx::WriterOpenI, public ::bx::CloserI, public ::bx::WriterSeekerI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileWriterI() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
struct FileWriterI {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
