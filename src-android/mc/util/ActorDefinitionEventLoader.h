#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionEvent;
class ActorEventResponseFactory;
class MinEngineVersion;
class SemVersion;
namespace Json { class Value; }
// clang-format on

class ActorDefinitionEventLoader {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _loadCollection(
        ::ActorDefinitionEvent&,
        ::Json::Value const&,
        ::MinEngineVersion const&,
        ::ActorEventResponseFactory const*
    );

    MCNAPI static ::ActorDefinitionEvent
    _loadEvent(::Json::Value&, ::MinEngineVersion const&, ::ActorEventResponseFactory const*);

    MCNAPI static ::ActorDefinitionEvent
    loadEvent(::Json::Value, ::MinEngineVersion const&, ::SemVersion const&, ::ActorEventResponseFactory const*);
    // NOLINTEND
};
