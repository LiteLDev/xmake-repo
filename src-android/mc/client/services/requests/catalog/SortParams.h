#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/catalog/SortBy.h"
#include "mc/client/services/requests/catalog/SortDirection.h"

namespace catalog {

struct SortParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::catalog::SortBy>        mSortBy;
    ::ll::TypedStorage<4, 4, ::catalog::SortDirection> mSortDir;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SortParams();

    MCNAPI std::string getSortByAsStr() const;

    MCNAPI ::catalog::SortDirection const& getSortDirection() const;

    MCNAPI std::string getSortDirectionAsStr() const;

    MCNAPI bool operator==(::catalog::SortParams const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace catalog
