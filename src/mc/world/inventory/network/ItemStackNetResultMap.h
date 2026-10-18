#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"

class ItemStackNetResultMap {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string const& getItemStackNetResultName(::ItemStackNetResult);
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BidirectionalUnorderedMap<ItemStackNetResult, std::string> const& mMap();
#else // @header-generator platform
    MCNAPI static ::BidirectionalUnorderedMap<::ItemStackNetResult, ::std::string> const& mMap();
#endif // @header-generator platform
    // NOLINTEND
};
