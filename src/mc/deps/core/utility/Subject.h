#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/utility/SingleThreadedLock.h"
#endif // @header-generator platform

namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, typename T1>
class Subject {};
#else // @header-generator platform
template <class ObserverType, class LockType>
class Subject {
public:
    LockType                                  mLock;
    std::vector<gsl::not_null<ObserverType*>> mObservers;

    LockType& getLock() { return mLock; }
    void      removeObserver(ObserverType& observer) {
        std::lock_guard<LockType> l{getLock()};
        erase_if(mObservers, [&](auto& v) { return v.get() == std::addressof(observer); });
    }

public:
    Subject() = default;
    ~Subject();
    Subject(Subject const&)            = delete;
    Subject& operator=(Subject const&) = delete;
};
#endif // @header-generator platform

} // namespace Core
