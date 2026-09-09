#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct CommonImage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> id;
    ::ll::TypedStorage<8, 24, std::string> tag;
    ::ll::TypedStorage<8, 24, std::string> type;
    ::ll::TypedStorage<8, 24, std::string> url;
    ::ll::TypedStorage<8, 24, std::string> urlWithResolution;
    ::ll::TypedStorage<8, 24, std::string> localPath;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonImage(CommonImage const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommonImage(::Json::Value const&, bool);

    MCNAPI bool hasValidUrl() const;

    MCNAPI ~CommonImage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Json::Value const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
