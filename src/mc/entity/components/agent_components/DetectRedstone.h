#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace AgentComponents {

class DetectRedstone {
public:
    // DetectRedstone inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // DetectRedstone inner types define
    class Definition {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> mDir;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1> mUnk774fe7;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction> mDir;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk8d529b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DetectRedstone& operator=(DetectRedstone const&);
    DetectRedstone(DetectRedstone const&);
    DetectRedstone();
#endif // @header-generator platform
};

} // namespace AgentComponents
