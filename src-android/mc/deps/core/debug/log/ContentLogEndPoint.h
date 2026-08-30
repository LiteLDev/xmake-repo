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
    // ContentLogEndPoint inner types define
    using LogArea = ::LogArea;

    using LogLevel = ::LogLevel;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentLogEndPoint();

    virtual void log(char const*);

    virtual void log(::LogArea const, ::LogLevel const, char const*) = 0;

    virtual bool logOnlyOnce() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContentLogEndPoint();

    MCNAPI void _register(::Bedrock::typeid_t<ContentLog>);

    MCNAPI void _unregister();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
