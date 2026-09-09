#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace persona::color { class SwatchList; }
namespace persona::color { struct Swatch; }
// clang-format on

namespace persona::color {

class SwatchListInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>            mSwatchList;
    ::ll::TypedStorage<8, 24, std::string> mName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const& getName() const;

    MCNAPI bool isValidIndex(ulong const) const;

    MCNAPI ::persona::color::Swatch const& operator[](ulong const) const;

    MCNAPI ulong size() const;
    // NOLINTEND
};

} // namespace persona::color
