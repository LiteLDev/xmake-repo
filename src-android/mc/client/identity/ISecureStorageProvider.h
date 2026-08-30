#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SecureStorage;
// clang-format on

namespace Social {

class ISecureStorageProvider {
public:
    // ISecureStorageProvider inner types define
    using SecureStoragePtr = ::gsl::not_null<std::shared_ptr<SecureStorage>>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISecureStorageProvider() = default;

    virtual ::gsl::not_null<std::shared_ptr<SecureStorage>> getSecureStorage() = 0;
    // NOLINTEND
};

} // namespace Social
