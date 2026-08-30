#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourcePack;
// clang-format on

namespace RepositoryLoading {

struct VanillaPacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ResourcePack>> mEditorPack;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ResourcePack>> mVanillaPack;
    // NOLINTEND
};

} // namespace RepositoryLoading
