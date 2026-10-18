#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/MCCATEGORY.h"

struct MCRESULT {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mSuccess;
    ::ll::TypedStorage<1, 1, ::MCCATEGORY> mCategory;
    ::ll::TypedStorage<2, 2, ushort>       mCode;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MCRESULT();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getFullCode() const;

    MCNAPI bool isSuccess() const;

    MCNAPI bool operator==(::MCRESULT const&) const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
