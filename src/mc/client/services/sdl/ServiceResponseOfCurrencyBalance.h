#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/store/commerce/VirtualCurrencyType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServiceResponseOfCurrencyBalance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<VirtualCurrencyType, uint>> mResponseCurrencies;
    // NOLINTEND
};
#else // @header-generator platform
struct ServiceResponseOfCurrencyBalance {};
#endif // @header-generator platform

} // namespace SDL
