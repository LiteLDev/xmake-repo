#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TypeExecutingEvent.h"

// auto generated forward declare list
// clang-format off
class DefinitionEvent;
class EventResponseFactory;
class MinEngineVersion;
namespace Json { class Value; }
// clang-format on

class DefinitionEventLoader {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _loadCollection(
        ::DefinitionEvent&,
        ::Json::Value const&,
        ::MinEngineVersion const&,
        ::TypeExecutingEvent,
        ::EventResponseFactory const*
    );

    MCNAPI static ::DefinitionEvent
    loadEvent(::Json::Value, ::MinEngineVersion const&, ::TypeExecutingEvent, ::EventResponseFactory const*);
    // NOLINTEND
};
