#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
public:
    // BookScreenController inner types define
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
};
