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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ActorDefinitionEvent&,
        ::Json::Value const&,
        ::MinEngineVersion const&,
        ::ActorEventResponseFactory const*
#else // @header-generator platform
        ::ActorDefinitionEvent&            defEvent,
        ::Json::Value const&               collection,
        ::MinEngineVersion const&          minEngineVersion,
        ::ActorEventResponseFactory const* responseFactory
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ActorDefinitionEvent
    _loadEvent(::Json::Value&, ::MinEngineVersion const&, ::ActorEventResponseFactory const*);
#else // @header-generator platform
    MCNAPI static ::ActorDefinitionEvent _loadEvent(
        ::Json::Value&                     root,
        ::MinEngineVersion const&          minEngineVersion,
        ::ActorEventResponseFactory const* responseFactory
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ActorDefinitionEvent
    loadEvent(::Json::Value, ::MinEngineVersion const&, ::SemVersion const&, ::ActorEventResponseFactory const*);
#else // @header-generator platform
    MCNAPI static ::ActorDefinitionEvent loadEvent(
        ::Json::Value                      root,
        ::MinEngineVersion const&          minEngineVersion,
        ::SemVersion const&                formatVersion,
        ::ActorEventResponseFactory const* responseFactory
    );
#endif // @header-generator platform
    // NOLINTEND
};
