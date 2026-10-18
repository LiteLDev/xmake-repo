#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
#include "mc/deps/certificates/WebToken.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ImmersiveReaderToken : public ::edu::auth::CredentialsObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mTokenString;
    ::ll::TypedStorage<8, 104, ::WebToken> mToken;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImmersiveReaderToken();

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsLost> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsLost> const&);
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
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
#include "mc/deps/certificates/WebToken.h"

// auto generated forward declare list
// clang-format off
namespace edu::auth { struct CredsLost; }
// clang-format on

class ImmersiveReaderToken : public ::edu::auth::CredentialsObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mTokenString;
    ::ll::TypedStorage<8, 128, ::WebToken>   mToken;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImmersiveReaderToken() /*override*/ = default;

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsLost> const& state);
    // NOLINTEND
};
#else // @header-generator platform
class ImmersiveReaderToken {};
#endif // @header-generator platform
#endif // @header-generator platform
