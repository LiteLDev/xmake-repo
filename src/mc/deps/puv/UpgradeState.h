#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class Logger; }
namespace Puv::internal { struct AlterationNode; }
namespace Puv::internal { struct PathElement; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Puv::internal {

struct UpgradeState {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Puv::Logger*>                         mLog;
    ::ll::TypedStorage<8, 64, ::entt::meta_any>                      mTarget;
    ::ll::TypedStorage<8, 8, ::Puv::internal::AlterationNode const*> mAlterationNode;
    ::ll::UntypedStorage<8, 72>                                      mSrcPath;
    ::ll::UntypedStorage<8, 72>                                      mDstPath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk1a352b;
    ::ll::UntypedStorage<8, 64> mUnk28558a;
    ::ll::UntypedStorage<8, 8>  mUnkc82809;
    ::ll::UntypedStorage<8, 80> mUnk594c36;
    ::ll::UntypedStorage<8, 80> mUnke95d77;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    UpgradeState& operator=(UpgradeState const&);
    UpgradeState(UpgradeState const&);
    UpgradeState();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~UpgradeState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Puv::internal
