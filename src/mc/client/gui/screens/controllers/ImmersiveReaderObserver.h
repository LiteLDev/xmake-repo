#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/code_builder/platform/WebviewObserver.h"

class ImmersiveReaderObserver : public ::WebviewObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>> mImmersiveReaderInterface;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onMessageRecieved(::std::string const& message) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onMessageRecieved(::std::string const& message);
    // NOLINTEND
};
#else // @header-generator platform
class ImmersiveReaderObserver {};
#endif // @header-generator platform
#endif // @header-generator platform
