#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/entity/components/agent_components/actions/Destroy.h"
#include "mc/entity/components/agent_components/actions/DetectObstacle.h"
#include "mc/entity/components/agent_components/actions/DetectRedstone.h"
#include "mc/entity/components/agent_components/actions/Inspect.h"
#include "mc/entity/components/agent_components/actions/Interact.h"
#include "mc/entity/components/agent_components/actions/Move.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/world/actor/agent/agent_components/actions/Attack.h"
#include "mc/world/actor/agent/agent_components/actions/Collect.h"
#include "mc/world/actor/agent/agent_components/actions/Drop.h"
#include "mc/world/actor/agent/agent_components/actions/DropAll.h"
#include "mc/world/actor/agent/agent_components/actions/InspectData.h"
#include "mc/world/actor/agent/agent_components/actions/InspectItemCount.h"
#include "mc/world/actor/agent/agent_components/actions/InspectItemDetail.h"
#include "mc/world/actor/agent/agent_components/actions/InspectItemSpace.h"
#include "mc/world/actor/agent/agent_components/actions/PlaceBlock.h"
#include "mc/world/actor/agent/agent_components/actions/Till.h"
#include "mc/world/actor/agent/agent_components/actions/TransferItemTo.h"
#include "mc/world/actor/agent/agent_components/actions/Turn.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace AgentComponents::Actions {

struct QueueItem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> requestId;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> cmdVersion;
    ::ll::TypedStorage<8, 168, std::variant<std::monostate, AgentComponents::Actions::Attack, AgentComponents::Actions::Collect, AgentComponents::Actions::Destroy, AgentComponents::Actions::DetectRedstone, AgentComponents::Actions::DetectObstacle, AgentComponents::Actions::Drop, AgentComponents::Actions::DropAll, AgentComponents::Actions::Inspect, AgentComponents::Actions::InspectData, AgentComponents::Actions::InspectItemCount, AgentComponents::Actions::InspectItemDetail, AgentComponents::Actions::InspectItemSpace, AgentComponents::Actions::Interact, AgentComponents::Actions::Move, AgentComponents::Actions::PlaceBlock, AgentComponents::Actions::Till, AgentComponents::Actions::TransferItemTo, AgentComponents::Actions::Turn>> action;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>  mUnkf17f98;
    ::ll::UntypedStorage<4, 4>   mUnk9fed68;
    ::ll::UntypedStorage<8, 168> mUnk919642;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    QueueItem(QueueItem const&);
#else // @header-generator platform
    QueueItem& operator=(QueueItem const&);
#endif // @header-generator platform
    QueueItem();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~QueueItem();
#else // @header-generator platform
    MCAPI QueueItem(::AgentComponents::Actions::QueueItem const&);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::AgentComponents::Actions::QueueItem const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace AgentComponents::Actions
