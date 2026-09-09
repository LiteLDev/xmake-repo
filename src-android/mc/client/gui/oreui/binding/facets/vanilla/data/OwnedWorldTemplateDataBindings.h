#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/world/OwnedWorldTemplateData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

struct OwnedWorldTemplateDataBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::World::OwnedWorldTemplateData> mOwnedWorldTemplateData;
    ::ll::UntypedStorage<8, 72>                                 mThumbnailPath;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedWorldTemplateDataBindings& operator=(OwnedWorldTemplateDataBindings const&);
    OwnedWorldTemplateDataBindings(OwnedWorldTemplateDataBindings const&);
    OwnedWorldTemplateDataBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool canBeRated();

    MCNAPI ~OwnedWorldTemplateDataBindings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::OreUI::OwnedWorldTemplateDataBindings fromOwnedWorldTemplateData(
        ::World::OwnedWorldTemplateData const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
