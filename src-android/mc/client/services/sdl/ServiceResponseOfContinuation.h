#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IStoreCatalogItem;
// clang-format on

namespace SDL {

struct ServiceResponseOfContinuation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>            mNewOffers;
    ::ll::TypedStorage<8, 24, std::string> mContinuationToken;
    // NOLINTEND
};

} // namespace SDL
