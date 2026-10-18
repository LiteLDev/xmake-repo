#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct cipher_list {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkcd5a22;
    ::ll::UntypedStorage<8, 8> mUnkf937fd;
    // NOLINTEND

public:
    // prevent constructor by default
    cipher_list& operator=(cipher_list const&);
    cipher_list(cipher_list const&);
    cipher_list();
};

} // namespace webrtc
#endif // @header-generator platform
