#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ProductInfo;
// clang-format on

struct QueryProductsResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>            mProducts;
    ::ll::TypedStorage<8, 24, std::string> mErrorMessage;
    ::ll::TypedStorage<8, 8, long>         mErrorCode;
    ::ll::TypedStorage<1, 1, bool>         mSuccess;
    // NOLINTEND
};
