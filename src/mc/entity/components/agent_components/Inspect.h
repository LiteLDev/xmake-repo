#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

namespace AgentComponents {

class Inspect {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> mDir;
    ::ll::TypedStorage<8, 8, ::AgentComponents::BlockQueryResult(*)(::BlockSource&, ::Vec3, float, ::AgentComponents::Direction)> getNextBlockFn;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk1d4a84;
    ::ll::UntypedStorage<8, 8> mUnk3f1363;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Inspect& operator=(Inspect const&);
    Inspect(Inspect const&);
    Inspect();
#endif // @header-generator platform
};

} // namespace AgentComponents
