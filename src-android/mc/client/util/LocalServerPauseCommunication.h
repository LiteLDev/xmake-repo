#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/ILocalServerPauseCommunication.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

class LocalServerPauseCommunication : public ::ILocalServerPauseCommunication {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mClientInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalServerPauseCommunication();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalServerPauseCommunication();

    virtual bool requestInGamePause(bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LocalServerPauseCommunication(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $requestInGamePause(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
