#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/store/StoreErrorCodes.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/store/StoreErrorCodes.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace MarketplaceErrorUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct StoreErrorResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::StoreErrorCodes> storeErrorCode;
    ::ll::TypedStorage<8, 24, std::string>      errorCode;
    ::ll::TypedStorage<8, 24, std::string>      errorText;
    ::ll::TypedStorage<4, 4, uint>              httpStatusCode;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct StoreErrorResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::StoreErrorCodes> storeErrorCode;
    ::ll::TypedStorage<8, 32, ::std::string>    errorCode;
    ::ll::TypedStorage<8, 32, ::std::string>    errorText;
    ::ll::TypedStorage<4, 4, uint>              httpStatusCode;
    // NOLINTEND
};
#else // @header-generator platform
struct StoreErrorResult {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace MarketplaceErrorUtils
