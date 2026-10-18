#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
class IBindable {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBindable();

    virtual void onReadyForBindings() = 0;

    virtual void onSuspend() = 0;

    virtual void onBindingsReleased() = 0;

    virtual void update(double const) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IBindable {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBindable() = default;

    virtual void onReadyForBindings() = 0;

    virtual void onSuspend() = 0;

    virtual void onBindingsReleased() = 0;

    virtual void update(double const time) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IBindable {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::Detail
