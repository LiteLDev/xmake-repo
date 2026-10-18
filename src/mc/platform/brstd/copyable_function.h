#pragma once

#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/_HeaderOutputPredefine.h"
#else // @header-generator platform
#include "mc/platform/brstd/detail/function_invoke.h"
#endif // @header-generator platform

namespace brstd {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
class copyable_function {};
#else // @header-generator platform
template <class Signature>
class copyable_function : public detail::function::function_invoke<detail::function::DerivedType::Copyable, Signature> {
    using base = detail::function::function_invoke<detail::function::DerivedType::Copyable, Signature>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
public:
    using base::base;
    using base::operator();
    copyable_function(copyable_function&&) noexcept            = default;
    copyable_function& operator=(copyable_function&&) noexcept = default;
    copyable_function(copyable_function const&)                = default;
    copyable_function& operator=(copyable_function const&)     = default;
    template <class F>
        requires std::is_constructible_v<copyable_function, F>
    copyable_function& operator=(F&& f) {
        *this = copyable_function{std::forward<F>(f)};
        return *this;
    }
    friend void swap(copyable_function& f1, copyable_function& f2) noexcept { f1.swap(f2); }
};
#endif // @header-generator platform
} // namespace brstd
