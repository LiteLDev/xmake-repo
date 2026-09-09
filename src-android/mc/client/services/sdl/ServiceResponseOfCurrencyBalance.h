#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/commerce/VirtualCurrencyType.h"

namespace SDL {

struct ServiceResponseOfCurrencyBalance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<VirtualCurrencyType, uint>> mResponseCurrencies;
    // NOLINTEND
};

} // namespace SDL
