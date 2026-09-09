#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Pack;
class ResourcePack;
// clang-format on

namespace PackCommand {

struct PackAssociations {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Pack>>         mPack;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ResourcePack>> mResourcePack;
    // NOLINTEND
};

} // namespace PackCommand
