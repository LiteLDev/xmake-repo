#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/brstd/bitset.h"
#endif // @header-generator platform

namespace Bedrock {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, T0 T1>
class EnumSet {};
#else // @header-generator platform
template <typename TEnum, auto SizeEnum>
class EnumSet {
public:
    using size_type                    = size_t;
    static constexpr size_type MaxSize = static_cast<size_type>(SizeEnum);
    using mContainertype               = brstd::bitset<MaxSize, std::underlying_type_t<TEnum>>;
    using value_type                   = TEnum;

    mContainertype mContainer;

    class iterator {
        using reference = TEnum;

    public:
        friend class EnumSet;
        iterator(EnumSet const& set, size_type index) : set_(&set), index_(index) {}
        EnumSet const* set_;
        size_type      index_;
    };
    static_assert(sizeof(iterator) == 16);

    using const_iterator = iterator;

    constexpr std::pair<iterator, bool> insert(value_type value) {
        using U  = std::underlying_type_t<TEnum>;
        auto idx = static_cast<U>(value);
        if (mContainer.test(idx)) {
            return {iterator(*this, idx), false};
        }
        mContainer.set(idx);
        return {iterator(*this, idx), true};
    }

    constexpr bool contains(value_type const value) const {
        using U = std::underlying_type_t<TEnum>;
        return mContainer.test(static_cast<U>(value));
    }
};
#endif // @header-generator platform

} // namespace Bedrock
