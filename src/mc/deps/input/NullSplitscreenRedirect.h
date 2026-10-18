#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/ISplitscreenRedirect.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Input::Debug {

#if defined(LL_PLAT_C) // @header-generator platform
class NullSplitscreenRedirect : public ::Input::Debug::ISplitscreenRedirect {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void toggle(uint64) /*override*/;

    virtual bool isToggled(uint64) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $toggle(uint64);

    MCFOLD bool $isToggled(uint64) const;
    // NOLINTEND
};
#else // @header-generator platform
class NullSplitscreenRedirect {};
#endif // @header-generator platform

} // namespace Input::Debug
#endif // @header-generator platform
