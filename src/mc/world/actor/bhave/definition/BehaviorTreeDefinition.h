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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                        mTreeName;
    ::ll::TypedStorage<8, 24, std::string>                        mStringInput;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BehaviorDefinition>> mRoot;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                          mTreeName;
    ::ll::TypedStorage<8, 32, ::std::string>                          mStringInput;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BehaviorDefinition>> mRoot;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BehaviorTreeDefinition();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BehaviorDefinition const* getRoot() const;
#else // @header-generator platform
    MCAPI ~BehaviorTreeDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
