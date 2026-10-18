#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/utility/Subject.h"
#endif // @header-generator platform

namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, typename T1>
class Observer {};
#else // @header-generator platform
template <class DerivedType, class LockType>
class Observer {
public:
    using SubjectType = ::Core::Subject<DerivedType, LockType>;

    SubjectType* mpSubject{};

public:
    Observer(Observer const&)               = delete;
    Observer&    operator=(Observer const&) = delete;
    SubjectType* getSubject() { return mpSubject; }

    Observer() = default;
    Observer(SubjectType& subject) : mpSubject(std::addressof(subject)) {}

    void removeFromSubject() {
        if (mpSubject) {
            mpSubject->removeObserver(*static_cast<DerivedType*>(this));
        }
    }

    virtual ~Observer() { removeFromSubject(); }

    virtual void _onSubjectDestroyed() {}
};

template <class ObserverType, class LockType>
Subject<ObserverType, LockType>::~Subject() {
    std::lock_guard<LockType> l{getLock()};
    for (auto& observer : mObservers) {
        observer->mpSubject = nullptr;
        observer->_onSubjectDestroyed();
    }
}
#endif // @header-generator platform

} // namespace Core
