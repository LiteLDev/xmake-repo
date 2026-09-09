#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CommonImage;
// clang-format on

class FetchImageParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mContentUrl;
    // NOLINTEND

public:
    // prevent constructor by default
    FetchImageParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FetchImageParams(std::string const&);

    MCNAPI FetchImageParams(std::string const&, ::glm::vec<2, int, (glm::qualifier)0> const&);

    MCNAPI FetchImageParams(::CommonImage const&, ::glm::vec<2, int, (glm::qualifier)0> const&);

    MCNAPI FetchImageParams(::CommonImage const&, int const, int const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);

    MCNAPI void* $ctor(std::string const&, ::glm::vec<2, int, (glm::qualifier)0> const&);

    MCNAPI void* $ctor(::CommonImage const&, ::glm::vec<2, int, (glm::qualifier)0> const&);

    MCNAPI void* $ctor(::CommonImage const&, int const, int const);
    // NOLINTEND
};
