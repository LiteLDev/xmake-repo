#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class PackManifest;
// clang-format on

struct PackImportStateObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>    mProductId;
    ::ll::TypedStorage<8, 8, ::PackManifest const*> mPackManifest;
    ::ll::TypedStorage<1, 1, bool const>            mSuccess;
    // NOLINTEND

public:
    // prevent constructor by default
    PackImportStateObject();
};
#else // @header-generator platform
struct PackImportStateObject {};
#endif // @header-generator platform
