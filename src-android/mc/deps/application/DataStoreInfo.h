#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data_store/DataStore.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
// clang-format on

namespace Bedrock::DataStoreDetail {

struct DataStoreInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::fmt::v11::fstring<std::string&>> mFileNameFormat;
    ::ll::UntypedStorage<8, 16>                                  mFilePathFn;
    ::ll::UntypedStorage<8, 192>                                 mCustomHandlers;
    // NOLINTEND
};

} // namespace Bedrock::DataStoreDetail
