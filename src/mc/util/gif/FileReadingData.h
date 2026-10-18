#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace gif {

struct FileReadingData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, void*> file;
    ::ll::UntypedStorage<8, 24>     fileAccess;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk1f142a;
    ::ll::UntypedStorage<8, 24> mUnkfce92d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FileReadingData& operator=(FileReadingData const&);
    FileReadingData(FileReadingData const&);
    FileReadingData();
#endif // @header-generator platform
};

} // namespace gif
