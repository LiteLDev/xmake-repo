#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/FacetCommentData.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class ProfanityContext;
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesCommentsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsStoriesCommentsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                         mCurrentStoryId;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::RealmsStories::FacetCommentData>> mComments;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                        mPostCommentPrevStatus;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::UntypedStorage<8, 24>                                                    mDateManager;
    ::ll::UntypedStorage<8, 24>                                                    mProfanityContext;
    ::ll::TypedStorage<1, 1, bool>                                                 mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesCommentsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesCommentsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsStoriesCommentsFacet(
        std::shared_ptr<Realms::Stories::FacetStateManager>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>>
    );

    MCNAPI ::Realms::Stories::PostStatus _getPostCommentStatus() const;

    MCNAPI void _regenerateView();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[31]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<Realms::Stories::FacetStateManager>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
