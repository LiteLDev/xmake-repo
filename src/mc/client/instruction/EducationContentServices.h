#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/FetchResult.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class FetchImageParams;
class InstructionalContentCollection;
class LessonItem;
class LessonItemCache;
class LibraryCollection;
class LibraryCollectionConfig;
class LibraryItem;
class WorldTemplateManager;
struct EduContentSearchResults;
struct InstructionalContentQueryContext;
namespace Core { class Path; }
// clang-format on

class EducationContentServices : public ::Bedrock::Threading::EnableQueueForMainThread,
                                 public ::std::enable_shared_from_this<EducationContentServices> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                 mCatalogService;
    ::ll::UntypedStorage<8, 24>                                 mWorldTemplateManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LessonItemCache>> mItemCache;
    // NOLINTEND

public:
    // prevent constructor by default
    EducationContentServices();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EducationContentServices();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<LibraryItem> _createItemAndCheckImported(::LibraryItem);

    MCNAPI void getLibraryItem(std::string const&, std::function<void(std::shared_ptr<LibraryItem>)>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _fetchCatalogItems(
        std::weak_ptr<EducationContentServices>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>> const&,
        std::weak_ptr<InstructionalContentCollection>,
        std::shared_ptr<InstructionalContentQueryContext>,
        std::shared_ptr<LibraryCollectionConfig>
    );

    MCNAPI static void _getCatalogImage(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>> const&,
        ::FetchImageParams const&,
        std::weak_ptr<LessonItem>,
        std::function<void()>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class EducationContentServices {};
#endif // @header-generator platform
