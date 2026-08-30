#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace AgentComponents::Actions {

struct QueueItem {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> requestId;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> cmdVersion;
    ::ll::TypedStorage<8, 168, std::variant<std::monostate, AgentComponents::Actions::Attack, AgentComponents::Actions::Collect, AgentComponents::Actions::Destroy, AgentComponents::Actions::DetectRedstone, AgentComponents::Actions::DetectObstacle, AgentComponents::Actions::Drop, AgentComponents::Actions::DropAll, AgentComponents::Actions::Inspect, AgentComponents::Actions::InspectData, AgentComponents::Actions::InspectItemCount, AgentComponents::Actions::InspectItemDetail, AgentComponents::Actions::InspectItemSpace, AgentComponents::Actions::Interact, AgentComponents::Actions::Move, AgentComponents::Actions::PlaceBlock, AgentComponents::Actions::Till, AgentComponents::Actions::TransferItemTo, AgentComponents::Actions::Turn>> action;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    QueueItem(QueueItem const&);
    QueueItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~QueueItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace AgentComponents::Actions
