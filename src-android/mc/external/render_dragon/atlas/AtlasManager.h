#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::atlas { class IAtlasRenderOperations; }
namespace dragon::atlas { class IAtlasUserOperations; }
// clang-format on

namespace dragon::atlas {

struct AtlasManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::atlas::IAtlasRenderOperations>> mRenderOperations;
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::atlas::IAtlasUserOperations>>   mUserOperations;
    // NOLINTEND
};

} // namespace dragon::atlas
