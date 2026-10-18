#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"

struct ChatScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSetText;
    ::ll::UntypedStorage<8, 48> mGetIntellisenseMessages;
    ::ll::UntypedStorage<8, 48> mTick;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatScreenControllerProxyCallbacks& operator=(ChatScreenControllerProxyCallbacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ChatScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"

struct ChatScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, bool)>>      mSetText;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::std::string> const&()>> mGetIntellisenseMessages;
    ::ll::TypedStorage<8, 64, ::std::function<::ui::DirtyFlag()>>                     mTick;
    // NOLINTEND
};
#else // @header-generator platform
struct ChatScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
