#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/store_filter/FilterSectionType.h"
#include "mc/client/services/catalog/store_filter/Toggle.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace StoreFilter {

#if defined(LL_PLAT_A) // @header-generator platform
struct FilterCollectionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                      mPrefix;
    ::ll::TypedStorage<4, 4, ::StoreFilter::FilterSectionType>  mFilterType;
    ::ll::TypedStorage<1, 1, bool>                              mOneFilterSelection;
    ::ll::TypedStorage<1, 1, bool>                              mShowInStore;
    ::ll::TypedStorage<1, 1, bool>                              mShowInInventory;
    ::ll::TypedStorage<1, 1, bool>                              mShowInDressingRoom;
    ::ll::TypedStorage<8, 24, std::vector<StoreFilter::Toggle>> mToggleCollection;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterCollectionInfo& operator=(FilterCollectionInfo const&);
    FilterCollectionInfo(FilterCollectionInfo const&);
    FilterCollectionInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FilterCollectionInfo(
        std::string const&,
        bool const,
        bool const,
        bool const,
        bool const,
        std::vector<StoreFilter::Toggle>&
    );

    MCNAPI ~FilterCollectionInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::string const&, bool const, bool const, bool const, bool const, std::vector<StoreFilter::Toggle>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct FilterCollectionInfo {};
#endif // @header-generator platform

} // namespace StoreFilter
