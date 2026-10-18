#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/resource_processing/BrpakIndexEntry.h"
#include "mc/deps/resource_processing/BrpakValidationResult.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class File; }
namespace Core { class PathView; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Resources {

class BrpakIndex {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::map<std::string, Bedrock::Resources::BrpakIndexEntry> const> mIndex;
    ::ll::TypedStorage<8, 24, std::string const>                                                mArchivePath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk35cf6e;
    ::ll::UntypedStorage<8, 32> mUnke702e9;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BrpakIndex& operator=(BrpakIndex const&);
    BrpakIndex(BrpakIndex const&);
    BrpakIndex();
#endif // @header-generator platform
};

} // namespace Bedrock::Resources
