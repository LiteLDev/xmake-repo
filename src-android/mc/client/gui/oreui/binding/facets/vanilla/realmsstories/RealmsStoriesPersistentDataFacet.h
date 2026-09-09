#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/MemberFilterOption.h"
#include "mc/client/realms/MemberSortOption.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ProfanityContext;
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesPersistentDataFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsStoriesPersistentDataFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                      mProfanityContext;
    ::ll::TypedStorage<8, 8, std::string&>                           mCurrentStoryId;
    ::ll::TypedStorage<8, 8, std::string&>                           mPostInProgressBody;
    ::ll::TypedStorage<8, 8, std::string&>                           mCommentInProgressBody;
    ::ll::TypedStorage<8, 8, std::string&>                           mStoryScreenshotSelectionFilePath;
    ::ll::TypedStorage<8, 8, std::string&>                           mCurrentMemberSearchText;
    ::ll::TypedStorage<8, 8, ::Realms::Stories::MemberFilterOption&> mCurrentMemberFilterOption;
    ::ll::TypedStorage<8, 8, ::Realms::Stories::MemberSortOption&>   mCurrentMemberSortOption;
    ::ll::TypedStorage<8, 8, bool&>                                  mNewPostAvailable;
    ::ll::TypedStorage<1, 1, bool>                                   mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesPersistentDataFacet& operator=(RealmsStoriesPersistentDataFacet const&);
    RealmsStoriesPersistentDataFacet(RealmsStoriesPersistentDataFacet const&);
    RealmsStoriesPersistentDataFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesPersistentDataFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsStoriesPersistentDataFacet(
        std::shared_ptr<Realms::Stories::FacetStateManager>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>>
    );

    MCNAPI std::string const& getCommentInProgressBody() const;

    MCNAPI ::Realms::Stories::MemberFilterOption& getCurrentMemberFilterOption() const;

    MCNAPI std::string const& getCurrentMemberSearchText() const;

    MCNAPI ::Realms::Stories::MemberSortOption& getCurrentMemberSortOption() const;

    MCNAPI std::string const& getCurrentStoryId() const;

    MCNAPI bool getNewPostAvailable() const;

    MCNAPI std::string const& getPostInProgressBody() const;

    MCNAPI std::string const& getStoryScreenshotSelectionFilePath() const;

    MCNAPI void setCommentInProgressBody(std::string const&);

    MCNAPI void setCurrentMemberFilterOption(::Realms::Stories::MemberFilterOption);

    MCNAPI void setCurrentMemberSearchText(std::string const&);

    MCNAPI void setCurrentMemberSortOption(::Realms::Stories::MemberSortOption);

    MCNAPI void setCurrentStoryId(std::string const&);

    MCNAPI void setNewPostAvailable(bool);

    MCNAPI void setPostInProgressBody(std::string const&);

    MCNAPI void setStoryScreenshotSelectionFilePath(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[37]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<Realms::Stories::FacetStateManager>,
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
