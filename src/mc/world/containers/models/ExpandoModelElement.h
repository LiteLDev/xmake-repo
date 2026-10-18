#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/item/ItemInstance.h"

struct ExpandoModelElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance const>  item;
    ::ll::TypedStorage<4, 4, ::ContainerExpandStatus> status;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>            groupName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>          groupName;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ExpandoModelElement& operator=(ExpandoModelElement const&);
#else // @header-generator platform
#endif // @header-generator platform
    ExpandoModelElement();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ExpandoModelElement();
#else // @header-generator platform
    MCNAPI
    ExpandoModelElement(::ItemInstance const& _item, ::ContainerExpandStatus _status, ::std::string const& _groupName);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::ItemInstance const& _item, ::ContainerExpandStatus _status, ::std::string const& _groupName);
#endif // @header-generator platform
    // NOLINTEND
};
