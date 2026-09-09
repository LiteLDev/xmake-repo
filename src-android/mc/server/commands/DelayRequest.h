#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
class ICommandOriginLoader;
class IRequestAction;
class ServerLevel;
// clang-format on

class DelayRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                           mTickToExecuteOn;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IRequestAction>> mAction;
    ::ll::TypedStorage<8, 24, std::string>                    mSerializationId;
    // NOLINTEND

public:
    // prevent constructor by default
    DelayRequest& operator=(DelayRequest const&);
    DelayRequest(DelayRequest const&);
    DelayRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DelayRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
