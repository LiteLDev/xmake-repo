#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ExternalDataInterface;
// clang-format on

struct ExternalDataComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ExternalDataInterface>> mExternalDataInterface;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ExternalDataComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ExternalDataInterface>> mExternalDataInterface;
#endif // @header-generator platform
    // NOLINTEND
};
