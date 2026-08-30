#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CertificateSNIType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              mCertificateThumbprint;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> certChain;
    // NOLINTEND
};
