#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct srtp_kernel_cipher_type {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk182764;
    ::ll::UntypedStorage<8, 8> mUnk2120c4;
    ::ll::UntypedStorage<8, 8> mUnk3dd3ef;
    // NOLINTEND

public:
    // prevent constructor by default
    srtp_kernel_cipher_type& operator=(srtp_kernel_cipher_type const&);
    srtp_kernel_cipher_type(srtp_kernel_cipher_type const&);
    srtp_kernel_cipher_type();
};
#endif // @header-generator platform
