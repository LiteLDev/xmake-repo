#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/secure_storage/SecureStorage.h"

class NullSecureStorage : public ::SecureStorage {
public:
    // prevent constructor by default
    NullSecureStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NullSecureStorage();

    virtual bool add(std::string const&, std::string const&);

    virtual bool addOrUpdate(std::string const&, std::string const&);

    virtual bool remove(std::string const&);

    virtual bool get(std::string const&, std::string&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $add(std::string const&, std::string const&);

    MCNAPI bool $addOrUpdate(std::string const&, std::string const&);

    MCNAPI bool $remove(std::string const&);

    MCNAPI bool $get(std::string const&, std::string&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
