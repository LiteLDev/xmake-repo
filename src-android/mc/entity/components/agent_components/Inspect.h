#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class EntityContext;
class Vec3;
namespace AgentComponents { struct BlockQueryResult; }
// clang-format on

namespace AgentComponents {

class Inspect {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> mDir;
    ::ll::TypedStorage<8, 8, ::AgentComponents::BlockQueryResult(*)(::BlockSource&, ::Vec3, float, ::AgentComponents::Direction)> getNextBlockFn;
    // clang-format on
    // NOLINTEND
};

} // namespace AgentComponents
