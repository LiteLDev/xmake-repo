#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/item/PageContent.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BookScreenManager;
class ClientInstanceScreenModel;
class UIPropertyBag;
namespace Json { class Value; }
// clang-format on

class BookScreenController : public ::ClientInstanceScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BookScreenManager;
class ClientInstanceScreenModel;
class UIPropertyBag;
struct PageContent;
namespace Json { class Value; }
// clang-format on

class BookScreenController : public ::ClientInstanceScreenController {
#else // @header-generator platform
class BookScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // BookScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class BookView : uchar {
        Viewing   = 0,
        Signing   = 1,
        Picking   = 2,
        Exporting = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<BookScreenManager>> mBookScreenManager;
    ::ll::TypedStorage<1, 1, bool const>                         mEditable;
    ::ll::TypedStorage<1, 1, bool>                               mEditingLeft;
    ::ll::TypedStorage<1, 1, bool>                               mEditingRight;
    ::ll::TypedStorage<1, 2, std::array<bool, 2>>                mPageHasCursor;
    ::ll::TypedStorage<8, 24, std::vector<PageContent>>          mPages;
    ::ll::TypedStorage<4, 4, int>                                mCurrentPage;
    ::ll::TypedStorage<4, 4, int>                                mCurrentPageIndex;
    ::ll::TypedStorage<8, 24, std::string>                       mTitle;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>        mFilteredTitle;
    ::ll::TypedStorage<8, 24, std::string>                       mAuthor;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>        mFilteredAuthor;
    ::ll::TypedStorage<8, 24, std::string>                       mAuthorXUID;
    ::ll::TypedStorage<1, 1, ::BookScreenController::BookView>   mCurrentView;
    ::ll::TypedStorage<1, 1, bool>                               mForceUIRefresh;
    ::ll::TypedStorage<4, 4, int>                                mPickPageIndex;
    ::ll::TypedStorage<8, 24, std::string>                       mPageBlockedText;
    ::ll::TypedStorage<1, 1, bool>                               mShouldRefreshText;
    ::ll::TypedStorage<1, 1, bool>                               mShouldUseFilteredText;
    ::ll::UntypedStorage<8, 24>                                  mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    BookScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BookScreenController();

    virtual void preFrameTick();

    virtual ::ui::DirtyFlag tick();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual bool _isStillValid() const;

    virtual std::string _getButtonBDescription();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BookScreenController(std::shared_ptr<ClientInstanceScreenModel>, int, bool, int, ::BlockActor*);

    MCNAPI void _addPageAt(int, ::PageContent const&);

    MCNAPI void _addPhotoPageAt(int, std::string const&);

    MCNAPI int _getPickIndex(char const*, ::UIPropertyBag&);

    MCNAPI void _parsePageText(int);

    MCNAPI void _swapPages(int, int);

    MCNAPI void _tryFirePageTurnSound(::UIPropertyBag const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, int, bool, int, ::BlockActor*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preFrameTick();

    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI bool $_isStillValid() const;

    MCNAPI std::string $_getButtonBDescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class BookView : uchar {
        Viewing   = 0,
        Signing   = 1,
        Picking   = 2,
        Exporting = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BookScreenManager>> mBookScreenManager;
    ::ll::TypedStorage<1, 1, bool const>                             mEditable;
    ::ll::TypedStorage<1, 1, bool>                                   mEditingLeft;
    ::ll::TypedStorage<1, 1, bool>                                   mEditingRight;
    ::ll::TypedStorage<1, 2, ::std::array<bool, 2>>                  mPageHasCursor;
    ::ll::TypedStorage<8, 24, ::std::vector<::PageContent>>          mPages;
    ::ll::TypedStorage<4, 4, int>                                    mCurrentPage;
    ::ll::TypedStorage<4, 4, int>                                    mCurrentPageIndex;
    ::ll::TypedStorage<8, 32, ::std::string>                         mTitle;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>        mFilteredTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                         mAuthor;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>        mFilteredAuthor;
    ::ll::TypedStorage<8, 32, ::std::string>                         mAuthorXUID;
    ::ll::TypedStorage<1, 1, ::BookScreenController::BookView>       mCurrentView;
    ::ll::TypedStorage<1, 1, bool>                                   mForceUIRefresh;
    ::ll::TypedStorage<4, 4, int>                                    mPickPageIndex;
    ::ll::TypedStorage<8, 32, ::std::string>                         mPageBlockedText;
    ::ll::TypedStorage<1, 1, bool>                                   mShouldRefreshText;
    ::ll::TypedStorage<1, 1, bool>                                   mShouldUseFilteredText;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    BookScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BookScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void preFrameTick() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual ::std::string _getButtonBDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BookScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        int                                            bookSlot,
        bool                                           editable,
        int                                            page,
        ::BlockActor*                                  lectern
    );

    MCAPI void _addPageAt(int index, ::PageContent const& page);

    MCAPI void _addPhotoPageAt(int index, ::std::string const& photoName);

    MCAPI void _parsePageText(int index);

    MCAPI void _setPageText(int index, ::std::string const& text);

    MCAPI void _swapPages(int page1Index, int page2Index);

    MCAPI void _tryFirePageTurnSound(::UIPropertyBag const& bag) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int _getPickIndex(char const* collectionPrefix, ::UIPropertyBag& bag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        int                                            bookSlot,
        bool                                           editable,
        int                                            page,
        ::BlockActor*                                  lectern
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $preFrameTick();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI bool $_isStillValid() const;

    MCAPI ::std::string $_getButtonBDescription();
    // NOLINTEND
#else // @header-generator platform
    enum class BookView : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};
