#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/item/ItemAcquisitionMethod.h"

class ItemAcquisitionMethodMap {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string const& getItemAcquisitionMethodName(::ItemAcquisitionMethod);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BidirectionalUnorderedMap<ItemAcquisitionMethod, std::string> const& mMap();
    // NOLINTEND
};
