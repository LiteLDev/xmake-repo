#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Input::Debug {

#if defined(LL_PLAT_C) // @header-generator platform
class ISplitscreenRedirect : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISplitscreenRedirect() /*override*/ = default;

    virtual void toggle(uint64) = 0;

    virtual bool isToggled(uint64) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ISplitscreenRedirect {};
#endif // @header-generator platform

} // namespace Input::Debug
#endif // @header-generator platform
