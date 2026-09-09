#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/ImageId.h"
#include "mc/deps/core/http/StatusCode.h"

// auto generated forward declare list
// clang-format off
class ImageMetaListDocument;
class ResourceLocation;
struct CommonImage;
namespace catalog { struct ImageInfo; }
// clang-format on

namespace catalog {

class ICatalogImageResourceManager {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ICatalogImageResourceManager() = default;

    virtual void addImage(::CommonImage const&) = 0;

    virtual void addImages(::ImageMetaListDocument const&, ::catalog::ImageId) = 0;

    virtual void addImages(::ImageMetaListDocument const&) = 0;

    virtual void addKeyArtAndThumbnail(::CommonImage const&) = 0;

    virtual void fetchAllImages(std::function<void (Bedrock::Http::StatusCode, catalog::ImageInfo&)>) = 0;

    virtual void fetchFirstImageById(::catalog::ImageId, std::function<void (Bedrock::Http::StatusCode, catalog::ImageInfo&)>) = 0;

    virtual void fetchImagesById(::catalog::ImageId, std::function<void (Bedrock::Http::StatusCode, catalog::ImageInfo&)>) = 0;

    virtual ::ResourceLocation const& getFirstImageResourceOfImageId(::catalog::ImageId) const = 0;

    virtual int getImageCountForAllImages() const = 0;

    virtual ::ResourceLocation const& getImageResourceLocationAtIndexById(::catalog::ImageId, int) const = 0;

    virtual ::ResourceLocation const& getImageResourceLocationAtIndexById(int) const = 0;

    virtual std::string const& getTextureVersion() const = 0;

    virtual int getTotalImageCountForImageTypes(::catalog::ImageId) const = 0;

    virtual bool hasAllImageOfDesiredIds(::catalog::ImageId const) const = 0;

    virtual bool hasAnyImagesOfDesiredIds(::catalog::ImageId const) const = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace catalog
