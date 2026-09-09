#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/network/BaseConnectionRequest.h"

// auto generated forward declare list
// clang-format off
class WebToken;
struct ConnectionAuthInfo;
struct ConnectionSkinInfo;
struct SyncedClientOptionsComponent;
namespace Json { class Value; }
namespace Social { struct Nonce; }
// clang-format on

class SubClientConnectionRequest : public ::BaseConnectionRequest {
public:
    // prevent constructor by default
    SubClientConnectionRequest& operator=(SubClientConnectionRequest const&);
    SubClientConnectionRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SubClientConnectionRequest();

    virtual bool _isAuthTypeWellFormed() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SubClientConnectionRequest(::SubClientConnectionRequest const&);

    MCNAPI SubClientConnectionRequest(std::optional<WebToken>, ::Json::Value const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SubClientConnectionRequest create(
        ::ConnectionAuthInfo const&,
        std::string const&,
        std::string const&,
        ulong,
        std::string const&,
        ::ConnectionSkinInfo const&,
        ::InputMode,
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        ::SyncedClientOptionsComponent const&,
        std::optional<Social::Nonce> const&
    );

    MCNAPI static ::SubClientConnectionRequest fromString(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubClientConnectionRequest const&);

    MCNAPI void* $ctor(std::optional<WebToken>, ::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_isAuthTypeWellFormed() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
