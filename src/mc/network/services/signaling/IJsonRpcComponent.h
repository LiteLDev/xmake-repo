#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace JsonRpc { class JsonRpcProvider; }
// clang-format on

class IJsonRpcComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IJsonRpcComponent() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initialize(std::shared_ptr<JsonRpc::JsonRpcProvider>) = 0;
#else // @header-generator platform
    virtual void initialize(::std::shared_ptr<::JsonRpc::JsonRpcProvider> provider) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
