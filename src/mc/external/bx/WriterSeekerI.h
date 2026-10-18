#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bx/SeekerI.h"
#include "mc/external/bx/WriterI.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bx {

#if defined(LL_PLAT_C) // @header-generator platform
struct WriterSeekerI : public ::bx::WriterI, public ::bx::SeekerI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WriterSeekerI() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
struct WriterSeekerI {};
#endif // @header-generator platform

} // namespace bx
#endif // @header-generator platform
