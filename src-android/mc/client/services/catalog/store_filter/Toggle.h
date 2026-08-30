#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/store_filter/FilterSectionType.h"
#include "mc/client/services/requests/catalog/PositiveRange.h"

// auto generated forward declare list
// clang-format off
class SearchQuery;
namespace catalog { struct SearchInfo; }
// clang-format on

namespace StoreFilter {

struct Toggle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>             mLabel;
    ::ll::TypedStorage<8, 24, std::string>             mTag;
    ::ll::TypedStorage<4, 8, ::catalog::PositiveRange> mRange;
    ::ll::TypedStorage<1, 1, bool>                     mDefaultState;
    ::ll::TypedStorage<1, 1, bool>                     mState;
    // NOLINTEND

public:
    // prevent constructor by default
    Toggle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Toggle(::StoreFilter::Toggle const&);

    MCNAPI Toggle(std::string const&&, std::string const&&, bool const);

    MCNAPI void addToggleInfoToQuery(::SearchQuery&, ::StoreFilter::FilterSectionType) const;

    MCNAPI void
    addToggleInfoToSearchInfo(::catalog::SearchInfo&, std::string const&, ::StoreFilter::FilterSectionType const) const;

    MCNAPI ~Toggle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StoreFilter::Toggle const&);

    MCNAPI void* $ctor(std::string const&&, std::string const&&, bool const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace StoreFilter
