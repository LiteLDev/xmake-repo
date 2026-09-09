#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/ISecureStorageProvider.h"

// auto generated forward declare list
// clang-format off
class SecureStorage;
// clang-format on

namespace Social {

class SecureStorageProvider : public ::Social::ISecureStorageProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<SecureStorage>> mStorage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SecureStorageProvider();

    virtual ::gsl::not_null<std::shared_ptr<SecureStorage>> getSecureStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::gsl::not_null<std::shared_ptr<SecureStorage>> $getSecureStorage();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
