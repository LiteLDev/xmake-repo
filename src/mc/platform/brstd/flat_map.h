#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/platform/brstd/associative_adapter.h"

namespace brstd {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename Key, typename T, typename Compare, typename KeyContainer, typename MappedContainer>
class flat_map : public ::brstd::associative_adapter<Key, T, Compare, KeyContainer, MappedContainer> {};
#else // @header-generator platform
template <
    typename Key,
    typename T,
    typename Compare         = std::less<Key>,
    typename KeyContainer    = std::vector<Key>,
    typename MappedContainer = std::vector<T>>
class flat_map : public associative_adapter<Key, T, Compare, KeyContainer, MappedContainer> {};

static_assert(flat_map<int, int>::no_mapped_container == false);
#endif // @header-generator platform

} // namespace brstd
