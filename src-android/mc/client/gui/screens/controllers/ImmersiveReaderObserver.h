#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/code_builder/platform/WebviewObserver.h"

class ImmersiveReaderObserver : public ::WebviewObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mImmersiveReaderInterface;
    // NOLINTEND

public:
    // prevent constructor by default
    ImmersiveReaderObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImmersiveReaderObserver();

    virtual void onMessageRecieved(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onMessageRecieved(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
