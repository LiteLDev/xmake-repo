#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class Logger; }
namespace Puv::internal { struct AlterationNode; }
namespace Puv::internal { struct PathElement; }
// clang-format on

namespace Puv::internal {

struct UpgradeState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Puv::Logger*>                         mLog;
    ::ll::TypedStorage<8, 64, ::entt::meta_any>                      mTarget;
    ::ll::TypedStorage<8, 8, ::Puv::internal::AlterationNode const*> mAlterationNode;
    ::ll::UntypedStorage<8, 72>                                      mSrcPath;
    ::ll::UntypedStorage<8, 72>                                      mDstPath;
    // NOLINTEND

public:
    // prevent constructor by default
    UpgradeState& operator=(UpgradeState const&);
    UpgradeState(UpgradeState const&);
    UpgradeState();
};

} // namespace Puv::internal
