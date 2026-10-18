#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class ClientScriptEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientScriptEventListener() = default;

    virtual ::EventResult onScriptKeyEvent(std::string const&, std::string const&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class ClientScriptEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientScriptEventListener() = default;

    virtual ::EventResult onScriptKeyEvent(::std::string const& eventID, ::std::string const& additionalInfo);
    // NOLINTEND
};
#else // @header-generator platform
class ClientScriptEventListener {};
#endif // @header-generator platform
#endif // @header-generator platform
