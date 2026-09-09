#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd::detail {

union function_ref_storage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>           _obj;
    ::ll::UntypedStorage<8, 8>           _const_obj;
    ::ll::TypedStorage<8, 8, void (*)()> _func;
    // NOLINTEND
};
} // namespace brstd::detail
