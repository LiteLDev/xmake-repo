#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/util/ViewStatus.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/ContainerID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class ItemStack;
class JpegCommentWriter;
class LecternBlockActor;
class PacketSender;
class Player;
class ScreenContext;
class SyncedPhotoView;
struct ActorUniqueID;
struct PageContent;
// clang-format on

class BookScreenManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                        mPlayer;
    ::ll::TypedStorage<4, 16, std::optional<BlockPos>>         mLecternPos;
    ::ll::TypedStorage<4, 4, int>                              mBookSlot;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                  mPacketSender;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SyncedPhotoView>> mPhotoView;
    ::ll::UntypedStorage<8, 24>                                mPickPictures;
    ::ll::UntypedStorage<8, 24>                                mPickPicturesInventory;
    ::ll::UntypedStorage<8, 24>                                mExportFiles;
    ::ll::TypedStorage<8, 8, ulong>                            mCurExportPage;
    ::ll::TypedStorage<8, 8, ulong>                            mPhotoItemsLimitPage;
    ::ll::TypedStorage<1, 1, bool>                             mEdited;
    ::ll::TypedStorage<1, 1, bool>                             mIsEdu;
    ::ll::TypedStorage<1, 1, bool>                             hasExportedFirstPhoto;
    // NOLINTEND

public:
    // prevent constructor by default
    BookScreenManager& operator=(BookScreenManager const&);
    BookScreenManager(BookScreenManager const&);
    BookScreenManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ItemStack const& _getBook();

    MCNAPI ::Core::PathBuffer<std::string> _getExportTempDir();

    MCNAPI ::ViewStatus _viewPage(::PageContent const&);

    MCNAPI void addPageAt(int, ::PageContent const&);

    MCNAPI float buildExportFiles(
        std::vector<PageContent> const&,
        ::ScreenContext&,
        ::JpegCommentWriter&,
        std::function<std::string(const std::string&)>
    );

    MCNAPI void deletePage(int);

    MCNAPI void editPage(int, ::PageContent const&);

    MCNAPI bool finalizeBook(std::string const&, std::string const&, std::string const&);

    MCNAPI void fireBookEditedEvent() const;

    MCNAPI void fireBookExportEvent() const;

    MCNAPI void firePageTurnSound(std::string const&, float, float) const;

    MCNAPI void fireSignedBookOpenedEvent(std::string const&, std::string const&, std::string const&) const;

    MCNAPI std::vector<PageContent> getBookPages();

    MCNAPI std::vector<Core::PathBuffer<std::string>> const& getExportFiles();

    MCNAPI std::optional<std::string> const getFilteredSignedAuthor();

    MCNAPI std::optional<std::string> const getFilteredTitle();

    MCNAPI int getLecternBookPage() const;

    MCNAPI std::string getPickPhotoInventoryName(int);

    MCNAPI std::string getPickPhotoName(int);

    MCNAPI ::Core::PathBuffer<std::string> const* getPickPicture(int);

    MCNAPI ::Core::PathBuffer<std::string> const* getPickPictureInventory(int);

    MCNAPI ulong getPickPictureInventorySize();

    MCNAPI ulong getPickPictureSize();

    MCNAPI ::Core::PathBuffer<std::string> getScreenshotPath(::PageContent const&);

    MCNAPI std::string const& getSignedAuthor();

    MCNAPI std::string const& getTitle();

    MCNAPI std::string const& getXUID();

    MCNAPI bool isOnLectern() const;

    MCNAPI bool lecternHasBook() const;

    MCNAPI bool lecternIsValid() const;

    MCNAPI void populatePickPics(std::vector<PageContent> const&);

    MCNAPI void setExitPage(int const);

    MCNAPI void startBookExport();

    MCNAPI void swapPages(int, int);

    MCNAPI float tickBookDownload(std::vector<PageContent> const&);

    MCNAPI void updateLectern(int);

    MCNAPI bool viewPage(::PageContent const&);

    MCNAPI ~BookScreenManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/util/ViewStatus.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class JpegCommentWriter;
class PacketSender;
class Player;
class ScreenContext;
class SyncedPhotoView;
struct PageContent;
// clang-format on

class BookScreenManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                                         mPlayer;
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>>                      mLecternPos;
    ::ll::TypedStorage<4, 4, int>                                               mBookSlot;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                   mPacketSender;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SyncedPhotoView>>              mPhotoView;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>> mPickPictures;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>> mPickPicturesInventory;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>> mExportFiles;
    ::ll::TypedStorage<8, 8, uint64>                                            mCurExportPage;
    ::ll::TypedStorage<8, 8, uint64>                                            mPhotoItemsLimitPage;
    ::ll::TypedStorage<1, 1, bool>                                              mEdited;
    ::ll::TypedStorage<1, 1, bool>                                              mIsEdu;
    ::ll::TypedStorage<1, 1, bool>                                              hasExportedFirstPhoto;
    // NOLINTEND

public:
    // prevent constructor by default
    BookScreenManager& operator=(BookScreenManager const&);
    BookScreenManager(BookScreenManager const&);
    BookScreenManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ItemStack const& _getBook();

    MCAPI ::Core::PathBuffer<::std::string> _getExportTempDir();

    MCAPI ::ViewStatus _viewPage(::PageContent const& page);

    MCAPI void addPageAt(int index, ::PageContent const& page);

    MCAPI float buildExportFiles(
        ::std::vector<::PageContent> const&                  pages,
        ::ScreenContext&                                     context,
        ::JpegCommentWriter&                                 writer,
        ::std::function<::std::string(::std::string const&)> profanityFilter
    );

    MCAPI void deletePage(int index);

    MCAPI void editPage(int index, ::PageContent const& page);

    MCAPI bool finalizeBook(::std::string const& title, ::std::string const& author, ::std::string const& authorXUID);

    MCAPI void fireBookEditedEvent() const;

    MCAPI void fireBookExportEvent() const;

    MCAPI void firePageTurnSound(::std::string const& eventName, float volume, float pitch) const;

    MCAPI void fireSignedBookOpenedEvent(
        ::std::string const& author,
        ::std::string const& authorXUID,
        ::std::string const& playerXUID
    ) const;

    MCAPI int getLecternBookPage() const;

    MCAPI ::std::string getPickPhotoInventoryName(int index);

    MCAPI ::std::string getPickPhotoName(int index);

    MCAPI ::Core::PathBuffer<::std::string> getScreenshotPath(::PageContent const& page);

    MCAPI ::std::string const& getSignedAuthor();

    MCAPI ::std::string const& getXUID();

    MCAPI bool lecternHasBook() const;

    MCAPI bool lecternIsValid() const;

    MCAPI void populatePickPics(::std::vector<::PageContent> const& pages);

    MCAPI void startBookExport();

    MCAPI void swapPages(int page1Index, int page2Index);

    MCAPI void updateLectern(int page);

    MCAPI ~BookScreenManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class BookScreenManager {};
#endif // @header-generator platform
#endif // @header-generator platform
