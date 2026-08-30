#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

namespace GeometryAtlas {

class GeometryAtlasCapture {
public:
    // GeometryAtlasCapture inner types define
    using Images = ::std::vector<::mce::Image>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::vector<::mce::Image> const>> mImages;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GeometryAtlasCapture();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace GeometryAtlas
