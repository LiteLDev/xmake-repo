#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/data_store/DataStore.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::DataStoreDetail {

struct DataStoreInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::fmt::v11::fstring<std::string&>> mFileNameFormat;
    ::ll::UntypedStorage<8, 16>                                  mFilePathFn;
    ::ll::UntypedStorage<8, 192>                                 mCustomHandlers;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16>  mUnk78cca3;
    ::ll::UntypedStorage<8, 8>   mUnkbb84ee;
    ::ll::UntypedStorage<8, 192> mUnk4413f7;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DataStoreInfo& operator=(DataStoreInfo const&);
    DataStoreInfo(DataStoreInfo const&);
    DataStoreInfo();
#endif // @header-generator platform
};

} // namespace Bedrock::DataStoreDetail
