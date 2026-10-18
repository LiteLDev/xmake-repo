#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
// clang-format on

namespace Scripting {

class ILifetimeScopeListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILifetimeScopeListener() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry&) = 0;
#else // @header-generator platform
    virtual void onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry& registry) = 0;
#endif // @header-generator platform

    virtual void onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&) = 0;
    // NOLINTEND
};

} // namespace Scripting
