#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/MemberFilterOption.h"
#include "mc/client/realms/MemberSortOption.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ProfanityContext;
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsStoriesPersistentDataFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsStoriesPersistentDataFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>> mProfanityContext;
    ::ll::TypedStorage<8, 8, ::std::string&>                                     mCurrentStoryId;
    ::ll::TypedStorage<8, 8, ::std::string&>                                     mPostInProgressBody;
    ::ll::TypedStorage<8, 8, ::std::string&>                                     mCommentInProgressBody;
    ::ll::TypedStorage<8, 8, ::std::string&>                                     mStoryScreenshotSelectionFilePath;
    ::ll::TypedStorage<8, 8, ::std::string&>                                     mCurrentMemberSearchText;
    ::ll::TypedStorage<8, 8, ::Realms::Stories::MemberFilterOption&>             mCurrentMemberFilterOption;
    ::ll::TypedStorage<8, 8, ::Realms::Stories::MemberSortOption&>               mCurrentMemberSortOption;
    ::ll::TypedStorage<8, 8, bool&>                                              mNewPostAvailable;
    ::ll::TypedStorage<1, 1, bool>                                               mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesPersistentDataFacet& operator=(RealmsStoriesPersistentDataFacet const&);
    RealmsStoriesPersistentDataFacet(RealmsStoriesPersistentDataFacet const&);
    RealmsStoriesPersistentDataFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesPersistentDataFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsStoriesPersistentDataFacet(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> realmsStoriesProvider,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>       profanityContext
    );

    MCAPI ::std::string const& getCommentInProgressBody() const;

    MCFOLD ::Realms::Stories::MemberFilterOption& getCurrentMemberFilterOption() const;

    MCFOLD ::std::string const& getCurrentMemberSearchText() const;

    MCFOLD ::Realms::Stories::MemberSortOption& getCurrentMemberSortOption() const;

    MCFOLD ::std::string const& getCurrentStoryId() const;

    MCAPI bool getNewPostAvailable() const;

    MCFOLD ::std::string const& getPostInProgressBody() const;

    MCFOLD ::std::string const& getStoryScreenshotSelectionFilePath() const;

    MCAPI void setCommentInProgressBody(::std::string const& body);

    MCAPI void setCurrentMemberFilterOption(::Realms::Stories::MemberFilterOption filterOption);

    MCAPI void setCurrentMemberSearchText(::std::string const& searchText);

    MCAPI void setCurrentMemberSortOption(::Realms::Stories::MemberSortOption sortOption);

    MCAPI void setCurrentStoryId(::std::string const& id);

    MCAPI void setNewPostAvailable(bool postAvailable);

    MCAPI void setPostInProgressBody(::std::string const& body);

    MCAPI void setStoryScreenshotSelectionFilePath(::std::string const& path);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> realmsStoriesProvider,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>       profanityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsStoriesPersistentDataFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
