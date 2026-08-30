#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct LevelSummary;
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

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

} // namespace OreUI
