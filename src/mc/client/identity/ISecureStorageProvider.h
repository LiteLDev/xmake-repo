#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class SecureStorage;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class ISecureStorageProvider {};
#endif // @header-generator platform

} // namespace Social
