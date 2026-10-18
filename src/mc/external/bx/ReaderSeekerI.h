#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bx/ReaderI.h"
#include "mc/external/bx/SeekerI.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
struct ReaderSeekerI : public ::bx::ReaderI, public ::bx::SeekerI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReaderSeekerI() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
struct ReaderSeekerI {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
