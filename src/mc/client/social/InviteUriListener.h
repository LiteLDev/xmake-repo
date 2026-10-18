#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/UriListener.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
namespace Social { class MultiplayerServiceManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class InviteUriListener : public ::UriListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Social::MultiplayerServiceManager&> mMuSeM;
    // NOLINTEND

public:
    // prevent constructor by default
    InviteUriListener& operator=(InviteUriListener const&);
    InviteUriListener(InviteUriListener const&);
    InviteUriListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InviteUriListener();

    virtual void onUri(::ActivationUri const&);

    virtual void tick();

    virtual void executeStartupUris();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InviteUriListener(::Social::MultiplayerServiceManager&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::MultiplayerServiceManager&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onUri(::ActivationUri const&);

    MCNAPI void $tick();

    MCNAPI void $executeStartupUris();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class InviteUriListener {};
#endif // @header-generator platform

} // namespace Social
