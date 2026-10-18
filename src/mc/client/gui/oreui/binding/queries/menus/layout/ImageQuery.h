#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/FetchStatus.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ILayoutImageSource;
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class ImageQuery : public ::OreUI::QueryBase<::OreUI::ImageQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::FetchStatus>>                   mFetchStatus;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                          mLocalPath;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ILayoutImageSource>>        mImageSource;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                               mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImageQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ImageQuery(::OreUI::GameDependencies const& game, ::std::string const& url);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& url);
    // NOLINTEND
};
#else // @header-generator platform
class ImageQuery {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
