#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct LevelSummary;
namespace OreUI { class IResourceAllowList; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct LevelSummary;
namespace OreUI { class IResourceAllowList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct LevelSummaryBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72>            mWorldIconPathString;
    ::ll::TypedStorage<8, 24, std::string> mFileSizeString;
    ::ll::TypedStorage<8, 24, std::string> mLastSavedString;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSummaryBindings& operator=(LevelSummaryBindings const&);
    LevelSummaryBindings(LevelSummaryBindings const&);
    LevelSummaryBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    LevelSummaryBindings(::LevelSummary const&, ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>);

    MCNAPI ~LevelSummaryBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelSummary const&, ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct LevelSummaryBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath> mWorldIconPathString;
    ::ll::TypedStorage<8, 32, ::std::string>          mFileSizeString;
    ::ll::TypedStorage<8, 32, ::std::string>          mLastSavedString;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSummaryBindings& operator=(LevelSummaryBindings const&);
    LevelSummaryBindings(LevelSummaryBindings const&);
    LevelSummaryBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelSummaryBindings(
        ::LevelSummary const&                                      levelSummary,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ::OreUI::LevelSummaryBindings& operator=(::OreUI::LevelSummaryBindings&&);

    MCAPI ~LevelSummaryBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::LevelSummary const&                                      levelSummary,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct LevelSummaryBindings {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
