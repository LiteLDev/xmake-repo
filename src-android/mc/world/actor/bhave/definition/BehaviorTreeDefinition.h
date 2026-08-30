#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BehaviorDefinition;
// clang-format on

class BehaviorTreeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                        mTreeName;
    ::ll::TypedStorage<8, 24, std::string>                        mStringInput;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BehaviorDefinition>> mRoot;
    // NOLINTEND

public:
    // prevent constructor by default
    BehaviorTreeDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BehaviorDefinition const* getRoot() const;
    // NOLINTEND
};
