#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd::detail {

union function_ref_storage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8>           _obj;
    ::ll::UntypedStorage<8, 8>           _const_obj;
    ::ll::TypedStorage<8, 8, void (*)()> _func;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkbdaf5d;
    ::ll::UntypedStorage<8, 8> mUnk2caf38;
    ::ll::UntypedStorage<8, 8> mUnkdf8495;
#endif // @header-generator platform
    // NOLINTEND
};
} // namespace brstd::detail
