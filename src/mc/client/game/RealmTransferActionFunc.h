#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/WorldTransferActionContext.h"
#include "mc/client/world/IWorldTransferHandler.h"

struct RealmTransferActionFunc
: public ::type_safe::strong_typedef<
      RealmTransferActionFunc,
      std::function<void(const IWorldTransferHandler&, const WorldTransferActionContext&)>>,
  public ::type_safe::strong_typedef_op::equality_comparison<RealmTransferActionFunc> {
public:
    // prevent constructor by default
    RealmTransferActionFunc& operator=(RealmTransferActionFunc const&);
    RealmTransferActionFunc(RealmTransferActionFunc const&);
    RealmTransferActionFunc();
};
#else // @header-generator platform
struct RealmTransferActionFunc {};
#endif // @header-generator platform
