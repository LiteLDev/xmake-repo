#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ILocalPlayerEntityGetter.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class IClientInstance;
// clang-format on

class ClientInstanceLocalPlayerEntityGetter : public ::ILocalPlayerEntityGetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mClientInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstanceLocalPlayerEntityGetter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceLocalPlayerEntityGetter();

    virtual ::EntityContext* getLocalPlayerEntityContext() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientInstanceLocalPlayerEntityGetter(::IClientInstance const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EntityContext* $getLocalPlayerEntityContext() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
