#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes {

#if defined(LL_PLAT_A) // @header-generator platform
template <::SharedTypes::AssetType T0>
struct Reference {};
#else // @header-generator platform
template <int type> // SharedTypes::AssetType
struct Reference {
    std::string mValue;

    bool     operator==(Reference const& other) const { return mValue == other.mValue; }
    explicit operator std::string const&() const { return mValue; }
};
#endif // @header-generator platform

} // namespace SharedTypes
