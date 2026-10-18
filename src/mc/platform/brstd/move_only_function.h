#pragma once

#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/_HeaderOutputPredefine.h"
#include <type_traits>
#else // @header-generator platform
#include "mc/platform/brstd/detail/function_invoke.h"
#endif // @header-generator platform

namespace brstd {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
class move_only_function {
#else // @header-generator platform
template <class Signature>
class move_only_function
: public detail::function::function_invoke<detail::function::DerivedType::MoveOnly, Signature> {
    using base = detail::function::function_invoke<detail::function::DerivedType::MoveOnly, Signature>;

#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    move_only_function() noexcept = default;
    move_only_function(std::nullptr_t) noexcept {}
#else // @header-generator platform
    using base::base;
    using base::operator();
#endif // @header-generator platform
    move_only_function(move_only_function&&) noexcept            = default;
    move_only_function& operator=(move_only_function&&) noexcept = default;
    move_only_function(move_only_function const&)                = delete;
    move_only_function& operator=(move_only_function const&)     = delete;
#if defined(LL_PLAT_A) // @header-generator platform

    template <typename F, typename = std::enable_if_t<!std::is_same_v<std::decay_t<F>, move_only_function>>>
    move_only_function(F&&) noexcept : mHasValue(true) {}

    template <typename F, typename = std::enable_if_t<!std::is_same_v<std::decay_t<F>, move_only_function>>>
    move_only_function& operator=(F&&) noexcept {
        mHasValue = true;
#else // @header-generator platform
    template <class F>
        requires std::is_constructible_v<move_only_function, F>
    move_only_function& operator=(F&& f) {
        *this = move_only_function{std::forward<F>(f)};
#endif // @header-generator platform
        return *this;
    }
#if defined(LL_PLAT_A) // @header-generator platform

    move_only_function& operator=(std::nullptr_t) noexcept {
        mHasValue = false;
        return *this;
    }

    explicit operator bool() const noexcept { return mHasValue; }
    bool     operator==(std::nullptr_t) const noexcept { return !mHasValue; }
    bool     operator!=(std::nullptr_t) const noexcept { return mHasValue; }

private:
    bool mHasValue{false};
#else // @header-generator platform
    friend void swap(move_only_function& f1, move_only_function& f2) noexcept { f1.swap(f2); }
#endif // @header-generator platform
};
#if defined(LL_PLAT_A) // @header-generator platform

template <typename T0>
bool operator==(std::nullptr_t, move_only_function<T0> const& fn) noexcept {
    return fn == nullptr;
}

template <typename T0>
bool operator!=(std::nullptr_t, move_only_function<T0> const& fn) noexcept {
    return fn != nullptr;
}

#else // @header-generator platform
#endif // @header-generator platform
} // namespace brstd
