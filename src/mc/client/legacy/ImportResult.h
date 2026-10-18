#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct LocalWorldInfo;
namespace Legacy { struct WorldConversionReport; }
// clang-format on

struct ImportResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Legacy::WorldConversionReport>> mConversionReport;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LocalWorldInfo>>                mWorldInfo;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ImportResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ImportResult {};
#endif // @header-generator platform
