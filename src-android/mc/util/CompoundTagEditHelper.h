#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Tag;
// clang-format on

class CompoundTagEditHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tag*>                    mTag;
    ::ll::TypedStorage<8, 24, std::vector<Tag*>>        mParentTag;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mTagName;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundTagEditHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CompoundTag const* getParent() const;

    MCNAPI void pushChild(std::string const&);

    MCNAPI void replaceWith(std::string const&, std::unique_ptr<Tag>);

    MCNAPI ~CompoundTagEditHelper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
