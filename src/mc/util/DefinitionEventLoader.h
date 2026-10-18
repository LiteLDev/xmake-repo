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
#if defined(LL_PLAT_A) // @header-generator platform
        ::DefinitionEvent&,
        ::Json::Value const&,
        ::MinEngineVersion const&,
        ::TypeExecutingEvent,
        ::EventResponseFactory const*
#else // @header-generator platform
        ::DefinitionEvent&            defEvent,
        ::Json::Value const&          collection,
        ::MinEngineVersion const&     minEngineVersion,
        ::TypeExecutingEvent          eventCaller,
        ::EventResponseFactory const* responseFactory
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::DefinitionEvent
    loadEvent(::Json::Value, ::MinEngineVersion const&, ::TypeExecutingEvent, ::EventResponseFactory const*);
#else // @header-generator platform
    MCNAPI static ::DefinitionEvent loadEvent(
        ::Json::Value                 root,
        ::MinEngineVersion const&     minEngineVersion,
        ::TypeExecutingEvent          eventCaller,
        ::EventResponseFactory const* responseFactory
    );
#endif // @header-generator platform
    // NOLINTEND
};
