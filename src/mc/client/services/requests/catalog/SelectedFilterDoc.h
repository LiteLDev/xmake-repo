#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/requests/catalog/PositiveRange.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace catalog {

#if defined(LL_PLAT_A) // @header-generator platform
class SelectedFilterDoc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>             mId;
    ::ll::TypedStorage<4, 8, ::catalog::PositiveRange> mRange;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectedFilterDoc& operator=(SelectedFilterDoc const&);
    SelectedFilterDoc();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::catalog::PositiveRange const& getRange() const;

    MCNAPI bool hasValidRange() const;
    // NOLINTEND
};
#else // @header-generator platform
class SelectedFilterDoc {};
#endif // @header-generator platform

} // namespace catalog
