#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Pkcs7 {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISystemInterface() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<uchar> verifyAndReadPKCS7Data(std::string const&) const = 0;
#else // @header-generator platform
    virtual ::std::vector<uchar> verifyAndReadPKCS7Data(::std::string const&) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Crypto::Pkcs7
