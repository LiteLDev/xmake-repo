#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/ICatalogImageResourceManager.h"
#include "mc/client/services/catalog/ImageId.h"
#include "mc/client/services/catalog/ImageInfo.h"
#include "mc/deps/core/http/StatusCode.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class ImageMetaListDocument;
class ResourceLocation;
struct CommonImage;
namespace Core { class Path; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace catalog {

#if defined(LL_PLAT_A) // @header-generator platform
class ImageResourceManager : public ::catalog::ICatalogImageResourceManager,
                             public ::std::enable_shared_from_this<catalog::ImageResourceManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                     mTextureVersion;
    ::ll::TypedStorage<8, 24, std::vector<catalog::ImageInfo>> mImageInfoList;
    ::ll::TypedStorage<4, 40, std::recursive_mutex>            mImageInfoListMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ImageResourceManager();

    virtual void addImage(::CommonImage const&);

    virtual void addImages(::ImageMetaListDocument const&, ::catalog::ImageId);

    virtual void addImages(::ImageMetaListDocument const&);

    virtual void addKeyArtAndThumbnail(::CommonImage const&);

    virtual void fetchAllImages(std::function<void (Bedrock::Http::StatusCode, catalog::ImageInfo&)>);

    virtual void fetchFirstImageById(::catalog::ImageId, std::function<void (Bedrock::Http::StatusCode, catalog::ImageInfo&)>);

    virtual void fetchImagesById(::catalog::ImageId, std::function<void (Bedrock::Http::StatusCode, catalog::ImageInfo&)>);

    virtual ::ResourceLocation const& getFirstImageResourceOfImageId(::catalog::ImageId) const;

    virtual int getImageCountForAllImages() const;

    virtual ::ResourceLocation const& getImageResourceLocationAtIndexById(::catalog::ImageId, int) const;

    virtual ::ResourceLocation const& getImageResourceLocationAtIndexById(int) const;

    virtual std::string const& getTextureVersion() const;

    virtual int getTotalImageCountForImageTypes(::catalog::ImageId) const;

    virtual bool hasAllImageOfDesiredIds(::catalog::ImageId const) const;

    virtual bool hasAnyImagesOfDesiredIds(::catalog::ImageId const) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ImageResourceManager();

    MCNAPI void _addImageInfo(::catalog::ImageInfo const&);

    MCNAPI void _addImageInfo(::catalog::ImageId const, std::string const&, uchar);

    MCNAPI void _addImageInfoWithResolution(::catalog::ImageId const, std::string const&, uchar);

    MCNAPI void _fetchImage(ulong const, std::function<void(Bedrock::Http::StatusCode, catalog::ImageInfo&)>);

    MCNAPI ::catalog::ImageInfo& _getImageInfo(ulong);

    MCNAPI void addImage(::catalog::ImageId, ::CommonImage const&, int);

    MCNAPI bool hasImageOfType(::catalog::ImageId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void fetchImage(
        std::weak_ptr<catalog::ImageInfo>,
        std::function<void(Bedrock::Http::StatusCode, std::shared_ptr<catalog::ImageInfo>)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addImage(::CommonImage const&);

    MCNAPI void $addImages(::ImageMetaListDocument const&, ::catalog::ImageId);

    MCNAPI void $addImages(::ImageMetaListDocument const&);

    MCNAPI void $addKeyArtAndThumbnail(::CommonImage const&);

    MCNAPI void $fetchAllImages(std::function<void(Bedrock::Http::StatusCode, catalog::ImageInfo&)>);

    MCNAPI void
        $fetchFirstImageById(::catalog::ImageId, std::function<void(Bedrock::Http::StatusCode, catalog::ImageInfo&)>);

    MCNAPI void
        $fetchImagesById(::catalog::ImageId, std::function<void(Bedrock::Http::StatusCode, catalog::ImageInfo&)>);

    MCNAPI ::ResourceLocation const& $getFirstImageResourceOfImageId(::catalog::ImageId) const;

    MCNAPI int $getImageCountForAllImages() const;

    MCNAPI ::ResourceLocation const& $getImageResourceLocationAtIndexById(::catalog::ImageId, int) const;

    MCNAPI ::ResourceLocation const& $getImageResourceLocationAtIndexById(int) const;

    MCNAPI std::string const& $getTextureVersion() const;

    MCNAPI int $getTotalImageCountForImageTypes(::catalog::ImageId) const;

    MCNAPI bool $hasAllImageOfDesiredIds(::catalog::ImageId const) const;

    MCNAPI bool $hasAnyImagesOfDesiredIds(::catalog::ImageId const) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ImageResourceManager {};
#endif // @header-generator platform

} // namespace catalog
