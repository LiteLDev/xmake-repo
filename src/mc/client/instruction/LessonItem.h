#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class InstructionalContentCollection;
class ResourceLocation;
class WorldTemplateManager;
namespace mce { class UUID; }
// clang-format on

class LessonItem : public ::std::enable_shared_from_this<LessonItem> {
#else // @header-generator platform
class LessonItem {
#endif // @header-generator platform
public:
    // LessonItem inner types declare
    // clang-format off
    struct ImageInfo;
    // clang-format on

    // LessonItem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ImportState : int {
        NotImported = 0,
        Downloading = 1,
        Importing   = 2,
        Imported    = 3,
    };
#else // @header-generator platform
    enum class ImportState : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct ImageInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                          mUrl;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, int, (glm::qualifier)0>> mDimensions;
        ::ll::TypedStorage<8, 16, std::shared_ptr<ResourceLocation>>    mResourceLocation;
        ::ll::TypedStorage<1, 1, bool>                                  mFetching;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                   mImageUri;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LessonItem::ImageInfo>>         mImageInfo;
    ::ll::TypedStorage<8, 24, std::string>                                   mWorldDownloadUri;
    ::ll::TypedStorage<1, 1, bool>                                           mShouldRefresh;
    ::ll::TypedStorage<8, 24, std::string>                                   mProductId;
    ::ll::TypedStorage<8, 24, std::string>                                   mTitle;
    ::ll::TypedStorage<8, 24, std::string>                                   mDescription;
    ::ll::TypedStorage<8, 24, std::string>                                   mCreator;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                    mWorldId;
    ::ll::TypedStorage<4, 4, ::LessonItem::ImportState>                      mImportState;
    ::ll::TypedStorage<8, 8, ulong>                                          mWorldSize;
    ::ll::TypedStorage<8, 16, std::weak_ptr<InstructionalContentCollection>> mCollection;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LessonItem();

    virtual bool isValid() const;

    virtual bool isNew() const;

    virtual void _createImageInfo() = 0;

    virtual ::ResourceLocation const& _getImageResourceLocation() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearImportState();

    MCNAPI void clearRefresh();

    MCNAPI void flagRefresh();

    MCNAPI std::string const& getCreator() const;

    MCNAPI std::string const& getDescription() const;

    MCNAPI ::LessonItem::ImportState getImportState() const;

    MCNAPI std::string const& getProductId() const;

    MCNAPI std::optional<int>
           getTemplateIndex(::gsl::not_null<Bedrock::NonOwnerPointer<const WorldTemplateManager>> const&) const;

    MCNAPI ::ResourceLocation const& getThumbnailLocation() const;

    MCNAPI std::string const& getTitle() const;

    MCNAPI std::string const& getWorldDownloadUri() const;

    MCNAPI ulong getWorldSize();

    MCNAPI bool isLoading() const;

    MCNAPI void setWorldSize(ulong);

    MCNAPI bool shouldRefresh() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID resourceIdAsUUID(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid() const;

    MCNAPI bool $isNew() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct ImageInfo {};
#endif // @header-generator platform
};
