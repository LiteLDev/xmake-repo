#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/WorldTransferActionContext.h"
#include "mc/client/world/IWorldTransferHandler.h"

struct LocalWorldTransferActionFunc
: public ::type_safe::strong_typedef<
      LocalWorldTransferActionFunc,
      std::function<void(const IWorldTransferHandler&, const WorldTransferActionContext&)>>,
  public ::type_safe::strong_typedef_op::equality_comparison<LocalWorldTransferActionFunc> {
public:
    // prevent constructor by default
    LocalWorldTransferActionFunc& operator=(LocalWorldTransferActionFunc const&);
    LocalWorldTransferActionFunc(LocalWorldTransferActionFunc const&);
    LocalWorldTransferActionFunc();
};
#else // @header-generator platform
struct LocalWorldTransferActionFunc {};
#endif // @header-generator platform
