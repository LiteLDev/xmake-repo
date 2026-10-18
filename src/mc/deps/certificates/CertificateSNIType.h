#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CertificateSNIType {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>              mCertificateThumbprint;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> certChain;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkeb519e;
    ::ll::UntypedStorage<8, 24> mUnkcdc81f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CertificateSNIType& operator=(CertificateSNIType const&);
    CertificateSNIType(CertificateSNIType const&);
    CertificateSNIType();
#endif // @header-generator platform
};
