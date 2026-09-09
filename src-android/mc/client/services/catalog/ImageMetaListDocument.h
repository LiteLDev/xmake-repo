#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/CommonImage.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ImageMetaListDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<CommonImage>> mImages;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageMetaListDocument& operator=(ImageMetaListDocument const&);
    ImageMetaListDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommonImage* begin();

    MCNAPI const CommonImage* begin() const;

    MCNAPI bool empty() const;

    MCNAPI CommonImage* end();

    MCNAPI const CommonImage* end() const;

    MCNAPI void fromJson(::Json::Value const&, bool);

    MCNAPI ulong size() const;

    MCNAPI ~ImageMetaListDocument();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
