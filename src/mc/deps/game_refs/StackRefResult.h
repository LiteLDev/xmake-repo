#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/game_refs/GameRefs.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
class StackRefResult {};
#else // @header-generator platform
template <typename T>
class StackRefResult : public GameRefs<T>::StackResultStorage {
public:
    using Base = GameRefs<T>::StackResultStorage;
    using Base::Base;

    constexpr StackRefResult(Base const& ptr) : Base(ptr) {}
    constexpr StackRefResult(Base&& ptr) : Base(std::move(ptr)) {}
};
#endif // @header-generator platform
