#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/item/ItemUseMethod.h"

class ItemUseMethodMap {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& getItemUseMethodName(::ItemUseMethod);
#else // @header-generator platform
    MCAPI static ::std::string const& getItemUseMethodName(::ItemUseMethod useMethod);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BidirectionalUnorderedMap<ItemUseMethod, std::string> const& mMap();
#else // @header-generator platform
    MCAPI static ::BidirectionalUnorderedMap<::ItemUseMethod, ::std::string> const& mMap();
#endif // @header-generator platform
    // NOLINTEND
};
