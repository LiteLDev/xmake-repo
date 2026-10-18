#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
struct ClientBlockData;
// clang-format on

class IClientBlockData {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IClientBlockData() = default;

    virtual void visit(::brstd::function_ref<void(const ClientBlockData&)>) const;
    // NOLINTEND
};
#else // @header-generator platform
class IClientBlockData {};
#endif // @header-generator platform
