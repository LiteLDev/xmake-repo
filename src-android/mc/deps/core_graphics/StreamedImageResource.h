#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageResource.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace cg { struct ImageDescription; }
// clang-format on

namespace cg {

class StreamedImageResource : public ::cg::ImageResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mImageData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StreamedImageResource();

    virtual bool isEmpty() const;

    virtual bool isValid() const;

    virtual uint getSize() const;

    virtual ::cg::ImageBuffer const* getImage(uint) const;

    virtual void addImage(std::shared_ptr<cg::ImageResource>);

    virtual void addImage(::cg::ImageBuffer);

    virtual std::variant<std::vector<cg::ImageBuffer>, cg::ImageResource::StreamedResource> unwrapImageData();

    virtual ::cg::ImageDescription getImageDescription(uchar) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isEmpty() const;

    MCNAPI bool $isValid() const;

    MCNAPI uint $getSize() const;

    MCNAPI ::cg::ImageBuffer const* $getImage(uint) const;

    MCNAPI void $addImage(std::shared_ptr<cg::ImageResource>);

    MCNAPI void $addImage(::cg::ImageBuffer);

    MCNAPI std::variant<std::vector<cg::ImageBuffer>, cg::ImageResource::StreamedResource> $unwrapImageData();

    MCNAPI ::cg::ImageDescription $getImageDescription(uchar) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg
