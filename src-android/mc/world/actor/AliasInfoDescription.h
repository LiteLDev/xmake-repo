#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Tag;
// clang-format on

struct AliasInfoDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>                                         mAliasName;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::shared_ptr<Tag>>> mAliasProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    AliasInfoDescription& operator=(AliasInfoDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AliasInfoDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
