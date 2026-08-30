#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace Bedrock::Resources {

class BrpakIndex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<std::string, Bedrock::Resources::BrpakIndexEntry> const> mIndex;
    ::ll::TypedStorage<8, 24, std::string const>                                                mArchivePath;
    // NOLINTEND
};

} // namespace Bedrock::Resources
