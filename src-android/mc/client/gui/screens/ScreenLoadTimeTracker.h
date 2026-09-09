#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class IUIEventTelemetry;
// clang-format on

class ScreenLoadTimeTracker : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup>        mTaskGroup;
    ::ll::TypedStorage<8, 8, ::IUIEventTelemetry&> mEventing;
    ::ll::TypedStorage<4, 4, uint>                 mUserId;
    ::ll::UntypedStorage<8, 16>                    mCurrentTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenLoadTimeTracker& operator=(ScreenLoadTimeTracker const&);
    ScreenLoadTimeTracker(ScreenLoadTimeTracker const&);
    ScreenLoadTimeTracker();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenLoadTimeTracker();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScreenLoadTimeTracker(::IUIEventTelemetry&);

    MCNAPI void setLocalUserId(uint const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IUIEventTelemetry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
