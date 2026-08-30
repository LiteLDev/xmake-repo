#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JoinCodeIconData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> toolTip;
    ::ll::TypedStorage<8, 24, std::string> texture;
    // NOLINTEND

public:
    // prevent constructor by default
    JoinCodeIconData& operator=(JoinCodeIconData const&);
    JoinCodeIconData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JoinCodeIconData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<JoinCodeIconData> const& gData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
