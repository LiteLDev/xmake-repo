#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
// clang-format on

namespace Gameface {

class TemporaryTextureHolder {
public:
    // TemporaryTextureHolder inner types define
    using ImageId = ulong;

    using TextureResource = std::variant<cg::ImageBuffer, mce::TexturePtr, std::shared_ptr<GeometryAtlas::IAtlasTile>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::TypedStorage<8, 8, ulong> mId;
    ::ll::TypedStorage<8, 24, std::map<ulong, std::variant<cg::ImageBuffer, mce::TexturePtr, std::shared_ptr<GeometryAtlas::IAtlasTile>>>> mTextureResources;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void dropImageBuffer(ulong);

    MCNAPI ulong holdImageBuffer(::cg::ImageBuffer);

    MCNAPI ~TemporaryTextureHolder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Gameface
