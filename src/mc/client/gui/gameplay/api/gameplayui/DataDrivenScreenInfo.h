#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct DataDrivenScreenInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>        screenId;
    ::ll::TypedStorage<4, 4, uint>                formId;
    ::ll::TypedStorage<4, 8, std::optional<uint>> dataInstanceId;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DataDrivenScreenInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>        screenId;
    ::ll::TypedStorage<4, 4, uint>                  formId;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> dataInstanceId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DataDrivenScreenInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct DataDrivenScreenInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GameplayUI
