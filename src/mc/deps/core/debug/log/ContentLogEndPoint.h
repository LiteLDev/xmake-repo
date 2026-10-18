#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogEndPoint.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/typeid_t.h"

// auto generated forward declare list
// clang-format off
class ContentLog;
// clang-format on

class ContentLogEndPoint : public ::Bedrock::EnableNonOwnerReferences, public ::Bedrock::LogEndPoint {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ContentLogEndPoint inner types define
    using LogArea = ::LogArea;

    using LogLevel = ::LogLevel;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContentLogEndPoint();
#else // @header-generator platform
    virtual ~ContentLogEndPoint() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void log(char const*);
#else // @header-generator platform
    virtual void log(::LogArea const area, ::LogLevel const level, char const* message) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void log(::LogArea const, ::LogLevel const, char const*) = 0;
#else // @header-generator platform
    virtual void log(char const*) /*override*/;
#endif // @header-generator platform

    virtual bool logOnlyOnce() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ContentLogEndPoint();

    MCNAPI void _register(::Bedrock::typeid_t<ContentLog>);
#else // @header-generator platform
    MCNAPI void _register(::Bedrock::typeid_t<::ContentLog> id);
#endif // @header-generator platform

    MCNAPI void _unregister();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $log(char const*);
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
