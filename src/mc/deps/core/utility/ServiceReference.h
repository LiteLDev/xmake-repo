#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/PrioritizeSharedOwnership.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
class ServiceReference {};
#else // @header-generator platform
template <typename T>
class ServiceReference {
public:
    std::shared_lock<Bedrock::Threading::PrioritizeSharedOwnership> mLock;
    Bedrock::NonOwnerPointer<T>                                     mService;

    Bedrock::NonOwnerPointer<T> get() const { return mService; }

    explicit operator bool() const { return static_cast<bool>(mService); }

    template <class Fn>
    decltype(auto) doWith(Fn&& fn) {
        return (std::invoke(std::forward<Fn>(fn), *mService));
    }
};
#endif // @header-generator platform
