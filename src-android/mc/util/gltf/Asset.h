#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace glTF {

struct Asset {
public:
    // Asset inner types declare
    // clang-format off
    struct Profile;
    // clang-format on

    // Asset inner types define
    struct Profile {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> api;
        ::ll::TypedStorage<8, 24, std::string> version;
        // NOLINTEND

    public:
        // prevent constructor by default
        Profile(Profile const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>            copyright;
    ::ll::TypedStorage<8, 24, std::string>            generator;
    ::ll::TypedStorage<8, 48, ::glTF::Asset::Profile> profile;
    ::ll::TypedStorage<8, 24, std::string>            version;
    // NOLINTEND

public:
    // prevent constructor by default
    Asset(Asset const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Asset();

    MCNAPI ~Asset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace glTF
