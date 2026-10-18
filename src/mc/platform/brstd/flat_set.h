#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/brstd/associative_adapter.h"

#endif // @header-generator platform
namespace brstd {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0, typename T1, typename T2>
class flat_set {};
#else // @header-generator platform
template <typename Key, typename Compare = std::less<Key>, typename KeyContainer = std::vector<Key>>
class flat_set : public associative_adapter<Key, no_value_t, Compare, KeyContainer, no_mapped_container_t> {
    using container_type = KeyContainer;
};

static_assert(flat_set<int>::no_mapped_container == true);
#endif // @header-generator platform

} // namespace brstd
