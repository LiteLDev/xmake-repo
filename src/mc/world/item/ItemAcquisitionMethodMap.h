#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/item/ItemAcquisitionMethod.h"

class ItemAcquisitionMethodMap {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& getItemAcquisitionMethodName(::ItemAcquisitionMethod);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string const& getItemAcquisitionMethodName(::ItemAcquisitionMethod acquisitionMethod);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BidirectionalUnorderedMap<ItemAcquisitionMethod, std::string> const& mMap();
#else // @header-generator platform
    MCAPI static ::BidirectionalUnorderedMap<::ItemAcquisitionMethod, ::std::string> const& mMap();
#endif // @header-generator platform
    // NOLINTEND
};
