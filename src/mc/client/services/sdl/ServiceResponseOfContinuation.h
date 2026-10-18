#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IStoreCatalogItem;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServiceResponseOfContinuation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>            mNewOffers;
    ::ll::TypedStorage<8, 24, std::string> mContinuationToken;
    // NOLINTEND
};
#else // @header-generator platform
struct ServiceResponseOfContinuation {};
#endif // @header-generator platform

} // namespace SDL
