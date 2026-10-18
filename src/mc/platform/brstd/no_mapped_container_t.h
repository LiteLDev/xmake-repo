#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

#include "mc/platform/brstd/no_value_t.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace brstd { struct no_value_t; }
// clang-format on

namespace brstd {

struct no_mapped_container_t {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // no_mapped_container_t inner types declare
    // clang-format off
    struct iterator;
    // clang-format on

    // no_mapped_container_t inner types define
#else // @header-generator platform
#endif // @header-generator platform
    struct iterator {
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // iterator inner types define
        using difference_type = long;
#else // @header-generator platform
        using difference_type   = std::ptrdiff_t;
        using value_type        = ::brstd::no_value_t;
        using reference         = ::brstd::no_value_t&;
        using iterator_category = std::random_access_iterator_tag;

    public:
        reference operator*() const {
            static ::brstd::no_value_t value{};
            return value;
        }

        iterator&            operator++() { return *this; }
        iterator             operator++(int) { return *this; }
        iterator&            operator--() { return *this; }
        iterator             operator--(int) { return *this; }
        iterator&            operator+=(difference_type) { return *this; }
        iterator&            operator-=(difference_type) { return *this; }
        iterator             operator+(difference_type) const { return *this; }
        iterator             operator-(difference_type) const { return *this; }
        difference_type      operator-(iterator const&) const { return 0; }
        bool                 operator==(iterator const&) const  = default;
        std::strong_ordering operator<=>(iterator const&) const = default;
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using const_iterator = ::brstd::no_mapped_container_t::iterator;
#else // @header-generator platform
    using const_iterator = iterator;

    [[nodiscard]] iterator begin() const { return iterator(); }
    [[nodiscard]] iterator end() const { return iterator(); }
    [[nodiscard]] iterator rbegin() const { return iterator(); }
    [[nodiscard]] iterator rend() const { return iterator(); }
    [[nodiscard]] iterator cbegin() const { return iterator(); }
    [[nodiscard]] iterator cend() const { return iterator(); }
    [[nodiscard]] iterator crbegin() const { return iterator(); }
    [[nodiscard]] iterator crend() const { return iterator(); }
#endif // @header-generator platform
};

} // namespace brstd
