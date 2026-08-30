#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionEvent.h"

struct LegacyEventItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, DefinitionEvent>>> mEventHandlers;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyEventItemComponentData& operator=(LegacyEventItemComponentData const&);
    LegacyEventItemComponentData(LegacyEventItemComponentData const&);
};
