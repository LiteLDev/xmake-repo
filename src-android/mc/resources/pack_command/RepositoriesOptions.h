#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class RepositoryPacks;
class ResourcePack;
// clang-format on

namespace PackCommand {

struct RepositoriesOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<RepositoryPacks>> mRepositoryPacks;
    ::ll::UntypedStorage<8, 64>                               mRemoveFromStack;
    // NOLINTEND
};

} // namespace PackCommand
