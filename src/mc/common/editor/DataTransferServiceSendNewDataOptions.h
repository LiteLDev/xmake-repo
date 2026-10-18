#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

struct DataTransferServiceSendNewDataOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf0cb99;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceSendNewDataOptions& operator=(DataTransferServiceSendNewDataOptions const&);
    DataTransferServiceSendNewDataOptions(DataTransferServiceSendNewDataOptions const&);
    DataTransferServiceSendNewDataOptions();
};

} // namespace Editor::Network
#endif // @header-generator platform
