#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bx/CloserI.h"
#include "mc/external/bx/ReaderOpenI.h"
#include "mc/external/bx/ReaderSeekerI.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
struct FileReaderI : public ::bx::ReaderOpenI, public ::bx::CloserI, public ::bx::ReaderSeekerI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileReaderI() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
struct FileReaderI {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
