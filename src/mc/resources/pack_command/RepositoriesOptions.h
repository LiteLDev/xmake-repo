#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class RepositoryPacks;
class ResourcePack;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace PackCommand {

struct RepositoriesOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<RepositoryPacks>> mRepositoryPacks;
    ::ll::UntypedStorage<8, 64>                               mRemoveFromStack;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkc71ff3;
    ::ll::UntypedStorage<8, 64> mUnka9c2bb;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositoriesOptions& operator=(RepositoriesOptions const&);
    RepositoriesOptions(RepositoriesOptions const&);
    RepositoriesOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RepositoriesOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace PackCommand
