#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ISceneStack;
// clang-format on

class ConstCompositeSceneStackView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mMainStack;
    ::ll::UntypedStorage<8, 24> mClientInstanceStack;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstCompositeSceneStackView();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string getTopScreenName() const;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
// clang-format on

class ConstCompositeSceneStackView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> const> mMainStack;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack const> const> mClientInstanceStack;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getTopScreenName() const;
    // NOLINTEND
};
#else // @header-generator platform
class ConstCompositeSceneStackView {};
#endif // @header-generator platform
#endif // @header-generator platform
