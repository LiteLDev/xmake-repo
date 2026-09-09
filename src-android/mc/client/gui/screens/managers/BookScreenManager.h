#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
